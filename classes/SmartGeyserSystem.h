#include <iostream>
#include <string>
using namespace std;

class Smart_Geyser_System {
    public:
        bool is_active;  
        bool is_heating; 

    void activate();  
    void deactivate(); 
};