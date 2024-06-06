#include <iostream>
#include <string>

class String {
public:

  std::string str;

  String() {}

  String(const std::string& s) : str(s) {}

  String operator+(const String& other) const {
    return String(str + other.str);
  }

  void display() const {
    std::cout << str << std::endl;
  }
};

int main() {
  String str1("Hello, ");
  String str2("World!");

  String str3 = str1 + str2;

  std::cout << "Resultant string: ";
  str3.display();

  return 0;
}
