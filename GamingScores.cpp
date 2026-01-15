#include <iostream>
using namespace std;

int main()
{
    const int size = 5; // Number of players
    int scores[size]; // Array to hold scores

    cout << endl;
    cout << "Enter scores: " << endl; // asd user for scores

    for (int index = 0; index < size; index++) // Loop to get scores
    {
        int player = index + 1;// Player number

        cout << "Score for player " << player << ": "; // Prompt for score
        cin >> scores[index]; // place score into array
    }

    cout << "Scores entered: "; // Display scores

    for (int index = 0; index < size; index++) // Loop to display scores
    {
        cout << scores[index] << " ";
    }

    cout << endl;
    return 0; // completion
}