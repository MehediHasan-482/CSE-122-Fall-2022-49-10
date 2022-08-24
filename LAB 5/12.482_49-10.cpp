//CODEFORCE PROBLEM : 266A
//PROBLEM NAME : Stones on the Table


#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int n,x=0;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        x++;
    }
     cout<<x<<endl;
     return 0;
}
