#include <iostream>

using namespace std;

void comparison(int a, string s, int b);

int main()
{
    int a, b;
    string s;

    do {
        cin>>a>>s>>b;
    } while (s != "<" && s != ">" && s != "=");

    comparison(a, s, b);

    return 0;
}

void comparison(int a, string s, int b)
{
    if (s == "<")
        if (a < b)
            cout<<"Right";
        else
            cout<<"Wrong";
    else if (s == ">")
        if (a > b)
            cout<<"Right";
        else
            cout<<"Wrong";
    else if (s == "=")
        if (a == b)
            cout<<"Right";
        else
            cout<<"Wrong";
}
