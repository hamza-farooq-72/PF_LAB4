#include<iostream>
using namespace std ;

void inchesToFeet(float in);

main()
{
float inches ;
cout<<"Enter the measurement in inches: " ; 
cin>> inches ;
inchesToFeet(inches);

}

void inchesToFeet(float in)
{
float feet;
feet =  in/12 ;
cout<<"Equivalent in feet: " << feet ;

}























