#include "../headers/event.h"
#include "../headers/individualevent.h"
#include "../headers/teamevent.h"
#include "../headers/athlete.h"
#include "../headers/country.h"
#include "../headers/team.h"
#include "../headers/sport.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Creating countries..." << endl;
    Country tunisia("Tunisia");
    cout<<tunisia.get_name();
        Country USA("USA");
    Athlete athlete1("John Doe", 25);
    // Athlete athlete2("Jane Smith", 22, tunisia, Sport::Swimming);

    // vector<Athlete> teamAthletes = {athlete1, athlete2};
    // Team team1(teamAthletes, Sport::Basketball, tunisia);
    // Team team2(teamAthletes, Sport::Basketball, USA);

    // Display team info
    //team1.display_team_info();

    // IndividualEvent individualEvent("event 1", "venue 1", "2023-10-01");
    // individualEvent.simulate_event();

    // TeamEvent teamEvent("event 2", "venue 2", "2023-10-02",team1, team2);
    // teamEvent.simulate_event();

    return 0;
}