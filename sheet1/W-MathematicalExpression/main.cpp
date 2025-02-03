#include <iostream>

using namespace std;

void mathematicalExp(int a, string s, int b, string q, long long c);

int main()
{
    int a, b;
    string s, q;
    long long c;

    do {
    cin>>a>>s>>b>>q>>c;
    } while (s != "+" && s != "-" && s != "*" || q != "=");

    mathematicalExp(a, s, b, q, c);

    return 0;
}

void mathematicalExp(int a, string s, int b, string q, long long c)
{
    if (s == "+")
        {
            long long sum = a+b;
            if (sum == c)
                cout<<"Yes";
            else
                cout<<sum;
        }
    if (s == "-")
        {
            long long sub = a-b;
            if (sub == c)
                cout<<"Yes";
            else
                cout<<sub;
        }
    if (s == "*")
        {
            long long mult = a*b;
            if (mult == c)
                cout<<"Yes";
            else
                cout<<mult;
        }
}

