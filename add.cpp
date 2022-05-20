#include<iostream>
using namespace std ;
int main()
{
    int x,y,z;
    cout<<"enter two number : ";
    cin>>x>>y;
    if (x>y){
        z=x;
        cout<<"the bigger number is "<<z;

   }

if (y>x)
{
    z=y;
    cout<<"the bigger number is"<<z;

}
if(x==y)
{
    cout<<"both are equal";

}
return 0;

}