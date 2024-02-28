#include <iostream>
#include <string>
using namespace std;

class Environment_Sensor {
    public:
        string season;
        int temperature;

    string get_season();
    int get_temperature();
};