#include <iostream>
#include <string>
using namespace std;

class Water_Heater {
    public:
        int current_temperature;

    void heat_water(){
        this->current_temperature +=1;
    };
};