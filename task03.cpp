#include<iostream>
using namespace std;
main()
{
int ivelocity;
int fvelocity;
int time;
int acceleration;

cout << "Enter Initial Velocity (m/s): ";
cin >>  ivelocity;

cout << endl << "Enter Aceleration (m/s^2): ";
cin >> acceleration;

cout << endl << "Enter Time (s): ";
cin >> time;

fvelocity = acceleration * time + ivelocity;


cout << endl << "Final Velocity (m/s): " << fvelocity;

}

