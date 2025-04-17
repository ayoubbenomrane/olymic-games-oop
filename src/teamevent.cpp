#include "../headers/teamevent.h"
#include <iostream>

using namespace std;

void TeamEvent::simulate_event(){
    int i=rand()%2;
    if(i==0){
        cout << team1.get_country().get_name()<< "wins!" << endl;
    }else{  
        cout << team2.get_country().get_name()<< "wins!" << endl;
    }
}