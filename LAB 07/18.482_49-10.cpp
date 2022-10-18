//CODEFORCE PROBLEM : 110A
//PROBLEM NAME : Nearly Lucky Number

#include <iostream>
using namespace std;
string a;
int c=0;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '7' || a[i] == '4')
        {
            c++;
        }
    }
    if (c==4 || c==7)
    {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
