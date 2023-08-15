#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(true){
        int a[2], sum=0; cin >> a[0] >> a[1];
        sort(a,a+2);
        if(a[0]<=0 || a[1]<=0){
            break;
        }
        for(int i=a[0]; i<=a[1]; i++){
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}