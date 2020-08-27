//AMDG
//Program for calculating the probability that no members of a group will have matching birthdays
//Kenneth Burchfiel
#include <iostream>

using namespace std;

int main()

{
    double chanceofnomatch = 1; 
    int count = 1;
        for (double x = 365; x >= 0; x--) //For loop is equivalent to (365/365) * (364/365) * (363/365) . . . * (0/365)
    {
        chanceofnomatch *= x / 365; 
        cout << "The chance of not having a matching birthday with " << count << " birthday(s) is " << chanceofnomatch << ".\n"; 
        count++;
    }

    char c;
    cin >> c;
}
