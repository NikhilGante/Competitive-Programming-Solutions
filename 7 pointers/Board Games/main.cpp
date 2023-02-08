#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

unordered_set<int> visited;
queue<pii> q;
int dist = 0;

void enqueue(int val){
  if (visited.contains(val) || val < 0 || val > 10e7) return;
  visited.insert(val);
  q.push(make_pair(val,dist));
}

int main() {
  
  int n, m;
  cin >> n >> m;
  
  // BFS
  int nums_searched = 0;
  q.push(make_pair(n, 0));
  enqueue(n);
  
  while(!q.empty()){
    pii cur = q.front();
    q.pop();
//    printf("visiting: %d\n", cur.first);
    nums_searched++;
    if(cur.first == m){
      cout << cur.second << endl;
      break;
    }

    dist = cur.second + 1;
    enqueue(cur.first * 3);
    enqueue(cur.first - 1);
    enqueue(cur.first - 3);
    if(!(cur.first & 1))  enqueue(cur.first/2);
    
  }
  return 0;
}