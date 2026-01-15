#include <iostream>
using namespace std;

int main()
{

   int size = 5; // Number of hours to track
   int steps[size]; // Array to store steps for each hour

    cout << "Step Tracker" << endl;
    cout << "============" << endl;

    cout << "Enter the number of steps taken today: " << endl; // Prompt user for input
    
    for(int index = 0; index < size; index++) // Loop to get steps for each hour
    {
        int hour = index + 1; // Calculate hour number
        cout << "Hour " << hour << ": ";
        cin >> steps[index]; // Store input in array
    }

    cout << endl;
    cout << "You entered the following steps for each hour:" << endl; // Display entered steps

    for(int index = 0; index < size; index++) // Loop to display steps for each hour
    {
        int hour = index + 1;
        cout << "Hour " << hour << ": " << steps[index] << endl;
    }

    int total = 0;

    for (int index = 0; index < size; index++) //  Calculate total steps
    {
        total += steps[index]; // Sum up steps
    }

    cout << endl;
    cout << "Total steps taken today: " << total << endl;
    cout << endl;




return 0;
}