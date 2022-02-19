#include <iostream>
#include <unordered_map>
#include <utility>
using namespace std;

#define ld long double
#define ul unsigned long
#define ll long long
#define ull unsigned long long
#define repeat(name, times) for(ul name = 0; name < times; name++)
#define uMap unordered_map

int main(){
  cin.tie(0);
  cout.tie(0);
  cin.sync_with_stdio(0);

  ul n, l, S, a, b;
  uint16_t s;
  cin >> n >> l >> S;
  short arr[l + 1] = {};
  uMap<ull, uint16_t> crc;
  repeat(i, n){
    cin >> a >> b >> s;
    arr[a] += s;
    arr[b + 1] -= s;
  }
  ul ans = l;
  repeat(i, l){
    if(i != 0) arr[i] += arr[i - 1];
    if(arr[i] >= S) ans--;
  }
  cout << ans;

}