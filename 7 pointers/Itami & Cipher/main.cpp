#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define repeat(name, times) for(int name = 0; name < times; name++)

vector<int> possible;

int difference(char a, char b){ // gets difference of 2 chars, accounting for wraparound
  int diff = a - b;
  return diff + (diff >= 0 ? 0 : 26); 
}

int main(){
  cin.tie(0);
  cout.tie(0);
  cin.sync_with_stdio(0);

  string s, t;
  cin >> s >> t;
  vector<int> occurences;
  int diff = difference(t[1], t[0]);
  repeat(i, s.size() - 1){ // finds which starting chars in string match the difference in the plaintext
    if(difference(s[i + 1], s[i]) == diff){
      occurences.push_back(i);
    }  
  }

  vector<int> possible_shifts;
  repeat(i, occurences.size()){ // finds all possible shifts
    bool valid = true;
    int start = occurences[i];
    repeat(j, t.size() - 1){
      if(difference(t[j + 1], t[j]) != difference(s[start + j + 1], s[start + j])){
        valid = false;
        break;
      }
    }
    if(valid) possible_shifts.push_back(difference(s[start], t[0]));  // appends possible shift value
  }
  sort(possible_shifts.begin(), possible_shifts.end());
  int shift = possible_shifts[0]; // picks smallest possible shift
  repeat(i, s.size()){
    int shifted = s[i] - shift - 'a';
    s[i] = shifted + (shifted < 0 ? 'z' + 1 : 'a');
  }
  printf("%d\n%s\n", shift, s.c_str());
}