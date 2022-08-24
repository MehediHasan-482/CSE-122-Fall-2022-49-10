//CODEFORCE PROBLEM : 977A
//PROBLEM NAME : Wrong Subtraction


#include<iostream>
using namespace std;
int main()
{
    int n,k,s;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        s=n%10;
        if(s==0)
        {
            n=n/10;
        }
        else
        {
            n=n-1;
        }
    }
    cout<<n<<endl;
    return 0;
}
