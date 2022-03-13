#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

#define ul unsigned long
#define repeat(name, times) for (int name = 0; name < times; name++)

int main(){
  short n, r, s, d;
  string name;
  cin >> n;
  if (!n) return 0;
  if(n == 1){
    cin >> name >> r >> s >> d;
    printf("%s\n", name.c_str());
    return 0;
  }
  pair<string, ul> a = make_pair("", 0), b = make_pair("", 0);
  
  repeat(i, n){
    cin >> name >> r >> s >> d;
    pair<string, ul> cur = make_pair(name.c_str(), 2 * r + 3 * s + d);
    if(cur.second > a.second){
      b = a;
      a = cur;
    }
    else if(cur.second > b.second)  b = cur;
  }
  string _a, _b;
  if(a.second == b.second){
    int val = a.first.compare(b.first);
    if(val > 0) _a = b.first, _b = a.first;
    else _a = a.first, _b = b.first;
  }
  else _a = a.first, _b = b.first;
  printf("%s\n%s\n", _a.c_str(), _b.c_str());

}