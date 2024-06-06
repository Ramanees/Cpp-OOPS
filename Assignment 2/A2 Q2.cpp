#include <iostream>
#include <string>
using namespace std;
struct Student {
  int rollNumber;
  string name;
  float marks;
};
int main() {
  Student student;

  cout << "Enter student roll number: ";
  cin >> student.rollNumber;

  cout << "Enter student name: ";
  getline(cin, student.name); 

  cout << "Enter student marks: ";
  cin >> student.marks;

  cout << "\nStudent Details:" << endl;
  cout << "Roll Number: " << student.rollNumber << endl;
  cout << "Name: " << student.name << endl;
  cout << "Marks: " << student.marks << endl;

  return 0;
}
