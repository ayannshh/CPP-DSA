#include <iostream>
#include<map>
#include <vector>
#include <string>
using namespace std;

string isGoodArray(vector<int> &a)
{
    map<int, int> freq;
    for (int x : a)
    {
        freq[x]++;
    }

    if (freq.size() > 2)
        return "No";

    if (freq.size() == 2)
    {
        auto it = freq.begin();
        int f1 = it->second;
        it++;
        int f2 = it->second;
        if (abs(f1 - f2) > 1)
            return "No";
    }

    return "Yes";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        cout << isGoodArray(a) << endl;
    }
    return 0;
}