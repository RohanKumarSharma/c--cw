#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number" << endl;
    cin >> a;
    for (int i = 0; i <= a; i++)
    {
        if (i == 42)
        {
            break;
        }
        cout << i << endl;
    }
}