#include <iostream>
#include <math.h>
int main()
{
    using namespace std;
    double area;
    cout << "enter the floor area, in square feet, of your home:";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side << " feet to the side." << endl;
    return 0;
}