//Codeforces Problem No :71A
//Problem Name :Way Too Long Words
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 int n,len;

cout<<"enter your number:";
cin>>n;
 //char s[101];
 for(int i=0;i<=n;i++)
 {
     char s[101];
     cin>>s;
 len=strlen(s);

   if(len<=10)
   {
  cout<<s;

   }else
   {
int f=len-2;
 cout<<s[0]<<f<<s[len-1];
   }
}
}
