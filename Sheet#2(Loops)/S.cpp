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
        int a[2], sum=0; cin >> a[0] >> a[1];
        sort(a,a+2);
        for(int i=a[0]+1; i<a[1]; i++){
            if(i&1){
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}