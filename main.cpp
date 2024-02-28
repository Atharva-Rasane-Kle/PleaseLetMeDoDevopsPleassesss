// Please Let Me do Devops
#include <iostream>
#include <string>

// Including Classes From External Header Files
#include "classes/HomeOwner.h"
#include "classes/EnvironmentSensor.h"
#include "classes/SmartBed.h"
#include "classes/SmartGeyser.h"
#include "classes/SmartGeyserSystem.h"
#include "classes/WaterHeater.h" 


using namespace std;

/**
 * @author: Atharva
 * @ver: 2.0
 * @flaw1: Smart Home System class is not defined
 * @flaw2: Once the Home Owner gets up it is picked up by the Smart Bed
 * @flaw3: Geaser Doesnt Keep Checking if User fell asleep again
 **/

int main() {
    // Main Logic
    cout << "Stuff Happens Here!";

    Home_Owner H1;
    Environment_Sensor E1;
    Smart_Bed SB1;
    Smart_Geyser SG1;
    
    Smart_Geyser_System SGS1;
    Water_Heater WH1;

    // Initial Setup
    H1.name = "Atharva";
    H1.is_up = true;
    E1.season = "Summer";
    E1.temperature = 35;
    SB1.is_occupied = true;
    SG1.current_temperature = 35;
    SG1.is_powered_on = false;
    SG1.target_temperature = 62;
    SGS1.is_active = false;
    SGS1.is_heating = false;
    WH1.current_temperature = 35;


    // System Infinite Loot
    while(1){

        // Check If User Is Up
        if (H1.is_up)
        {
            SB1.detect_occupancy_change(H1.is_up);
        }else{
            SB1.detect_occupancy_change(H1.is_up);
        }
        
        // Check If Bed Is Occupied
        if (SB1.is_occupied == false){
            SGS1.activate();
            SG1.current_temperature = E1.get_temperature();
        }else{
            SGS1.deactivate();
        }
        
        // Check Id Smart Geyser System Is Active
        if (SGS1.is_active){
            if(WH1.current_temperature < SG1.target_temperature){
                SGS1.is_heating = true;
            }else{
                SGS1.is_heating = false;
                // break;
            }
            
            if(SGS1.is_heating){
                WH1.heat_water();
            }
        }
        
        
        // Print Water Temperature
        cout<<WH1.current_temperature<<endl;
    }
    

    return 0;
}