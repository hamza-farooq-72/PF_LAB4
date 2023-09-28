#include<iostream>
using namespace std;

void calculateFuel(float dis);

main()
{
float DISTANCE ;
cout<<"Enter the distance: ";
cin>> DISTANCE ;

calculateFuel(DISTANCE);

}
void calculateFuel(float dis)
{
if(dis>10)
{
float fuel ;
fuel = dis*10 ;
cout<<"Fuel needed: "<<fuel   ;

}
if(dis<=10)
{
cout<<"Fuel needed: "<< 100 ;
}

}




