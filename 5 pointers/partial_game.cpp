#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long Duke = 0, Alice = 0;
    cin >> n;
    int piles[n];
    for(int i = 0; i < n; i++){
        cin >> piles[i];
        if (piles[i] & 1)   Alice += (int)(piles[i] / 2) + 1;
        else    Duke += (piles[i] / 2);
    }
    if (Duke - Alice > 0)    printf("Duke\n");
    else    printf("Alice\n");
    return 0;
}