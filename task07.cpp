#include<iostream>
using namespace std;
main()
{
string name;
float adultprice;
float childprice;
int adultsold;
int childsold;
float percdonation;
float adultsum;
float childsum;
float totalsum;
float charitydonation;
float remaining;




cout << "Enter the movie name: ";
cin >> name;

cout << endl << "Enter the adult ticket price: $";
cin >> adultprice;

cout << endl << "Enter the child ticket price: $";
cin >> childprice;

cout << endl << "Enter the number of adult tickets sold: ";
cin >> adultsold;

cout << endl << "Enter the number of child tickets sold: ";
cin >> childsold;

cout << endl << "Enter the percentage of the amount to be donated to charity: ";
cin >> percdonation;

adultsum = adultprice * adultsold;
childsum = childprice * childsold;
totalsum = adultsum + childsum;

charitydonation = totalsum * percdonation / 100;
remaining = totalsum - charitydonation;


cout << endl << "Movie: " << name;
cout << endl << "Total amount generated from ticket sales: $" << totalsum;
cout << endl << "Donation to charity(" << percdonation << "): $" << charitydonation;
cout << endl << "Remaining amount after donation: $" << remaining;

}







