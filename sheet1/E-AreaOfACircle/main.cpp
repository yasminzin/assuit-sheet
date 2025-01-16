#include <iostream>
#include <iomanip>
#define M_PI 3.14159265358979323846

using namespace std;

void circleArea(double R);

int main()
{
    double R;

    cin>>R;

    circleArea(R);

    return 0;
}

void circleArea(double R)
{
    double area = M_PI*(R*R);
    cout<<fixed<<setprecision(9)<<area;
}
