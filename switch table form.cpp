#include<iostream>
using namespace std;
int main()
{
int b;
cout<<"Enter your choice ";
cin >>b;
for(int i=1; i<=10; i++)
{
switch(b)
{
case 1:
    cout<<1<<"*"<<i<<"="<<i*1<<endl;
    break;

case 2:
    cout<<2<<"*"<<i<<"="<<i*2<<endl;
    break;

case 3:
    cout<<3<<"*"<<i<<"="<<i*3<<endl;
    break;

case 4:
    cout<<4<<"*"<<i<<"="<<i*4<<endl;
    break;

case 5:
    cout<<5<<"*"<<i<<"="<<i*5<<endl;
    break;

case 6:
    cout<<6<<"*"<<i<<"="<<i*6<<endl;
    break;

case 7:
    cout<<7<<"*"<<i<<"="<<i*7<<endl;
    break;

case 8:
    cout<<8<<"*"<<i<<"="<<i*8<<endl;
    break;

case 9:
    cout<<9<<"*"<<i<<"="<<i*9<<endl;
    break;

case 10:
    cout<<10<<"*"<<i<<"="<<i*10<<endl;
    break;

default :
    cout<<" ";
}

}

}
