#include <iostream>

using namespace std;

void sortNumbers(long long* numbers);

int main()
{
    long long numbers[3] = {};


    for (int i = 0; i < 3; i++)
    {
        cin>>numbers[i];
    }

    sortNumbers(numbers);


    return 0;
}

void sortNumbers(long long* numbers)
{
    long long newNumbers[3] = {};

    for (int i = 0; i < 3; i++)
    {
        newNumbers[i] = numbers[i];
    }

    for (int i = 0; i < 3-1; i++)
    {
        for (int j = 0; j < 3-1-i; j++)
        {
        if(numbers[j] > numbers[j+1])
            swap(numbers[j], numbers[j+1]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<numbers[i]<<endl;
    }

    cout<<endl;

    for (int i = 0; i < 3; i++)
    {
        cout<<newNumbers[i]<<endl;
    }
}

void swap(long long& a, long long& b)
{
    long long temp = a;
    a = b;
    b = temp;
}
