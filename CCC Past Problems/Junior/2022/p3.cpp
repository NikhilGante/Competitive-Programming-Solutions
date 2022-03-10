#include <iostream>
#include <string>

using namespace std;

string line;
int start, symbol, _end, num_start, i;
int disp;

#define IS_NUM(num) 0 <= (int)num - 48 && (int)num - 48 <= 9

int main(){
  cin >> line;
  while(i < line.size()){
    // waits for index to be a either '-' or '+'
    while (!(line[i] == '-' || line[i] == '+')) i++;
    symbol = i; // index of - or +
    i++;
    num_start = i;  // start is the FIRST index that IS a number
    // waits for index to NOT be a number
    while (IS_NUM(line[i])) i++;
    _end = i; //start is the first index that is NOT a number
    cout << line.substr(start, symbol - start) << (line[symbol] == '+' ? " tighten " : " loosen ") << line.substr(num_start, _end - num_start) << endl; 
    start = _end; // start is the first index that is NOT a number
  }
}