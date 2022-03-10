#include <iostream>
#include <cmath>
using namespace std;

#define repeat(name, times) for(ul name = 0; name < times; name++)
#define ul unsigned long

struct Coord{
  double x, y;
};

double get_dist(Coord coord1, Coord coord2){
  return sqrt(pow((coord2.x - coord1.x), 2) + pow(coord2.y - coord1.y, 2));
}

int main(){
  ul l,n,r;
  double dir;
  repeat(i, 5){
    cin >> dir >> l >> n;
    dir *= M_PI/180; // convert to radians
    // printf("dir: %lf\n", dir);
    ul ans = 0;
    Coord line = {l * cos(dir), l * sin(dir)};
    repeat(j, n){
      Coord centre;
      cin >> centre.x >> centre.y >> r;
      double slope = tan(dir);
      // printf("slope: %f\n", slope);
      double b = (centre.y + (1 / slope) * centre.x);
      // printf("b: %f\n", b);
      double x = b / (slope + 1 / slope);
      double y = slope * x;
      Coord intersection = {x, y};
      // printf("x: %lf, y: %lf\n", centre.x, centre.y);
      // printf("");
      if(get_dist(intersection, centre) <= r && (get_dist(Coord{0.0, 0.0}, intersection) <= l || get_dist(line, centre) <= r)){
        // cout << "added"  << get_dist(Coord{x, y}, centre) << endl;
        double target_dir = atan2(intersection.y, intersection.x);
        if(target_dir < 0) target_dir += 2 * M_PI;
        printf("\tentered: %lf, simulated: %lf\n", dir, target_dir);
        if(dir == target_dir) ans++;
      }
      else{
        // cout << "NOT added"  << get_dist(Coord{x, y}, centre) << endl;
        // cout << "coord: " << line.x << " " << line.y << endl;
        // cout << "min: " << get_dist(line, centre) << endl;


      }
    }
    // cout << "\nANS: " << ans << endl;
    printf("The jet will appear on %d radar screens.\n", ans + 1);
  }
}