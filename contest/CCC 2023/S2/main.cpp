#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int max_n = 5e3;
int arr[max_n];

int n;

unordered_map<int, int> vis;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  
  cin >> n;
  for (int i = 0; i < n; ++i) cin >> arr[i];


  for (int i = 1; i < n + 1; ++i){
//    printf("Size: %d\n", i);

    int least = INT32_MAX;
    // Crops of length I
    for (int j = 0; j < n - i + 1; ++j) { // j reps starting index
      int sum = 0;
      
      int mid = j + i/2;
      if(vis.find(mid) != vis.end())
      for(int k = 0; k < ceil((double)i/2); k++){ // j reps moving index
//        cout << "yo: " << arr[j+k] << " " << arr[j + i - 1 - k];
        sum += abs(arr[j+k] - arr[j + i - 1 - k]);
      }
      least = min(least, sum);
//      cout << endl;
    }
    cout << least << " ";
  }
  cout << endl;
  
 
  
  return 0;
}
