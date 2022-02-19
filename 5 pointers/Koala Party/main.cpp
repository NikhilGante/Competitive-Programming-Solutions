#include <iostream>
#include <unordered_map>
#include <utility>
#include <algorithm>
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
  ul ans = 0, diff;
  for(int i = 1; i < n - 1; i++){
    diff = 0;
    for(int j = 1; j < n - 1; j++){
      diff += j * (arr[j] - arr[j - 1]);
      if (diff > greatest) greatest = j;

    }
    ul last_diff = arr[n - 1] - arr[n - 2];
    if(last_diff > 0) 
    if(diff > greatest) greatest = diff;
  }

}