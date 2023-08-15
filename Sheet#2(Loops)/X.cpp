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
        int n, cnt=0; cin >> n;
        while(n){
            cnt += ((n%2)==1);
            n/=2;
        }
        int ans=0, k=1;
        while(cnt--){
            ans += k;
            k *= 2;
        }
        cout << ans << endl;
    }
    return 0;
}