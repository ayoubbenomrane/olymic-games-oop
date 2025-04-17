#pragma once  

enum class Sport {
    Basketball,
    Boxing,
    Swimming,
    Football,
    Athletics,  
    Gymnastics,
    Tennis,
};
ostream& operator<<(std::ostream& os, const Sport& sport);