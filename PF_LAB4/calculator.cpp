#include<iostream>
using namespace std ;

void add(int n1,int n2);
void sub(int n1,int n2);
void mul(int n1,int n2);
void did(int n1,int n2);
main()
{
int num1,num2 ;
char op ;
cout<<"Enter 1st number: " ; 
cin>> num1;

cout<<"Enter 2nd number: " ; 
cin>> num2;
cout<<"Enter an operator (+, -, *, /): " ;
cin>> op ;

if(op=='+')
{
add(num1,num2);
}
if(op=='-')
{
sub(num1,num2);

}
if(op=='/')
{did(num1,num2);

}
if(op=='*')
{
mul(num1,num2);
}
}

void add(int n1,int n2)
{
cout<<"Addition: " << n1+n2; 
}

void sub(int n1,int n2)
{
cout<<"Subtraction: " <<n1-n2 ;
}

void mul(int n1,int n2)
{
cout<< "Multiplication: " << n1*n2 ;
}

void did(int n1,int n2)
{
cout<<"Division: " << n1/n2 ;
}





















