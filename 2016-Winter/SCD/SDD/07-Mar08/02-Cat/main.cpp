#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
using namespace sict;
int main(){
  Cat C("Fluffy");
  C.act();
  //C.move();
  C.sound();
  cout << "------------End of main" << endl;
  return 0;
}
