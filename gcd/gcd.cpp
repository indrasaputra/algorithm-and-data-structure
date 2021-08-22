#include <iostream>

using namespace std;

int gcd_bits(int a, int b)
{
    while(b){
        b^=a^=b^=a%=b;
    }
    return a;
}

int gcd_loop(int a, int b)
{
    int temp;

    while(b != 0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }

    return a;
}

int gcd_recursive(int a, int b)
{
    if (b == 0) {
        return a;
    }
    return gcd_recursive(b, a%b);
}


int main()
{
    cout << gcd_bits(66, 24) << endl;
    cout << gcd_loop(66, 24) << endl;
    cout << gcd_recursive(66, 24) << endl;

    return 0;
}
