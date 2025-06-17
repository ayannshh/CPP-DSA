#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int up = 0;
    int n = s.size() / 2;

    for (auto it : s)
    {
        if (isupper(it))
        {
            up++;
        }
    }
    if (up > n)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s << endl;
}