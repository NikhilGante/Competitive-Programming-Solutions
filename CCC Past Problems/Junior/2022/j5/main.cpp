#include <iostream>
using namespace std;

#define ull unsigned long long
#define ul unsigned long

#define repeat(name, times) for(int name; name < times; name++)

struct Coord{
  ul x, y;
  bool operator ==(Coord coord){
    return (x == coord.x && y == coord.y);
  }
  bool operator >(Coord coord){
    return (x > coord.x && y > coord.y);
  }
};

int main(){
  ul n, t;
  cin >> n >> t;
  Coord trees[t + 4] = {{0, 0}, {0, n + 1}, {n + 1, 0}, {n + 1, n + 1}};
  repeat(i, t)    cin >> trees[i].x >> trees[i].y;
  Coord lims;
  repeat(j, t){
    lims = {ULONG_MAX, ULONG_MAX};
    repeat(i, t){
      // if(trees[j] != trees[i]){ // don't compare to the same tree
      if(trees[j] > trees[i]){
        
      }
      // }
    }
  }

}