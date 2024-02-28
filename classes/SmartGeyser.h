#include <iostream>
#include <string>
using namespace std;

class Smart_Geyser {
    public:
        bool is_powered_on;
        int target_temperature;
        int current_temperature;

    void set_target_temperature(int temp){
        this->target_temperature = temp;
    };
    void start_heating(){
        this->is_powered_on = true;
    }
    void stop_heating(){
        this->is_powered_on = false;
    }
};