#include <iostream> 
using namespace std; 
class Rectangle { 
private: 
double length; 
    double breadth; 
public: 
   Rectangle() : length(0), breadth(0) {} 
   Rectangle(double l, double b) : length(l), breadth(b) {} 
   Rectangle(double side) : length(side), breadth(side) {} 
 double calculateArea() const { 
        return length * breadth; 
    } 
 void displayArea() const { 
        cout << "Area: " << calculateArea() << endl; 
    } 
}; 
int main() { 
    Rectangle rect1;            
    Rectangle rect2(3, 3);      
    Rectangle rect3(3);         
   cout << "Rectangle with no parameters: "; 
    rect1.displayArea(); 
 cout << "Rectangle with two parameters (3, 3): "; 
    rect2.displayArea(); 
cout << "Rectangle with one parameter (3): "; 
    rect3.displayArea(); 
 
    return 0; 
}
