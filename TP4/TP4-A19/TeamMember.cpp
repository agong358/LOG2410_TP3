/****************************************************************************
**
** Classe TeamMember
** Author: p482457
** Date: 25-oct-2019
**
****************************************************************************/

#include "TeamMember.h"

// Define class static members
TeamComponentContainer TeamMember::m_emptyContainer;

TeamMember::TeamMember(std::string name, const QImage & photo)
{
	// A Completer
}

TeamMember::TeamMember(const TeamMember & mdd)
{
	// A Completer: constructeur de copie
}

TeamMember * TeamMember::clone(void) const
{
	// A Completer (créer un nouvel objet identique a this)
}

const QImage & TeamMember::getImage(void) const
{
	// A Completer
}

QImage & TeamMember::getImage(void)
{
	// A Completer
}

std::string TeamMember::getName(void) const
{
	// A Completer
}

void TeamMember::setName(std::string name)
{
	// A Completer
}

AbsTeamComponent& TeamMember::addTeamComponent(const AbsTeamComponent&)
{
    // Truc pour que le code compile. Rien à changer
	return *(*(m_emptyContainer.begin()));
}

TeamComponentIterator TeamMember::begin()
{
	// A Completer
}

TeamComponentIterator_const TeamMember::cbegin() const
{
	// A Completer
}

TeamComponentIterator_const TeamMember::cend() const
{
	// A Completer
}

TeamComponentIterator TeamMember::end()
{
	// A Completer
}

void TeamMember::deleteTeamComponent(TeamComponentIterator_const)
{
	// Rien a faire, un membre ne peut pas avoir d'enfants
}

