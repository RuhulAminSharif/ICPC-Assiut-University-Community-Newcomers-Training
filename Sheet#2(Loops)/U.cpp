#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll ans=0;
    int n; cin >> n;
    int a[2]; cin >> a[0] >> a[1];
    sort(a,a+2);
    for(int i=1; i<=n; i++){
        int tmp = i, sum = 0;
        while(tmp){
            sum += tmp%10;
            tmp/=10;
        }
        if(sum>=a[0] && sum <= a[1]){
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}