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
    while (1)
    {
        int idx = s.find("EGYPT");
        if (idx == -1)
        {
            break;
        }
        s[idx] = ' ';
        for (int i = 0; i < 4; i++)
        {
            s.erase(s.begin() + idx + 1);
        }
    }
    cout << s << endl;
    return 0;
}
