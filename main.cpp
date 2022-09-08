#include <iostream>
#include <cmath>
using namespace std;
float angle;

int main()
{
    cout << "Give an angle: " << endl;
    cin >> angle;
    cout << sin(angle*M_PI/180)<<endl;
    cout << cos(angle*M_PI/180)<<endl;
    cout << tan(angle*M_PI/180)<<endl;
    cout << 1/tan(angle*M_PI/180)<<endl;

    return 0;
}
