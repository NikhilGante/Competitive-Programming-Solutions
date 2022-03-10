#include <iostream>
#include <algorithm>
using namespace std;

#define ul unsigned long

#define repeat(name, times) for(int name = 0; name < times; name++)

int main(){
  cin.tie(0);
  cout.tie(0);
  cin.sync_with_stdio(0);

  ul n, m, val;
  cin >> m >> n;
  ul ans = n;
  ul arr[n];
  repeat(i, n)  cin >> arr[i];
  double avg = m, last_avg = m;
  bool triggered = false;
  sort(arr, arr + n);

  repeat(i, n){
    avg = avg + (arr[i] - avg)/(i + 2);
    if(avg <= last_avg){
      ans--;
      triggered = true;
    }
    else if(triggered) break;
    last_avg = avg;
  }
  cout << ans << endl;
}