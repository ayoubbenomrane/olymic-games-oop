#include "../headers/sport.h"
#include <iostream>
#include <string>

std::ostream& operator<<(std::ostream& os, const Sport& sport) {
    switch (sport) {
        case Sport::Basketball: os << "Basketball"; break;
        case Sport::Boxing: os << "Boxing"; break;
        case Sport::Swimming: os << "Swimming"; break;
        case Sport::Football: os << "Football"; break;
        case Sport::Athletics: os << "Athletics"; break;
        case Sport::Gymnastics: os << "Gymnastics"; break;
        case Sport::Tennis: os << "Tennis"; break;
        default: os << "Unknown Sport"; break;
    }
    return os;
}