#include <bits/stdc++.h>

using namespace std;
int n, W;

#define MAX_N 100
struct Person{
  int w, v;
};
Person p[MAX_N];

int main() {
  cin >> n >> W;
  for (int i = 0; i < n; ++i) cin >> p[i].w >> p[i].v;
  sort(p, p + n, [](Person a, Person b)-> bool{
    return a.v/a.w > b.v/b.w;
  });
  cout << endl;
  for (int i = 0; i < n; ++i){
    printf("%d %d\n", p[i].w, p[i].v);
  }
  
  
  
  
  
  return 0;
}
