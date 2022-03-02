#include <iostream>
#include <unordered_map>
#include <unordered_set>
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
#define uSet unordered_set


int main(){
  cin.tie(0);
  cout.tie(0);
  cin.sync_with_stdio(0);

  int n;
  cin >> n;
  ul arr[n];
  uSet<double> bowls;
  repeat(i, n){
    cin >> arr[i];
    bowls.insert(arr[i]);
  }
  int ans;
  if (n == 2) ans = !((arr[0] + arr[1]) & 1) + 1;  // returns 2 if sum is even and 1 otherwise
  else{
    ans = 2;
    bool exit = false;
    repeat(i, n){
      if(exit) break;
      repeat(j, n){
        if(j != i){
          int sum = arr[i] + arr[j];
          if(!(sum & 1) && bowls.find(sum / 2) != bowls.end()){
            ans = 3;
            exit = true;
            break;
          }
        }
      }
    }
  }
  cout << ans;
}