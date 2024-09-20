#include<iostream>
using namespace std;
main()
{

int minutes;
int fps;
int total;

cout << "Number of Minutes: ";
cin >> minutes;

cout << endl << "Frames per Second: ";
cin >> fps;

total = minutes * 60 * fps;

cout << endl << "Total Number of Frames: " << total;

}