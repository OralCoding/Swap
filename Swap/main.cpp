#include <iostream>

using namespace std;

void Swap(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int main() {
  int a = 3;
  int b = 2;

  cout << "Before swap: " << a << " " << b << endl;
  Swap(a, b);
  cout << "After  swap: " << a << " " << b << endl;

  return 0;
}