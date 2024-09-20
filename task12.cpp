#include<iostream>
using namespace std;
main()
{

int paintable;
int width;
int height;
int area;
int paintablewalls;

cout << endl << "Number of square meters you can paint: ";
cin >> paintable;

cout << endl << "Width of the single wall (in meters): ";
cin >> width;

cout << endl <<"Height of the single wall (in meters): ";
cin >> height;

area = width * height;
paintablewalls = paintable / area;

cout << endl << "Number of walls you can paint: " << paintablewalls;
}
