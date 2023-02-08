#include <bits/stdc++.h>
using namespace std;

set<int> primes;
int runs = 0;
bool isPrime(int x){
  for (int i = 3; i < sqrt(x) + 1; i++) {
    runs++;
    if(!(x % i)) return false;
  }
  return true;
}

int main() {
  
  for (int i = 3; i < 2e6 + 1; i += 2) if(isPrime(i)) primes.insert(i); // Find all primes from 3 - 10M
//  for(auto i: primes){
//    printf("primes:%d \n", i);
//  }
//  cout << "size: " << primes.size() << endl;
//  cout << "runs: " << runs << endl;
  int t, n;
  cin >> t;

  for (int i = 0; i < t; ++i) {
    cin >> n;
    n *= 2;
    for (auto j: primes) {
      if (primes.contains(n - j)){
        printf("%d %d\n", j , n-j);
        break;
      }
    }
    

  }
  
  return 0;
}
