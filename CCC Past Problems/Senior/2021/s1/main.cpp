#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  std::istream::sync_with_stdio(false);
  
  int n;
  cin >> n;
  
  int h[n + 1];
  int w[n];
  
  
  for (int i = 0; i < n + 1; ++i) cin >> h[i];
  for (int i = 0; i < n; ++i) cin >> w[i];
  
  double area = 0;
  for (int i = 0; i < n; ++i) area += (h[i] + h[i + 1])*w[i];
  area *= 0.5;
  printf("%lf\n", area);
  return 0;
}
