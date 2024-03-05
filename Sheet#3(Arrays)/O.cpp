#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll fib[51];
    fib[1] = 0;
    fib[2] = 1;
    for(int i=3; i<=50; i++){
        fib[i] = fib[i-1]+fib[i-2];
    }
    int n; cin >> n;
    cout << fib[n] << endl;
    return 0;
}
