#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        string neww = a;
        int size = a.size();
        int count = 0;

        while (size <= 500)
        {
            if (neww.find(b) != string::npos)
            {
                cout << count << endl;
                break;
            }
            neww += neww;
            count++;
            size = neww.size();
        }

        if (neww.find(b) == string::npos)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
