#include<iostream>
using namespace std;
main()
{

float N;
float M;
int fruitkg;
int vegkg;
float tfruitincoins;
float tvegincoins;
float tfruitinrupees;
float tveginrupees;
float total;

cout << "Enter vegetable price per kilogram (in coins): ";
cin >> N;
cout << endl << "Enter fruit price per kilogram (in coins): ";
cin >> M;
cout << endl << "Enter total kilograms of vegetables: ";
cin >> fruitkg;
cout << endl << "Enter total kilograms of fruits: ";
cin >> vegkg;

tfruitincoins = N * fruitkg;
tvegincoins = M * vegkg;

tfruitinrupees = tfruitincoins / 1.94;
tveginrupees = tvegincoins / 1.94;

total = tfruitinrupees + tveginrupees;

cout << endl << "Total earnings in Rupees (Rps): " << total;



}