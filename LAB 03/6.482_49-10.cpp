//Codefoces Problem NO :282A
//Problem Name :Bit++
#include<iostream>
using namespace std;
int main()
{
 int n,x=0;
 char s[40];
 cin>>n;
 for(int i=0;i<n;i++)
 {
 cin>>s;
 if(s[1]=='+')
 x++;
 if(s[1]=='-')
 x--;
 }
 cout<<x<<endl;
}
