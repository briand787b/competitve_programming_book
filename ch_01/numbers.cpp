#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x = 1234256789123456789LL;
    printf("this is a long: %lld\n", x);

    // proper multiplication.  you must typecast it
    int a = 123456789;
    long long b = (long long)a*a;
    printf("a*a=%lld\n", b);
}