#include <iostream>
#include <cmath>
using namespace std;

#define repeat(name, times) for(short name = 0; name < times; name++)

struct Coord{
  double x, y;
};

double get_dist(Coord coord1, Coord coord2){
  return sqrt(pow((coord2.x - coord1.x), 2) + pow(coord2.y - coord1.y, 2));
}

int main(){
  short l, n, r;
  Coord cur, centre;
  double dir;
  repeat(i, 5){
    cin >> dir >> l >> n;
    dir *= M_PI/180; // convert to radians
    short ans = 1;
    double sin_dir = sin(dir), cos_dir = cos(dir);
    repeat(j, n){
      cin >> centre.x >> centre.y >> r;
      if(get_dist(Coord{l*cos_dir, l*sin_dir}, centre) <= r) ans++;
      else{
        repeat(k, l){
          cur = {k * cos_dir, k * sin_dir}; 
          if(get_dist(cur, centre) <= r){
            ans++;
            break;
          }
        }
      }
    }
    printf("The jet will appear on %d radar screens.\n", ans);
  }
}