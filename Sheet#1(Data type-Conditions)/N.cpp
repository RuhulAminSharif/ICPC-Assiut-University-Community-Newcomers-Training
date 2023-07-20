#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char ch; cin >> ch;
    if(ch>=97) ch -= 32;
    else ch += 32;
    cout << ch << endl;
    return 0;
}