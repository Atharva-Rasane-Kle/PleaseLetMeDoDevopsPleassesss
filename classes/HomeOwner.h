#include <iostream>
#include <string>
using namespace std;

class Home_Owner {
    public:
        string name;
        bool is_up;

    void get_out_of_bed(){
       this->is_up = true;
    }

    void get_in_bed(){
        this->is_up = false;
    }
};