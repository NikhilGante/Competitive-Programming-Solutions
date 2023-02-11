#include "bits/stdc++.h"

using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  int heights[n];
  for (int i = 0; i < n; ++i) cin >> heights[i];

  int dists[n];
  for (int i = 0; i < min(n, k); ++i) dists[i] = abs(heights[i] - heights[0]);
  
  for (int i = k; i < n; ++i) {
    dists[i] = INT16_MAX;
    for (int j = 1; j < k + 1; ++j) dists[i] = min(dists[i - j] + abs(heights[i] - heights[i - j]), dists[i]);
    
  }
  cout << dists[n-1] << endl;
  
  
  
  
}