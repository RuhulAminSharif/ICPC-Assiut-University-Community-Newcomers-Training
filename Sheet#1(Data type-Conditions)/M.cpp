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
    if(ch>=97) cout << "ALPHA\nIS SMALL" << endl;
    else if(ch>=65) cout << "ALPHA\nIS CAPITAL" << endl;
    else cout << "IS DIGIT" << endl; 
    return 0;
}