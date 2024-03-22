#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define inf 1e18
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    map<char, char> encrypt, decrypt;
    for (int i = 0; i < 62; i++)
    {
        encrypt[original[i]] = key[i];
        decrypt[key[i]] = original[i];
    }
    int q;
    cin >> q;
    string s;
    cin >> s;
    string ans = "";
    if (q == 1)
    {
        for (char &ch : s)
        {
            ans += encrypt[ch];
        }
    }
    else
    {
        for (char &ch : s)
        {
            ans += decrypt[ch];
        }
    }
    cout << ans << endl;
    return 0;
}
