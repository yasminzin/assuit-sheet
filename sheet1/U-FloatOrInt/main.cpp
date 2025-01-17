#include <iostream>
#include <cmath>

using namespace std;

void floatOrInt(float num);

int main()
{
    float num;

    cin>>num;

    floatOrInt(num);

    return 0;
}

void floatOrInt(float num)
{
    if (num == floor(num))
        cout<<"int "<<num;
    else
    {
        int integerPart = num;
        float floatPart = num - floor(num);
        cout<<"float "<<integerPart<<" "<<floatPart;
    }
}
