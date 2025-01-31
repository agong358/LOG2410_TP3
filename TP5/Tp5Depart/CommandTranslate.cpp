/****************************************************************************
**
** Classe CommandTranslate
** Author: p482457
** Date: 17-nov-2019
**
****************************************************************************/

#include "CommandTranslate.h"
#include "MemberTextFindReplace.h"
#include "AbsTeamComponent.h"

using namespace std;

pair<string, string> CommandTranslate::translations[] = {
{"Premier", "Prime"},
{"Ministre", "Minister"},
{"Chef de l'", "Chief of "},
{"Membre", "Member"},
{"du Parlement", "of Parliement"}
};

size_t CommandTranslate::translationsCount = sizeof(CommandTranslate::translations) / sizeof(pair<string, string>);

CommandTranslate::CommandTranslate(AbsTeamComponent & component, TargetLanguage language)
	: m_target(component), m_language(language)
{
}

void CommandTranslate::cancel()
{
	// Construire un visiteur de traduction et l'appliquer a la composante dans le sens inverse
	MemberTextFindReplace *visitor = new MemberTextFindReplace(nullptr, nullptr);

	for (int i = 0; i < translationsCount; i++) 
	{
		string *string1 = (m_language != TargetLanguage::English_t) ? &translations[i].second : &translations[i].first;
		string *string2 = (m_language == TargetLanguage::English_t) ? &translations[i].second : &translations[i].first;

		(*visitor).setStrings(string2, string1);

		m_target.accept(*visitor);
	}
}

void CommandTranslate::execute()
{
	// Construire un visiteur de traduction et l'appliquer a la composante
	MemberTextFindReplace *visitor = new MemberTextFindReplace(nullptr, nullptr);

	for (int i = 0; i < translationsCount; ++i) 
	{
		string *string1 = (m_language != TargetLanguage::English_t) ? &translations[i].second : &translations[i].first;
		string *string2 = (m_language == TargetLanguage::English_t) ? &translations[i].second : &translations[i].first;

		(*visitor).setStrings(string1, string2);

		m_target.accept(*visitor);
	}
}
