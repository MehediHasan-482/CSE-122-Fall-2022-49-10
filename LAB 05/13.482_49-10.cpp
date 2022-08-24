//CODEFORCE PROBLEM : 791A
//PROBLEM NAME : Bear and Big Brother


#include<iostream>
using namespace std;
int main()
{
    int a,b,x=0;
    cin>>a>>b;
    for(int i=1;a<=b;i++)
    {
        a=a*3;
        b=b*2;
        x++;
    }
    cout<<x<<endl;
    return 0;
}
