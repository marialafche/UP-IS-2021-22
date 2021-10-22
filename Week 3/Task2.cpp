#include <iostream>
using namespace std;

int main()
{
    float BMI, w, h; // w = weight, h = height

    cout << "Enter your weight and height: " ;
    cin >> w >> h; 

    BMI = w / ( h * h );
    
    cout << "Your BMI is: "<< BMI << endl;

    if (BMI > 24.9 )
    {
        cout << "Overweight!" << endl;
    }
    else if (BMI < 25 && BMI > 18.4)
    {
        cout << "Pefect!" << endl;
    }
    else 
    {
        cout << "Underweight!" << endl;
    }

    return 0;
}