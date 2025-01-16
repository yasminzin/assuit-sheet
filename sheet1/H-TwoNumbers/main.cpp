#include <iostream>

using namespace std;

void greaterEqual(int a, int b);

int main()
{
    int a, b;

    cin>>a>>b;

    greaterEqual(a, b);

    return 0;
}

void greaterEqual(int a, int b)
{
    if(a >= b)
        cout<<"Yes";
    else cout<< "No";
}
