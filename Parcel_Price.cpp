#include <iostream>
using namespace std;

int main()
{

    double parcel_weight = 0.00;
    cout << "Enter weight of parcel (in KG) ";
    cin >> parcel_weight;

    if (parcel_weight > 0)
    {
        if (parcel_weight < 2.5)
        {
            cout << "Delivery charge in RM" << parcel_weight * 3.50;
        }
        else
        {
            if (parcel_weight > 5)
            {
                cout << "Delivery charge in RM" << parcel_weight * 2.45;
            }
            else
            {
                cout << "Delivery charge in RM" << parcel_weight * 2.85;
            }
        }
    }
    else
    {
        cout << "ERROR! Please enter weight" << endl;
    }

} 
