//CODEFORCE PROBLEM: 339A
//PROBLEM NAME :Helpful Maths
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[200];
    cin>>s;
    int a=strlen();
    for(int i=0;i<a;i=i+2)
    {
        for(int j=i+2;j<a;j=j+2)
        {
            if(s[i]>s[j])
                swaP(S[i],s[j]);
        }
    }
    cout<<s<<endl;
    return 0;
}
