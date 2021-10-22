#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a four-digit number: ";
    cin >> number;

    int first, second, third, fourth;
    fourth = number % 10;
    number = number / 10;
    third = number % 10;
    number = number / 10;
    second = number % 10;
    number = number / 10;
    first = number;

    

    bool hasUniqueDigits = (first != second) &&
                           (second != third) &&
                           (third != fourth) &&
                           (first != third) &&
                           (first != fourth) &&
                           (second != fourth);
    
    if (hasUniqueDigits)
    {
        cout << "Yes, the digits are different!" << endl;
    }
    else 
    {
        cout << "No, the digits aren't different!" << endl;
    }

    return 0;
}