#include<iostream>
using namespace std ;

void result(int marks);

main()
{
int score;
cout<<"Enter your score: " ; 
cin>> score;
result(score);

}
void result(int marks)
{
if(marks>50)
{
cout<<"Pass" ; }


if(marks<=50)
{
cout<<"Fail" ; }


}

















