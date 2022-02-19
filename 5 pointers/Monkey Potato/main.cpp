#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <utility>
using namespace std;

#define ld long double
#define ul unsigned long
#define ll long long
#define ull unsigned long long
#define repeat(name, times) for(int name = 0; name < times; name++)
#define uMap unordered_map

int main(){
  cin.tie(0);
  cout.tie(0);
  cin.sync_with_stdio(0);

  int k, d;
  cin >> k >> d;
  int arr[d];
  bool zero_exists = false;
  repeat(i, d){
    cin >> arr[i];
    if (!arr[i]){
      zero_exists = true;
      arr[i] = 10;
    }
  }
  int min = *min_element(arr, arr + d);
  string ans;
  if(zero_exists){
    if(d == 1)      ans = "-1";
    else{
      if (k == 1) ans = to_string(min);
      else{
        ans = to_string(min);
        for(int i = 1; i < k - 1; i++){
          ans += "0";
        }
        ans += to_string(min);
      }
    }
  }
  else{
    repeat(i, k) ans += to_string(min);
  } 
  cout << ans << "\n";
}