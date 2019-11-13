#include "Team.h"

Team::Team(std::string name)
{
	// A Completer
}

Team::Team(const Team & mdd)
{
	// A Completer (constructeur de copie)
}

Team * Team::clone(void) const
{
	// A Completer (créer un nouvel objet identique a this)
}

const QImage & Team::getImage(void) const
{
	// A Completer
}

QImage & Team::getImage(void)
{
	// A Completer
}

std::string Team::getName(void) const
{
	// A Completer
}

void Team::setName(std::string name)
{
	// A Completer
}

AbsTeamComponent& Team::addTeamComponent(const AbsTeamComponent & member)
{
	// A Completer: Ajouter un nouvel element dans la liste et le clonant et
	// retrourner une reference a l'objet insere dans la liste
	return ;
}

TeamComponentIterator Team::begin()
{
	// A Completer
}

TeamComponentIterator_const Team::cbegin() const
{
	// A Completer
}

TeamComponentIterator_const Team::cend() const
{
	// A Completer
}

TeamComponentIterator Team::end()
{
	// A Completer
}

void Team::deleteTeamComponent(TeamComponentIterator_const child)
{
	// A Completer: eliminer de la liste l'element indique par l'iterateur
}

void Team::deleteAllComponents(void)
{
	// A Completer : vider la liste et les attributs membres
}
