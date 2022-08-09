//Codefoces Problem NO :112A
//Problem Name :Petya and Strings
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char a[500];
  char b[500];
  cin>>a>>b;
  int x=strlen(a);
   for(int i;i<x;i++)
   {
 a[i]=towlower(a[i]);
 b[i]=towlower (b[i]);
   }
 int v=strcmp(a,b);
 if(v==0)
 cout<<"0"<<endl;
 else if(v<0)
 cout<<"-1"<<endl;
 else if(v>0)
 cout<<"1"<<endl;
}
