#include <iostream>
#include <stdlib.h>
using namespace std;
char x[5];
char y;
int z;

int main()
{ 
// system ("cls"); // This line is commented out because it is not portable
cout<<"Enter a name";
cin>>x;
cout<<"You entered "<<x<<endl;
cout<<endl<<"Enter letter to search: ";
cin>>y;
for(z=0;z<5;z++)
if (y==x[z])
  cout<<y<<"is located at "<<"array["<<z<<"]"<<endl;
}
