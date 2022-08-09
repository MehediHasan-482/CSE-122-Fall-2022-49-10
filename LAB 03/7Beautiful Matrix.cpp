//Codefoces Problem NO :263A
//Problem Name :Beautiful Matrix
#include<iostream>
using namespace std;
int main()
{
int x=0,j;
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
cin>>x;
if(x==1)
cout<<abs(i-3)+abs(j-3)<<endl;
}
}

