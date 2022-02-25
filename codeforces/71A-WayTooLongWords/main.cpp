#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count;
    cin >> count;

    string word;
    char fl, ll;
    for (int i = 0; i < count; i++) {
        cin >> word;
        if (word.length() < 11) {
            cout << word << endl;
            continue;
        }

        fl = word[0];
        ll = word[word.length() -1];
        cout << fl << word.length() - 2 << ll << endl;
    }
}