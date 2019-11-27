///////////////////////////////////////////////////////////
//  CommandInvoker.cpp
//  Implementation of the Class CommandInvoker
//  Created on:      08-nov.-2018 21:05:19
//  Original author: p482457
///////////////////////////////////////////////////////////

#include "CommandInvoker.h"

CommandInvoker* CommandInvoker::m_instance = nullptr;

CommandInvoker * CommandInvoker::getInstance(void)
{
	// Verifier si l'instance unique a deja ete allouee et sinon l'allouer
	return nullptr;
}

void CommandInvoker::execute(const CmdPtr & cmd)
{
	// Executer la commande et la stocker dans la liste des commandes faites

	// Vider la liste des commandes defaites
}

void CommandInvoker::undo()
{
	// Verifier si la liste des commandes faites n'est pas vide et si oui defaire la derniere commande faite
}

void CommandInvoker::redo()
{
	// Verifier si la liste des commandes defaites n'est pas vide et si oui refaire la derniere commande defaite
}

size_t CommandInvoker::getDoneCount(void) const
{
	// Retourner le nombre de commandes faites
	return 0;
}

size_t CommandInvoker::getUndoneCount(void) const
{
	// Retourner le nombre de commandes defaites
	return 0;
}
