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
using namespace std;
class Team
{
private:
    vector<Athlete> athletes;
    Sport sport;
    Country country;

public:
    Team(const vector<Athlete>& athletes, const Sport& sport, const Country& country);
    void addAthlete(const Athlete& athlete);
    void removeAthlete(const Athlete& athlete);
    void display_team_info() const;
    vector<Athlete> get_athletes() const { return athletes; }
    Sport get_sport() const { return sport; }
    Country get_country() const { return country; }
};
