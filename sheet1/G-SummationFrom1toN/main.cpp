#include <iostream>

using namespace std;

void summationFromOneToN(long long n);

int main()
{
    long long n;

    cin>>n;

    summationFromOneToN(n);

    return 0;
}

void summationFromOneToN(long long n)
{
    long long result = (n*(n+1))/2;
    cout<<result;
}
