#include <iostream>

using namespace std;

void minAndMax(long long x, long long y, long long z);

int main()
{
    long long x, y, z;

    cin>>x>>y>>z;

    minAndMax(x, y, z);

    return 0;
}

void minAndMax(long long x, long long y, long long z)
{
    long long minimum, maximum;


    if(x < y)
    {
        minimum = x;
        maximum = y;
        if (minimum > z)
        {
            minimum = z;
        }
        if (maximum < z)
        {
            maximum = z;
        }
    }
    else
    {
        minimum = y;
        maximum = x;
        if (minimum > z)
        {
            minimum = z;
        }
        if (maximum < z)
        {
            maximum = z;
        }
    }
    cout<<minimum<<" "<<maximum;
}
