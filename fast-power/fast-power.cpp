#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <utility>
#include <bitset>

#define mod7 1000000007

using namespace std;

long long fast_power_with_modulo(long long base, long long power, long long modulo)
{
    if(power == 0)
    {
        return 1LL;
    }
    else if(power == 1)
    {
        return base;
    }
    else
    {
        long long result = fast_power_with_modulo(base, power>>1, modulo);
        if(power&1)
        {
            return ((result*result%modulo)*base%modulo);
        }
        else
        {
            return (result*result%modulo);
        }
    }
}

long long fast_power(long long base, long long power)
{
    if(power == 0)
    {
        return 1LL;
    }
    else if(power == 1)
    {
        return base;
    }
    else
    {
        long long result = fast_power(base, power>>1);
        if(power&1)
        {
            return result * result * base;
        }
        else
        {
            return result * result;
        }
    }
}

int main()
{
    long long base = 2LL;
    long long power = 100LL;

    printf("%lld\n", fast_power_with_modulo(base,power, mod7));
    printf("%lld\n", fast_power(2,31));

    return 0;
}