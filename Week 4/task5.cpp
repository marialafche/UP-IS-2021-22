#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int firstNum = 1, secondNum = 1;

    for (int i = 1; i <= n/2; i++)
    {
        firstNum = firstNum + secondNum;
        secondNum = secondNum + firstNum;
    }

    cout << firstNum << endl;


    return 0;
}