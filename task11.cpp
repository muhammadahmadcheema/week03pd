#include<iostream>
using namespace std;
main()
{

int age;
int moved;
int avg;
int moved1;


cout << "Enter the person's age: ";
cin >> age;

cout << endl << "Enter the number of times they've moved: ";
cin >> moved;

moved1 = moved + 1;

avg = age / moved1;

cout << endl << "Average number of years lived in the same house: " << avg;



}