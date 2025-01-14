    #include <iostream>

    using namespace std;

    void sumMultiplySub(long long x, long long y);

    int main()
    {
        long long x;
        long long y;

        cin>>x>>y;

        sumMultiplySub(x, y);

        return 0;
    }

    void sumMultiplySub(long long x, long long y)
    {
        long long sum = x + y;
        long long multiply = x * y;
        long long sub = x - y;
        cout<<x<< " + "<<y<<" = "<<sum<<endl;
        cout<<x<< " * "<<y<<" = "<<multiply<<endl;
        cout<<x<< " - "<<y<<" = "<<sub<<endl;
    }
