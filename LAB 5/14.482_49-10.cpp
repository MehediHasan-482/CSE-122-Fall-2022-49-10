//CODEFORCE PROBLEM : 546A
//PROBLEM NAME : Soldier and Bananas


#include<iostream>
using namespace std;
int main()
{
    int a,b,n,s,x=0;
    cin>>a>>n>>b;
    for(int i=1;i<=b;i++)
    {
        x=x+i;
    }
    s=(x*a)-n;
    if(s<0)
     cout<<"0"<<endl;
    else
     cout<<s<<endl;
    return 0;
}
