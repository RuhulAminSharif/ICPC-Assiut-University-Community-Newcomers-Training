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
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        for(int i=0; i<x; i++){
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}