#include <iostream>
#include <string>
using namespace std;

class Smart_Geyser {
    public:
        bool is_powered_on;
        int target_temperature;
        int current_temperature;

    void set_target_temperature(int temp);
    void start_heating();
    void stop_heating();
};
