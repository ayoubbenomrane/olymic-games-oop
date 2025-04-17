#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include "athlete.h"
#include "country.h"
#include "event.h"
#include "sport.h"
#include "team.h"

using namespace std;

class TeamEvent: public Event{
private:
    Team team1, team2;
public:
    void simulate_event();
    TeamEvent(string name, string venue, string date,  Team t1,  Team t2): Event(name, venue, date), team1(t1), team2(t2) {}
    

};
