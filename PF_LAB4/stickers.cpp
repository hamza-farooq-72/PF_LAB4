#include<iostream>
using namespace std ;

void howManyStickers(int sides);

main()
{
int noOfSides;
cout<<"Enter the side length of the Rubik's Cube: " ; 
cin>> noOfSides;
howManyStickers(noOfSides);

}

void howManyStickers(int sides)
{
int stickers ;
stickers = (sides)*(sides)*6 ;
cout<<"Number of stickers needed: " << stickers ;

}























