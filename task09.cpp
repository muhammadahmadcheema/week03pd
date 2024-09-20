#include<iostream>
using namespace std;
main()
{

int num;
int sum;
int num1;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;

cout << "Enter a 4 -digit number: ";
cin >> num;

num1 = num % 10;
sum = num1;
num2 = num / 10;
num3 = num2 % 10;
sum = sum + num3;
num4 = num2 / 10;
num5 = num4 % 10;
sum = sum + num5;
num6 = num4 / 10;
num7 = num6 % 10;
sum = sum + num7;


cout << endl << "Sum of the individual digits: " << sum;
}

