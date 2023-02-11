#include <bits/stdc++.h>

using namespace std;

array<int, 3> ans;
array<int, 3> temp;
int a, b, c;

int main() {
  int n;
  cin >> n;
  
  while(n--){
    cin >> a >> b >> c;
    temp = ans;
    ans[0] = a + max(temp[1], temp[2]);
    ans[1] = b + max(temp[0], temp[2]);
    ans[2] = c + max(temp[0], temp[1]);
  }
  cout << *max_element(ans.begin(), ans.end()) << endl;
  
  return 0;
}
