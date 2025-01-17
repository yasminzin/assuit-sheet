#include <iostream>

using namespace std;


void knowIfEven(int num);

int main()
{
    int num;

    do
    {
        cin>>num;
    } while(num <= 999 || num > 9999);

    knowIfEven(num);

    return 0;
}

void knowIfEven(int num)
{
    int firstDigit = num/1000;
    if(firstDigit%2 == 0)
        cout<<"EVEN";
    else
        cout<<"ODD";
}
