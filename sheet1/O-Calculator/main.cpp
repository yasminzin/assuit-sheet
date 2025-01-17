#include <iostream>

using namespace std;

void sumFunc(long long a, long long b);
void subFunc(long long a, long long b);
void multiplyFunc(long long a, long long b);
void divideFunc(long long a, long long b);

int main()
{
    long long a, b;
    char s;

    cin>>a>>s>>b;

    switch (s)
    {
    case '+':
        sumFunc(a,b);
        break;
    case '-':
        subFunc(a,b);
        break;
    case '*':
        multiplyFunc(a,b);
        break;
    case '/':
        if (b == 0)
        {
            cout<<"Cannot divide by 0";
            break;
        }
        divideFunc(a,b);
        break;
    default:
        cout<<"No such operator";
    }

    return 0;
}

void sumFunc(long long a, long long b)
{
    long long result = a+b;
    cout<<result;
}

void subFunc(long long a, long long b)
{
    long long result = a-b;
    cout<<result;
}

void multiplyFunc(long long a, long long b)
{
    long long result = a*b;
    cout<<result;
}

void divideFunc(long long a, long long b)
{
    long long result = a/b;
    cout<<result;
}
