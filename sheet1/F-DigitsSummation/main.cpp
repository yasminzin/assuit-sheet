#include <iostream>

using namespace std;

void digitsSum(long long n, long long m);

long long firstDigit(long long num);

long long lastDigit(long long num);

int main()
{
    long long n, m;

    cin>>n>>m;

    digitsSum(n, m);

    cout<<firstDigit(n)<<endl;
    cout<<lastDigit(n)<<endl;
    cout<<firstDigit(m)<<endl;
    cout<<lastDigit(m)<<endl;

    return 0;
}

void digitsSum(long long n, long long m)
{
    long long result = (n%10) + (m%10);
    cout<<result<<endl;
}

long long firstDigit(long long num)
{
    while(num >= 10)
    {
        long long first = num/10;
        return first;
    }
    return num;
}

long long lastDigit(long long num)
{
    long long last = num % 10;
    return last;
}
