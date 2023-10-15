#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num1, num2 = 0.00;
    int intCode;

    cout << "Enter 2 numbers ";
    cin >> num1 >> num2;

    cout << "Enter code : 1 to +, 2 to -, 3 to * or 4 to / ";
    cin >> intCode;

    if (intCode == 1)
    cout << num1+num2<<endl;
    else if (intCode == 2)
    cout << num1-num2<<endl;
    else if (intCode == 3)
    cout << num1*num2<<endl;
    else if (intCode == 4)
    if (num2 !=0)
    cout << num1/num2<<endl;
    else
    cout << "Cannot Divide by 0";
    else
    cout << "No Such Code";

}