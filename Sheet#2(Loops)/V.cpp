#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k=1; cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=4; j++){
            if(j%4==0){
                cout << "PUM";
                k++;
            }else{
                cout << k++ << " ";
            }
        }
        cout << endl;
    }
    return 0;
}