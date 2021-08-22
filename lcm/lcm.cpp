#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    while(b){
        b^=a^=b^=a%= b;
    }
    return a;
}

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}

int main()
{
    cout << lcm(8, 12) << endl;
    return 0;
}
