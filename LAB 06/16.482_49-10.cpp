//CODEFORCE PROBLEM : 59A
//PROBLEM NAME : Word


#include <iostream>
#include <string.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int x=0,y=0;
	for(int i=0;i<s.size();i++){
	    if(isupper(s[i])){
	        x++;
	    }else{
	        y++;
	    }
	}
	if(x>y)
    {
	    char n;
	    for(int i=0;i<s.size();i++)
    {
	        n=toupper(s[i]);
	        cout<<n;
    }
	}
	else
    {
	    char n;
	    for(int i=0;i<s.size();i++)
	    {
	        n=tolower(s[i]);
	        cout<<n;
	    }
	}
	return 0;
}
