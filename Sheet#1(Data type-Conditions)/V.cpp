#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b; char ch; cin >> a >> ch >> b;
    bool fg;
    if(ch=='='){
        fg = a==b;
    }else if(ch=='<'){
        fg = a<b;
    }else {
        fg = a>b;
    }
    if(fg) cout << "Right" << endl;
    else cout << "Wrong" << endl;
    return 0;
}