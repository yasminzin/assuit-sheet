#include <iostream>
#include <cctype>

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
    int ascii = static_cast<int>(one);
    if(ascii>= 'a' && ascii<='z')
        cout<<static_cast<char>(toupper(one));
    else if(ascii>= 'A' && ascii<='Z')
        cout<<static_cast<char>(tolower(one));
}
