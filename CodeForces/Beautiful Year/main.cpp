#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool checkYear(int n)
{
    vector<int> freq(10, 0);

    while (n > 0)
    {
        int digit = n % 10;
        if (freq[digit] > 0)
            return false;
        freq[digit]++;
        n /= 10;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    int num = n + 1;

    while (true)
    {
        if (checkYear(num))
        {
            cout << num << endl;
            break;
        }
        num++;
    }

    return 0;
}