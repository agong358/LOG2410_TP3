/****************************************************************************
**
** Classe MemberTextFindReplace
** Author: p482457
** Date: 25-oct-2019
**
****************************************************************************/

#include "MemberTextFindReplace.h"
#include "TeamMember.h"
#include "TeamMemberRole.h"
#include "Team.h"

using std::string;

MemberTextFindReplace::MemberTextFindReplace(const string * find_s, const string * replace_s)
{
	setStrings(find_s, replace_s);
}

void MemberTextFindReplace::processTeamMember(TeamMember & member)
{
	// Verifier si le nom du membre contient la chaine cherchee. Si oui
	// stocker l'iterateur sur le membre courant si on doit remplacer 
	// la chaine 
	// proceder au remplacement
	unsigned long pos = member.getName().find(m_findString);

	if (pos != string::npos) 
	{
		m_currentMember = member.begin();

		if (m_doReplace) 
		{
			member.setName(member.getName().replace(pos, m_replaceString.length(), m_replaceString));
		}
	}
}

void MemberTextFindReplace::processTeamMemberRole(TeamMemberRole & member)
{
	// Traiter le role
	// Verifier si le role du membre contient la chaine cherchee. Si oui
	//      stocker l'iterateur sur le membre courant
	//      si on doit remplacer la chaine
	//           proceder au remplacement

	// Pour traiter le nom, on delegue au membre
	unsigned long pos = member.getRole().find(m_findString);

	if (pos != string::npos) 
	{
		m_currentMember = member.begin();

		if (m_doReplace) 
		{
			member.setRole(member.getRole().replace(pos, m_replaceString.length(), m_replaceString));
		}
	}

	processTeamMember(dynamic_cast<TeamMember &>(member.getMember()));
}

void MemberTextFindReplace::processTeam(Team & team)
{
	// Pour traiter une equipe, on itere sur tous les membres en conservant dans le 
	// visiteur l'iterateur sur le composant courant en train d'etre visite
	for (auto it = team.begin(); it != team.end(); it++) 
	{
		(*it).accept(*this);
	}
}

void MemberTextFindReplace::setStrings(const string * find_s, const string * replace_s)
{
	// Initialiser la chaine de recherche (qui peut etre nulle)
	// Verifier si la chaine de remplacement est non-nulle. Si oui initialiser m_doReplace a true et
	// conserver la chaine de remplacement

	if (find_s != NULL) 
	{
		m_findString = *find_s;
	}

	if (replace_s != nullptr) 
	{
		m_replaceString = *replace_s;
		m_doReplace = true;
	}

}

string MemberTextFindReplace::findString(void) const
{
	// Retourner la chaine de recherche
	return m_findString;
}

string MemberTextFindReplace::replaceString(void) const
{
	// Retourner la chaine de remplacement
	return m_replaceString;
}

bool MemberTextFindReplace::doReplace(void) const
{
	// Retourner l'indicateur de remplacement
	return m_doReplace;
}

TeamComponentIteratorContainer MemberTextFindReplace::searchResult(void) const
{
	// Retourner les iterateurs sur les composantes trouvees ou modifiees
	return m_result;
}

void MemberTextFindReplace::clearSearch(void)
{
	// Vider la liste des iterateurs sur les composantes trouvees ou modifiees
	m_result.clear();
}
