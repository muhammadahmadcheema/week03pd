#include<iostream>
using namespace std;
main()
{
string name;
float weight;
float days;


cout << "Enter the Name of the Person: ";
cin >> name;

cout << endl << "Enter the target weight loss in kilograms: ";
cin >> weight;

days = weight * 15;

cout << endl << name << " will need " << days << " days to lose " << weight << " kg of weight by following the doctor's suggestions";
}


