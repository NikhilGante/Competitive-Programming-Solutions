#include <bits/stdc++.h>
using namespace std;

#define ld long double
#define ul unsigned long
#define ll long long
#define ull unsigned long long
#define repeat(name, times) for(int (name) = 0; (name) < (times); (name)++)


int main() {
  cin.tie(0);
  cout.tie(0);
  cin.sync_with_stdio(0);
  int N, L;
  double S;
  cin >> N >> L >> S;
  map<int, int> spooky; // maps from index to Si
  
  int a,b,s;
  repeat(i, N){
    cin >> a >> b >> s;
    spooky[a] += s, spooky[b + 1] -= s;
  }
  pair<int, int> prev = {0, 0};
  int ans = 0;
  for(auto it: spooky){
    if (prev.second < S) ans += it.first - prev.first; // add indices between prev interval change and cur
    prev.first = it.first;
    prev.second += it.second; // updates value of interval
  }
  if (prev.second < S) ans += L - prev.first; // add indices for last interval
  cout << ans;
}
