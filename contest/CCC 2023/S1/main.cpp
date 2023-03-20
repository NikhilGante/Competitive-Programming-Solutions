#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int max_n = 2e5;
bool arr[max_n][2];
int c;
int ans = 0;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  
  cin >> c;
  for(int i = 0; i < 2; ++i){
    for (int j = 0; j < c; ++j) {
      cin >> arr[j][i];
      if(arr[j][i]) ans += 3;
    }
  }
  
  for (int i = 0; i < c - 1; ++i){
    if(arr[i][0]) {
      if (arr[i + 1][0]) ans -= 2;
      if (!(i & 1) && arr[i][1]) ans -= 2;
    }
    if(arr[i][1] && arr[i + 1][1])   ans -= 2;
    
  }
  if(!((c-1) & 1) && arr[c-1][0] && arr[c-1][1])  ans -= 2;
  cout << ans << endl;
  
  return 0;
}
//0 0 1 0 0 1 0
//0 0 1 1 0 1 0

//0 0 1 1 1 0 0
//0 0 1 1 1 1 0