#include <iostream>
using namespace std;

template<typename T> T func(T);

int main(){
  cout << func<int>(2) << endl;
  return 0;
}

template<typename T> T func(T a){
  return a+a;
}
