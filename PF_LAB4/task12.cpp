#include<iostream>
using namespace std;

void calculatePayableAmount();

main()
{

calculatePayableAmount();

}

void calculatePayableAmount()
{
while(true)
{
float Amount ;
string Day ;
cout<<"Enter the day of purchase: ";
cin>> Day ;
cout<<"Enter the total purchase amount: $";
cin>> Amount ;

if(Day=="Sunday")
{
float totbill1 ;
totbill1= Amount-(10*Amount/100) ;
cout<<"Payable Amount: $"<<totbill1  ;

}

if(Day!="Sunday")
{
float totbill2 ;
totbill2= Amount-(5*Amount/100) ;
cout<<"Payable Amount: $"<<totbill2 <<endl;
}

}

}




