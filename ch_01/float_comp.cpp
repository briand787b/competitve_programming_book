#include <bits/stdc++.h>

using namespace std;

int main()
{
    double expectedVal = 1.0;

    double actualVal = 0.3*3+0.1;
    printf("actualVal: %.20f\n", actualVal);

    if (actualVal == expectedVal) {
        // this will not execute b/c of rounding error
        printf("0.3*3+0.1 == %.9f\n", expectedVal);
    }

    if (abs(actualVal-expectedVal) < 1e-9) {
        printf("0.3*3+0.1 is roughly equal to %.9f\n", expectedVal);
    }
}