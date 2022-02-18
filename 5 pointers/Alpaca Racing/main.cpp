#include <iostream>
using namespace std;

#define ld long double
#define ul unsigned long
#define ll long long
#define ull unsigned long long
#define repeat(name, times) for(int name = 0; name < times; name++)


int main(){
  ld x;
  long n, k;
  ull d, p;
  cin >> n >> d >> k >> x;
  x = (100 - x) / 100;
  ull speeds[n];

  repeat(i, n)  cin >> speeds[i]; // speeds of other alpacas

  cin >> p; // speed of our alpaca

  int count = 0;
  bool exit = false;
  repeat(i, n){
    while (speeds[i] >= p){
      if (count > k){
        exit = true;
        break;
      }
      speeds[i] *= x;
      count += 1;
    if (exit) break;
    }
  }
  if (count > k)  printf("NO");
  else  printf("YES");
}
