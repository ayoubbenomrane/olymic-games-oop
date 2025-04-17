#include "../headers/team.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Team::Team(const vector<Athlete>& athletes, const Sport& sport, const Country& country)
    : athletes(athletes), sport(sport), country(country) {}

void Team::addAthlete(const Athlete& athlete) {
    athletes.push_back(athlete);
}
void Team::removeAthlete(const Athlete& athlete) {
    athletes.erase(remove(athletes.begin(), athletes.end(), athlete), athletes.end());
}
void Team::display_team_info() const {
    cout<<"testing"<<endl;
    // cout << "Team Information:" << endl;
    // cout << "Country: " << country.get_name() << endl;
    // cout << "Sport: " << sport << endl;
    // cout << "Athletes:" << endl;
    // for (const auto& athlete : athletes) {
    //     cout << "- " << athlete.get_name() << endl;
    // }
}