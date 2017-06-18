#include <iostream>
#include "func.h"
using namespace std;

int main(){
  cout << func<int>(2) << endl;
  cout << func<double>(2.0) << endl;
  return 0;
}
