#include<iostream>
using namespace std;
main()
{

float size;
float cost;
float area;
float costpersize;
float costperarea;


cout << endl << "Enter the size of the fertilizer bag in pounds: ";
cin >> size;

cout << endl << "Enter the cost of the bag: $";
cin >> cost;

cout << endl << "Enter the area in square feet that can be covered by the bag: ";
cin >> area;

costpersize = cost / size;
costperarea = cost / area;

cout << endl << "Cost of fertilizer per pound: $" << costpersize;

cout << endl << "Cost of fertilizing per square foot: $" << costperarea;




}