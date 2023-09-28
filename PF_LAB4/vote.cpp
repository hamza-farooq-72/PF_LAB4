#include<iostream>
using namespace std ;

void eligibility(int AGE);

main()
{
int age ;
cout<<"Enter your age: " ; 
cin>> age  ;
eligibility(age);

}


void eligibility(int AGE)
{
if(AGE>=18)
{
cout<<"You are eligible to vote." ; }


if(AGE<18)
{
cout<<"You are not eligible to vote." ; }


}

















