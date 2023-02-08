#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, g;

  cin >> x;
  vector<pair<string, string>> same(x);
  for(auto& i : same)  cin >> i.first >> i.second;
  
  cin >> y;
  vector<pair<string, string>> diff(y);
  for(auto& i : diff) cin >> i.first >> i.second;
  
  cin >> g;
  unordered_map<string, int> groups;
  for (int i = 0; i < g; ++i) {
    for (int j = 0; j < 3; ++j) {
      string temp;
      cin >> temp;
      groups[temp] = i;
    }
  }
  int violations = 0;
  for(const auto &i : same)  if(groups[i.first] != groups[i.second]) violations++;
  for(const auto &i : diff)  if(groups[i.first] == groups[i.second]) violations++;
  cout << violations << endl;

  return 0;
}
