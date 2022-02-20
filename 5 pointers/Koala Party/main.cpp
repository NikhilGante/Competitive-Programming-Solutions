#include <iostream>
#include <unordered_map>
#include <utility>
#include <algorithm>
#include <vector>
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

  int n;
  cin >> n;
  ul arr[n];
  repeat(i, n)  cin >> arr[i];

  sort(arr, arr + n);
  ul greatest = arr[n - 1];
  ul ans = 0;
  ll diff;
  int bowls = 1;
  ull oreos_used = 0;
  ull val = arr[0]; // value of elements that are the same
  bool exceeded;
  for(int i = 1; i < n - 1; i++){
    oreos_used -= val - arr[i - 1];
    // val = arr[i];
    // bowls--;
    exceeded = false;
    while(bowls < n - 1){ 
      oreos_used += bowls * (arr[bowls] - arr[bowls - 1]);
      if(oreos_used > greatest){
        oreos_used -= bowls * (arr[bowls] - arr[bowls - 1]);
        exceeded = true;
        break;
      }
      bowls++;
    }
    diff = greatest - oreos_used;
    val = arr[bowls - (exceeded ? 1 : 0)];
    if(diff >= 0 && diff % n == 0){
      bowls++;
      if (bowls > ans) ans = bowls;
      bowls--;
      val += diff / n; 
    }
    else{
      if (bowls > ans) ans = bowls;
    }
    bowls++;
    if(bowls >= n - 1) break;
  }
  cout << ans;

}
//[1, 3, 5][1, 2, 5, 6]