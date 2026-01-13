#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number" << endl;
    cin >> a;
    float ans = a/2.0;
    if(a>1 && a<1000){
        cout << ans << endl;
    }
    else cout << "no" << endl;
}