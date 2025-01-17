#include <iostream>

using namespace std;

void knowType(char one);

int main()
{
    char one;

    cin>>one;

    knowType(one);

    return 0;
}

void knowType(char one)
{
    if (one>='0' && one<='9')
        cout<<"IS DIGIT";
    else if(one>='A' && one<='Z')
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    else if(one>='a' && one<='z')
        cout<<"ALPHA"<<endl<<"IS SMALL";
}
