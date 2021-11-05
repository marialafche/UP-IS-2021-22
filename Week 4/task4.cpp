#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    bool isSimple = false;

    for (int i = 2; 1 < num/2; i++)
    {
        if (num % i == 0)
        isSimple = true;
        break;
    }

    if (isSimple)
    {
        cout << num << " isn't a prime number"<< endl;
    }
    else 
    {
        cout << num << " is a prime number"<< endl;
    }

    return 0;
}