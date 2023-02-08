#include <bits/stdc++.h>
using namespace std;

#define repeat(name, times) for(int name = 0; name < times; name++)
#define uMap unordered_map

int main(){
  cin.tie(0);
  cout.tie(0);
  cin.sync_with_stdio(0);
  
  // collecting input
  int n, i = 0, ans = 0;
  cin >> n;
  
  while(i <= n){
    if(!((n-i)%5)) ans++;
    i += 4;
  }
  printf("%d\n", ans);
  
  
}