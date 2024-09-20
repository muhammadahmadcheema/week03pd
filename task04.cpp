#include<iostream>
using namespace std;
main()
{

int i;
int p;
int chances;

cout << "Enter Imposter Count: ";
cin >> i;

cout << endl << "Enter Player Count: ";
cin >>p;

chances = 100 * i / p;
cout << endl << "Chance of being an imposter: " << chances << "%";


}