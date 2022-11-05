#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int dist, num_clubs;
  cin >> dist >> num_clubs;
  int club_arr[num_clubs];
  
  for (int i = 0; i < num_clubs; ++i) cin >> club_arr[i];
  sort(club_arr, club_arr + num_clubs, greater<>());
  
  bool sol_found = false;
  for (int i = 0; i < num_clubs; ++i){
    int dist_left = dist;
    int strokes = 0;
    int j = i;
    while(j < num_clubs){
      strokes += (int) (dist_left / club_arr[j]);
      dist_left %= club_arr[j];
      j++;
    }
    if(dist_left == 0){
      printf("Roberta wins in %d strokes.\n", strokes);
      sol_found = true;
      break;
    }
  }
  if(!sol_found)  printf("Roberta acknowledges defeat.\n");
  return 0;
}