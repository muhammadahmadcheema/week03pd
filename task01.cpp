#include<iostream>
using namespace std;
main()
{

int n;
int sumangles;

cout << "Enter the number of sides of the polygon: ";
cin >> n;

sumangles = (n - 2) * 180;

cout << endl << "The sum of internal angles of a 40-sided polygon is: " << sumangles << " degrees";

}