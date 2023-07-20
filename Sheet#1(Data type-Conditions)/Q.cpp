#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    float a , b; cin >> a >> b;
    string ans;
    if(a==0 && b==0) ans = "Origem";
    else if(a==0) ans = "Eixo Y";
    else if(b==0) ans = "Eixo X";
    else if(a>0&&b>0) ans = "Q1";
    else if(a<0&&b>0) ans = "Q2";
    else if(a<0&&b<0) ans = "Q3";
    else ans = "Q4";
    cout << ans << endl;
    return 0;
}