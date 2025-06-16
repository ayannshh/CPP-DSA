#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num = 0;

    while (n--)
    {
        vector<int> arr(3);
        int count = 0;

        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                count++;
            }
        }

        if (count >= 2)
        {
            num++;
        }

        count = 0;
    }

    cout << num;

    return 0;
}