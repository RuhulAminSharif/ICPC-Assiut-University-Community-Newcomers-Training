#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        for(int i=s.size()-1; i>=0; i--){
            cout << s[i] << " ";
        }
        cout << endl;
    }
    return 0;
}