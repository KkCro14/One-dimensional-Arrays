#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int distance[size];

    cout << endl;
    cout << "Enter distances below: " << endl;

    for(int index = 0; index < size; index++)
    {
        cin >> distance[index];
    }

    int first_reading = distance[0];
    int last_reading = distance[size - 1];

    cout << endl;
    cout << "First reading: " << first_reading << endl;
    cout << "Last reading: " << last_reading << endl;
    cout << endl;


    return 0;
}