#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int pin[size];

    cout << "Enter chosen Pin below: " << endl;

    for(int index = 0; index < size; index++)
    {
        cin >> pin[index];
    }

    int third_attempt = pin[2];

    return 0;
}