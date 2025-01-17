#include <iostream>

using namespace std;

void calculateAge(int N);

int main()
{
    int N;

    do
    {
        cin>>N;
    } while(N < 0 && N > 1000000);

    calculateAge(N);

    return 0;
}

void calculateAge(int N)
{
    int years = N/365;
    int months = (N%365) /30;
    int days = (N%365) %30;
    cout<<years<<" years"<<endl;
    cout<<months<<" months"<<endl;
    cout<<days<<" days";
}
