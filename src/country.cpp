#include "../headers/country.h"
#include <iostream>
#include <string>
using namespace std;
Country::Country(const string name): name(name) {}

void Country::show_medals() {
    std::cout << "Country: " << name << "\n"
              << "Gold Medals: " << golds << "\n"
              << "Silver Medals: " << silvers << "\n"
              << "Bronze Medals: " << bronzes << "\n";
}
