#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    if (t % 2 == 0 && t >= 4)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}