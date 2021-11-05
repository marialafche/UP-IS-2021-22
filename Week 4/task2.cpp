#include <iostream>
using namespace std;

int main()
{
    int num, sum;

    while (true)
    {
        cin >> num;

        if (num == 0)
        {
            break;
        }

        sum += num;
    }

    cout << sum;

    return 0;
}