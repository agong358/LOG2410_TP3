#include "Team.h"

Team::Team(std::string name) : m_name(name)
{
	// A Completer *DONE*
}

Team::Team(const Team & mdd) 
{
	m_name = mdd.getName();
	m_image = mdd.getImage();
	for (auto it = mdd.cbegin(); it != mdd.cend; it++) {
		addTeamComponent(*(it.operator->()->clone()));
	}
}

Team * Team::clone(void) const
{
	return new Team(*this);
	// A Completer (créer un nouvel objet identique a this)
	// *DONE*
}

const QImage & Team::getImage(void) const
{
	return m_image;
	// A Completer *DONE*
}

QImage & Team::getImage(void)
{
	return m_image;
	// A Completer *DONE*
}

std::string Team::getName(void) const
{
	return m_name;
	// A Completer *DONE*
}

void Team::setName(std::string name)
{
	m_name = name;
	// A Completer *DONE*
}

AbsTeamComponent& Team::addTeamComponent(const AbsTeamComponent & member)
{
	// A Completer: Ajouter un nouvel element dans la liste et le clonant et
	// retrourner une reference a l'objet insere dans la liste
	// return *(*(m_members.begin())); //!!

	m_members.push_back((TeamComponentPtr) member.clone());
	return *(m_members.back());
}

TeamComponentIterator Team::begin()
{
	return m_members.begin();
	// A Completer *DONE*
}

TeamComponentIterator_const Team::cbegin() const
{
	return m_members.cbegin();
	// A Completer *DONE*
}

TeamComponentIterator_const Team::cend() const
{
	return m_members.cend();
	// A Completer *DONE*
}

TeamComponentIterator Team::end()
{
	return m_members.end();
	// A Completer *DONE*
}

void Team::deleteTeamComponent(TeamComponentIterator_const child)
{
	m_members.erase(child); //!!
	// A Completer: eliminer de la liste l'element indique par l'iterateur
	// *DONE*
}

void Team::deleteAllComponents(void)
{
	m_members.clear();
	// A Completer : vider la liste et les attributs membres
	// *DONE*
}

