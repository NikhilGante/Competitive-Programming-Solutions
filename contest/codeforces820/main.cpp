#include <iostream>
using namespace std;
int a,b,c, t;
int main() {
  cin >> t;
  for(int i = 0; i < t; i++){
    cin >> a >> b >> c;
    int time1 = abs(a-1), time2 = abs(c-b)+abs(c-1);
    // cout << time1 << " " << time2 << endl;3 
    if(time1 < time2) cout << "1\n";
    else if(time1 > time2) cout << "2\n";
    else cout << "3\n";
  }
}