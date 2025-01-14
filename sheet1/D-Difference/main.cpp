#include <iostream>

using namespace std;

void difference(long long a, int b, int c, long long d);

int main()
{
    int b, c;
    long long a, d;

    cin>>a>>b>>c>>d;

    difference(a, b, c, d);

    return 0;
}

void difference(long long a, int b, int c, long long d)
{
    long long result = (a*b)-(c*d);
    cout<<"Difference = "<<result;
}
