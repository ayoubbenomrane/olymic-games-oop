#include "../headers/individualevent.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;    


void IndividualEvent::simulate_event() {
    if (participants.empty()) {
        cout << "No participants in the event." << endl;
        return;
    }

    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
    int winnerIndex = rand() % participants.size(); // Generate a random index
    cout << "The winner is:" << this->participants[winnerIndex].get_name()<< endl;
}