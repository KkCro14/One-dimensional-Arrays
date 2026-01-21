#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int seats[size];

    cout << "Welcome to the Cinema Seat Booking System!" << endl;
    cout <<  "Insert requested seats (1-30): " << endl;

    for(int index = 0; index < size; index++)
    {
        int seat = index + 1;

        cout << "Seat " << seat << ": ";
        cin >> seats[index];

    }

    cout << "You have booked the following seats: " << endl;
    for(int index = 0; index < size; index++)
    {
        int seat = index + 1;
        cout << seats[index] << ", ";
    }

    cout << endl;

    cout << endl;   
    cout << "Due to a booking issue, seat " << seats[1] << " is no longer available. Please book a replacement below." << endl;
    cout << "Insert replacement seat (1-30): " << endl;
    cin >> seats[1];

    cout << "You have booked the following seats: " << endl;
    for(int index = 0; index < size; index++)
    {
        int seat = index + 1;
        cout << seats[index] << ", ";
    }

    cout << endl;   
    cout << "Thank you for using the Cinema Seat Booking System!" << endl;
    cout << endl;

return 0;

}