#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    printf("Ready\n");
    string pairs, input;
    do {
        cin >> input;
        if (input == "qp" || input == "db") pairs += input + "\n";
    }
    while(input != "  ");
    printf("%s\n", pairs.c_str());

}