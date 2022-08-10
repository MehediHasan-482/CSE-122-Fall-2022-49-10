//CODEFORCE PROBLEM : 236A
//PROBLEM NAME :BOY OR GIRL
#include<iostream>
#include<string>
using namespace std;
int main()
{
   string c;
   cin>>c;
   int x=0;
   int a=c.size();
   for(int i=0;i<a;i++)
   {
       for(int j=i+1;j<a;j++)
        if (c[i]==c[j])
       {
           x++;
       }
   }
   int m=a-x;
   if(m%2==0)
    cout<<"CHAT WITH HER!"<<endl;
   else
    cout<<"IGNORE HIM!"<<endl;
   return 0;
}
