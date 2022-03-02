#include <iostream>
#include <algorithm>
using namespace std;

#define repeat(name, times) for(int name = 0; name < times; name++)

#define LOOP(){\
  if(buy){\
    line_1 += to_string(arr[a]);\
    line_2 += "B";\
    a++;\
  }\
  else{\
    line_1 += to_string(arr[b]);\
    line_2 += "S";\
    b++;\
  }\
  buy = !buy;\
  line_1 += " ";\
}

int main(){
  cin.tie(0);
  cout.tie(0);
  cin.sync_with_stdio(0);

  int n;
  cin >> n;
  unsigned long arr[n];
  repeat(i, n)  cin >> arr[i];
  sort(arr, arr + n);
  string line_1, line_2;

  bool odd = n & 1;
  bool buy = true;
  int a = 0, b = odd ? n/2 + 1 : n/2;
  repeat(i, n/2)  LOOP();
  if (odd){// middle index should be E
    line_1 += to_string(arr[n / 2]) + " ";
    line_2 += "E";
  }
  for(int i = odd? n/2 + 1 : n/2; i < n; i++)  LOOP();
  line_1.pop_back();
  cout << line_1 << "\n" << line_2 << "\n";
}