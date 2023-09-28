#include <iostream>
using namespace std;
void namewriter(string name);
main(){
string NAME ;
cout<<"Enter your name:";
cin>> NAME ;
namewriter(NAME);
}

void namewriter(string name)
{while(true){
cout<<name <<endl ;
}
}