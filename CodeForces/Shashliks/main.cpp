#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0;
        int temp, a, b, adrop, bdrop;
        cin >> temp >> a >> b >> adrop >> bdrop;

        int starttemp, endtemp;
        int mintemp, maxtemp;

        if (temp < a && temp < b)
        {
            cout << 0 << endl;
            continue;
        }

        if (adrop < bdrop)
        {
            starttemp = a;
            endtemp = b;
            mintemp = adrop;
            maxtemp = bdrop;
        }
        else
        {
            starttemp = b;
            endtemp = a;
            mintemp = bdrop;
            maxtemp = adrop;
        }

        if (temp >= starttemp)
        {
            int num = (temp - starttemp) / mintemp + 1;
            count += num;
            temp -= num * mintemp;
        }

        if (temp >= endtemp)
        {
            int num = (temp - endtemp) / maxtemp + 1;
            count += num;
            temp -= num * maxtemp;
        }

        cout << count << endl;
    }

    return 0;
}
