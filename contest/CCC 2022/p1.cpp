#include <iostream>
using namespace std;

int main(){
  int n, ans = 0;
  cin >> n;
  while (n > -1){
    ans += !(n % 5);
    n -= 4;
  }
  cout << ans;
}
