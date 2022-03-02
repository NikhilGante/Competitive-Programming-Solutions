#include <iostream>
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

  int n, l;
  cin >> n >> l;
  string str, temp;
  while (str.size() < n){
    cin >> temp;
    str += temp + " ";
  }
  str.erase(str.end() - 1, str.end());  // removes space
  repeat(i, n){
    if (str[i] != ' ') str[i] = (char)((int)((str[i]) - 97 + l) % 26 + 97);
  }
  cout << str;

}