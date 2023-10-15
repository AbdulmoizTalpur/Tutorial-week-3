/*

Tutorial Week 3

Q3. An architect’s fee is calculated as a percentage of the cost of a building. The fee is made as follows:
8% of the first RM 5000.00 of the cost of a building and
3% on the remainder if the remainder is less than or equal to RM 80,000 or
2.5% on the remainder if the remainder is more than RM 80,000.

*/

#include <iostream>
using namespace std;

int main()
{
    double cost_of_building, architect_fee = 0.00;
    cout << "Enter the cost of the building (in RM): ";
    cin >> cost_of_building;

    double base, remainder;
    base = 0.08 * 5000;
    remainder = cost_of_building - 5000;

    if (cost_of_building <= 80000)
        architect_fee = base + 0.03 * remainder;
    else if (cost_of_building > 80000)
        architect_fee = base + 0.025 * remainder;
    
    
    if (cost_of_building <= 0)
        cout << "ERROR!";
    else
        cout << "The architect's fee is RM " << architect_fee << endl;

    return 0;
}
