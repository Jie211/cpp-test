#include <iostream>
using namespace std;

int func(int);

int main(){
  cout << func(2) << endl;
  return 0;
}

int func(int a){
  return a+a;
}
