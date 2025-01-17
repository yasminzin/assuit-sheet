#include <iostream>

using namespace std;

void knowQuarter(float x, float y);

int main()
{
    float x,y;

    do
    {
        cin>>x>>y;
    } while(x < -1000 || y > 1000);

    knowQuarter(x, y);

    return 0;
}

void knowQuarter(float x, float y)
{
    if (x == 0 && y == 0)
        cout<<"Origem";
    else if(x == 0 && y != 0)
        cout<<"Eixo Y";
    else if(x != 0 && y == 0)
        cout<<"Eixo X";
    else if (x > 0 && y > 0)
        cout<<"Q1";
    else if (x > 0 && y < 0)
        cout<<"Q4";
    else if (x < 0 && y > 0)
        cout<<"Q2";
    else
        cout<<"Q3";
}
