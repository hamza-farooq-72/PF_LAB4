#include<iostream>
using namespace std ;

void fuelcalculator(float S);

main()
{
float distance ;
cout<<"Enter the distance: " ; 
cin>> distance ;
fuelcalculator(distance);

}

void fuelcalculator(float dis)
{
float fuel ;
fuel = dis*10 ;
cout<<"Fuel needed: " << fuel ;

}























