#include <iostream>
#include <string>
using namespace std;

class Smart_Bed {
    public:
        bool is_occupied;

    void detect_occupancy_change(bool isup){
        if (this->is_occupied == isup){
            this->is_occupied = !this->is_occupied;
        }
    };
};