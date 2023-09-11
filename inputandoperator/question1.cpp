
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the first number"<<endl;
    cin>>x;
    int y,m;
    cout<<"enter the second number nad vlaue for taking modulus\n";
    cin>>y>>m;
    int z =(x*y)%m;
    cout<<"output is :"<<z;
}