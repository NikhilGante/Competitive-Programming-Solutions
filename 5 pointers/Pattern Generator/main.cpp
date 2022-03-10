#include <iostream>
#include <string.h>
using namespace std;

// int* arr;
int main(){
  // arr[0] = 23;
  // arr[1] = 67;
  // arr[2] = 39;

  // for(int i = 0; i < 3; i++){
  //   cout << arr[i] << " ";
  // }
  int arr[] = {42,24,7,24,6,4,3347,3};
  int* new_arr = (int*) malloc(sizeof(arr)*sizeof(int));


  char str[50] = "hi";
  for(int i = 0; i < 50; i++) printf("%c", str[i]);
  printf("DONE\n");
  cout << str;
  char* ptr;
  size_t length = 10;
  // ptr = (char*)malloc(length*sizeof(char));
  strcpy((char*)str, "whatuuuuuuuuuuuuup");
  printf("%s", str);
  // free(ptr);

}