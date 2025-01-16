#include <iostream>

using namespace std;

void multiples(long long a, long long b);

int main()
{
    long long a, b;

    cin>>a>>b;

    multiples(a, b);

    return 0;
}

void multiples(long long a, long long b)
{
    if (a%b == 0 || b%a == 0)
        cout<<"Multiples";
    else cout<<"No Multiples";
}
