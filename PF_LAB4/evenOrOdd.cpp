#include<iostream>
using namespace std ;

void evenOrOdd(int num);

main()
{
int NUM;
cout<<"Enter a number: " ; 
cin>> NUM;
evenOrOdd(NUM);

}
void evenOrOdd(int num)
{
if(num%2==0)
{
cout<<"Number "<<num <<" is even" ; }


if(num%2>0)
{
cout<<"Number "<<num <<" is odd" ; }


if(num%2<0)
{
cout<<"Number "<<num <<" is odd" ; }


}

















