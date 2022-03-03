#include <bits/stdc++.h>
using namespace std;

#define repeat(name, times) for(int name = 0; name < times; name++)
#define uMap unordered_map

int main(){
  cin.tie(0);
  cout.tie(0);
  cin.sync_with_stdio(0);

  // collecting input
  int x, y, g;
  cin >>  x;
  string with[2][x];
  repeat(i, x)  cin >> with[0][i] >> with[1][i];

  cin >> y;
  string without[2][y];
  repeat(i, y)  cin >> without[0][i] >> without[1][i];

  cin >>  g;
  string groups[3][g];
  uMap<string, int> ids;
  repeat(i, g){
    repeat(j, 3){
      cin >> groups[j][i];
      ids[groups[j][i]] = i; // each member is mapped to their group number
    }
  }
  // iterates through restrictions to see which ones are violated
  int violations = 0;
  repeat(i, x)  if(ids[with[0][i]] != ids[with[1][i]]) violations++;
  repeat(i, y)  if(ids[without[0][i]] == ids[without[1][i]]) violations++;
  cout << violations;

}