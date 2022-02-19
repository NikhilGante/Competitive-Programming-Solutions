#include <iostream>
#include <utility>
#include <unordered_map>
using namespace std;

#define ld long double
#define ul unsigned long
#define ll long long
#define ull unsigned long long
#define uMap unordered_map
#define repeat(name, times) for(int name = 0; name < times; name++)


int main(){
  int n;
  cin >> n;
  string str;
  cin >> str;
  uMap<char, int> letter_occurences;
  repeat(i, n) letter_occurences[str[i]] += 1;
  int ans = 0;
  for(const auto& it: letter_occurences){
    if(it.second & 1) ans++;
  }
  if(ans == 0) ans = 1;
  printf("%d", ans);

}