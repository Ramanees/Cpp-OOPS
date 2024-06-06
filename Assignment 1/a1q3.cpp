#include <iostream>

class MyClass {
public:

  int x = 0;
};

MyClass::MyClass() {}

int main() {

  MyClass obj;

  std::cout << obj.x << std::endl;

  return 0;
}
