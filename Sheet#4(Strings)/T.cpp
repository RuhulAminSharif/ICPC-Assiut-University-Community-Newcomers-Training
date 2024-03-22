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
    string s;
    cin >> s;
    string username;
    int idx = s.find("username") + 9;
    while (s[idx] != '&')
        username += s[idx++];
    string pwd;
    idx = s.find("pwd") + 4;
    while (s[idx] != '&')
        pwd += s[idx++];
    string profile;
    idx = s.find("profile") + 8;
    while (s[idx] != '&')
        profile += s[idx++];
    string role;
    idx = s.find("role") + 5;
    while (s[idx] != '&')
        role += s[idx++];
    string key;
    idx = s.find("key") + 4;
    while (idx < s.size())
        key += s[idx++];

    cout << "username: " << username << endl;
    cout << "pwd: " << pwd << endl;
    cout << "profile: " << profile << endl;
    cout << "role: " << role << endl;
    cout << "key: " << key << endl;
    return 0;
}
