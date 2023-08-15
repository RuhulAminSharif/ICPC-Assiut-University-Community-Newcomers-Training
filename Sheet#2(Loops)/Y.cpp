#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    if(n==1){
        cout << 0 << endl;
    }else{
        int i=0, j=1;
        cout << "0 1";
        for(int k=3; k<=n; k++){
            cout << " " << i+j;
            int x = i+j;
            i = j;
            j = x;
        }
        cout << endl;
    }
    return 0;
}