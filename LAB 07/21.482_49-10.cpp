//CODEFORCE PROBLEM : 734A
//PROBLEM NAME : Anton and Danik


#include<iostream>
using namespace std;
int main()
{
    int n,s=0,x=0;
    cin>>n;
    string m;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        if(m[i]=='A')
            s++;
        if(m[i]=='D')
            x++;
    }
    if(s>x)
    {
        cout<<"Anton"<<endl;
    }
    else if(s<x)
    {
        cout<<"Danik"<<endl;
    }
    else if(s==x)
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}
