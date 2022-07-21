//Codefoces Problem NO :158A
//Problem Name :Next round

#include<iostream>
using namespace std;
int main()
{
 int n,a,p,s=0;
 cout<<"enter your number:";
 cin>>n>>a;
 for(int i=0;i<n;i++)
 {
  cin>>p;
  if((p>a)&&(p>0))
    s++;

 }cout<<s;
}
