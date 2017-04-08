
#include "ActionInit.hh"

ActionInit::ActionInit()
{ }

ActionInit::~ActionInit()
{ }

void ActionInit::Build() const
{
    SetUserAction(new PrimaryGen());
    SetUserAction(new RunGen());

    EventAct* eventAction = new EventAct;
    SetUserAction(eventAction);}


/*
  для спектра энергии:
  1) разбиваем спектр энергии на участки (например по 5 кэв)
  2) считаем относительное кол-во (0-1) частиц с данной энергией
  3) кидаем рандом - куда он попадет (0-1), с такой энергией и брать частицу

 */