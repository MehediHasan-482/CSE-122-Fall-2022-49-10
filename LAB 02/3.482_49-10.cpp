//Codefoces Problem NO :231A
//Problem Name :Team

#include<iostream>
using namespace std;
int main()
{
 int n,a,b,c,sum=0;
 cout<<"enter your number: ";
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cin>>a>>b>>c;
  if((a==1&&b==1)||(b==1&&c==1)||(a==1&&c==1))
  sum=sum+1;
 }cout<<sum;
}
