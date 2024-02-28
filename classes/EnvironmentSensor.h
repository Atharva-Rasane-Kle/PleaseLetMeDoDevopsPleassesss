#include <iostream>
#include <string>
using namespace std;

class Environment_Sensor {
    public:
        string season;
        int temperature;

    string get_season(){
        return this->season;
    };

    int get_temperature(){
        return this->temperature;
    };
};