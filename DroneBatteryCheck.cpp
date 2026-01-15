#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int batteryLevels[size];

    cout << "Enter the battery levels of the drones (0-100):" << endl;

    for(int index = 0; index < size; index++)
    {
        int droneNumber = index + 1;
        cout << "Drone " << droneNumber << ": ";
        cin >> batteryLevels[index];
    }

cout << endl;

cout << "Drone Battery Levels: " << endl;

    for(int index = 0; index < size; index++)
    {
        int droneNumber = index + 1;

        cout << "Drone " << droneNumber << " is on " << batteryLevels[index] << "% battery." << endl;
    
    }

     int low = 0;

    for(int index = 0; index < size; index++)
    {
        //number of drones with low battery
        if(batteryLevels[index] < 20)
        {
           low++;
        }
    }

    cout << endl;
    cout << low << " drone(s) below are %20 battery." << endl;

return 0;
}
