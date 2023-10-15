#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double length, width, area = 0.00;
    int noOfTiles = 0;
    cout << "Enter length and width: ";
    cin >> length >> width;

    area = length * width;

    cout << "Area is  "  << area << endl;

    noOfTiles = ceil(area);

    cout << "No of tiles is " << noOfTiles << endl;
}
