#include <iostream>
using namespace std;
int main(){
  int a[10] = { 2, 3, 5, 0, 4, 0, 4, 3, 0, 8 };
  int i;
  auto num = 0;
  for (i = 0; i < 10; i++){
    // num += (a[i] != 0);
    num += !!a[i];
  }
  cout << "number of non-zeros: " << num << endl;
  return 0;
}