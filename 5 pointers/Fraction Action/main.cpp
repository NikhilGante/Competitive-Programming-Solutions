#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int num, den;
  cin >> num >> den;

  if(num % den == 0)  printf("%d\n", num / den);
  else{
    int quotient = (int)(num/den); 
    int remainder = num % den;
    int div = __gcd(remainder, den);
    remainder /= div;
    if (den > num) printf("%d/%d\n", remainder, den/div);
    else{
      den /= div;
      printf("%d %d/%d\n",quotient, remainder, den);
    }
  }
}