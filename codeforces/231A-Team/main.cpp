#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, petya, vasya, tonya;
    int s = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &petya, &vasya, &tonya);
        if (petya + vasya + tonya > 1) {
            s++;
        }
    }

    cout << s << endl;
}