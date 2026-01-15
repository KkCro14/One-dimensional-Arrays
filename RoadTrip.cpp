#include <iostream>
using namespace std;

int main()
{

    const int size = 5;
    int stops[size];

    cout << "Input prices for each time you fueled up during your road trip: " << endl;

    for(int index = 0; index < size; index++)
    {
        int stop = index + 1;

        cout << "Price of stop " << stop << ": $";
        cin >> stops[index];
    }

    cout << endl;
    cout << "Here are the prices you entered for each stop: " << endl;

    for(int index = 0; index < size; index++)
    {
        int stop = index + 1;

        cout << "Cost of stop " << stop << ": $" << stops[index] << endl;
    }

    //finding maximum value
    int maxPrice = stops[0];
    for(int index = 1; index < size; index++)
    {
        if(stops[index] > maxPrice)
        {
            maxPrice = stops[index];
        }
    }
    cout << "Most expensive stop was: $" << maxPrice << endl;

    return 0;
}