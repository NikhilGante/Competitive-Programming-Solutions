#include <bits/stdc++.h>
using namespace std;

struct Jersey{
    int num = 0;
    char size = 'A';

    bool operator ==(const Jersey& other) const{
      return num == other.num && size == other.size;
    }
};

class Hash_Jersey{

public:
    size_t operator() (const Jersey& other) const{
      return (hash<int>()(other.num)) ^ (hash<char>()(other.size));
    }

};

int main() {
  int j, a;
  cin >> j >> a;
  unordered_set<Jersey, Hash_Jersey> requests;
  
  int total = 0;
  
  for (int i = 0; i < j; ++i){
    char size;
    cin >> size;
    requests.insert({i, size});
  }
  for (int i = 0; i < a; ++i){
    Jersey jersey;
    cin >> jersey.size >> jersey.num;
    if(requests.contains(jersey)){
      total++;
      requests.erase(jersey);
    }
  }
  cout << total << endl;

//  sort(Jerseys, Jerseys + a, [](const Jersey& a, const Jersey& b)->bool{
//    if(a.num == b.num) return a.size > b.size;
//    else return a.num < b.num;
//  });



  return 0;
}
