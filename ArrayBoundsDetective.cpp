#include <iostream> 
using namespace std;

int main()
{

    int size = 5;
    int arr[size];

    for(int index = 0; index < size; index++)// mistake was here. remove the equal sign. 
    {
        cin >> arr[index];
    }




    return 0;
}