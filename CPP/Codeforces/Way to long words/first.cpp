#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        vector<char> res;
        int si = s.size();

        if (si <= 10)
        {
            cout << s << endl;
        }
        else
        {
            char first = s[0];
            char last = s[si - 1];
            string mid = to_string(si - 2);

            res.push_back(first);
            for (char c : mid)
            {
                res.push_back(c);
            }
            res.push_back(last);

            for (auto it : res)
            {
                cout << it;
            }
            cout << endl;
        }
    }
    return 0;
}