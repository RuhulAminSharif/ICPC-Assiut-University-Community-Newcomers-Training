#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    float x; cin >> x;
    int y = (int)x;
    if(x-y==0) cout << "int " << y << endl;
    else cout << "float " << y << " " << x-y << endl;
    return 0;
}