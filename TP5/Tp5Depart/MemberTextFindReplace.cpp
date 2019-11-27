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

MemberTextFindReplace::MemberTextFindReplace(const std::string * find_s, const std::string * replace_s)
{
	setStrings(find_s, replace_s);
}

void MemberTextFindReplace::processTeamMember(TeamMember & member)
{
	// Verifier si le nom du membre contient la chaine cherchee. Si oui
	//      stocker l'iterateur sur le membre courant
	//      si on doit remplacer la chaine
	//           proceder au remplacement
}

void MemberTextFindReplace::processTeamMemberRole(TeamMemberRole & member)
{
	// Traiter le role
	// Verifier si le role du membre contient la chaine cherchee. Si oui
	//      stocker l'iterateur sur le membre courant
	//      si on doit remplacer la chaine
	//           proceder au remplacement

	// Pour traiter le nom, on delegue au membre
}

void MemberTextFindReplace::processTeam(Team & team)
{
	// Pour traiter une equipe, on itere sur tous les membres en conservant dans le 
	// visiteur l'iterateur sur le composant courant en train d'etre visite
}

void MemberTextFindReplace::setStrings(const std::string * find_s, const std::string * replace_s)
{
	// Initialiser la chaine de recherche (qui peut etre nulle)
	// Verifier si la chaine de remplacement est non-nulle. Si oui initialiser m_doReplace a true et
	// conserver la chaine de remplacement
}

std::string MemberTextFindReplace::findString(void) const
{
	// Retourner la chaine de recherche
	return std::string();
}

std::string MemberTextFindReplace::replaceString(void) const
{
	// Retourner la chaine de remplacement
	return std::string();
}

bool MemberTextFindReplace::doReplace(void) const
{
	// Retourner l'indicateur de remplacement
	return false;
}

TeamComponentIteratorContainer MemberTextFindReplace::searchResult(void) const
{
	// Retourner les iterateurs sur les composantes trouvees ou modifiees
	return TeamComponentIteratorContainer();
}

void MemberTextFindReplace::clearSearch(void)
{
	// Vider la liste des iterateurs sur les composantes trouvees ou modifiees
}
