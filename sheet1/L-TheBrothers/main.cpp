#include <iostream>

using namespace std;

void areBrothers(string lastOne, string lastTwo);

int main()
{
    string firstOne, lastOne, firstTwo, lastTwo;

    cin>>firstOne>>lastOne;
    cin>>firstTwo>>lastTwo;

    areBrothers(lastOne, lastTwo);

    return 0;
}

void areBrothers(string lastOne, string lastTwo)
{
    if (lastOne == lastTwo)
        cout<<"ARE Brothers";
    else cout<<"NOT";
}
