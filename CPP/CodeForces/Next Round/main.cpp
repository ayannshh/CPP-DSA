#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int count = 0;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int t = arr[k - 1];

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] >= t && arr[i] > 0)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}