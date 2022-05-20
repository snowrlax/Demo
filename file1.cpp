#include<iostream>
using namespace std;
int main ()
{ int x ,y,z;
cout <<"enter two numbers";
cin>>x>>y;
if ( x>y ){
    z=x;
}
else if(x==y){
    cout<<"both are equal";
}
else { 
    z=y;

}
cout<<"biggest number is "<<z;
return 0;
} // namespace  
