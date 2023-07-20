#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s; cin >> s;
    if((s[0]-'0')%2==0) cout << "EVEN" << endl;
    else cout << "ODD" << endl;
    return 0;
}