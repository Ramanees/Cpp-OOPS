#include <iostream>
class Number {
protected:
    int num;
public:
    void setNumber(int n) {
        num = n;
    }
};
class Square : public Number {
public:
    int getSquare() {
        return num * num;
    }
};

class Cube : public Number {
public:
    int getCube() {
        return num * num * num;
    }
};

int main() {
    Square sq;
    Cube cb;
    
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    sq.setNumber(number);
    cb.setNumber(number);
    std::cout << "Square of " << number << " is: " << sq.getSquare() << std::endl;
    std::cout << "Cube of " << number << " is: " << cb.getCube() << std::endl;

    return 0;
}


