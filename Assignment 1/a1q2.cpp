#include <iostream>
#include <string>

using namespace std;

class TCS {
public:
  string name;
  int age;
  string gender;
  string branch;
  string company_id;

  TCS(const string& name, int age, const string& gender, const string& branch, const string& company_id) {
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->branch = branch;
    this->company_id = company_id;
  }

  void display_details() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
    cout << "Branch: " << branch << endl;
    cout << "Company ID: " << company_id << endl;
  }
};

class HCL_Employee : public TCS {
public:
  string company = "HCL";

  HCL_Employee(const string& name, int age, const string& gender, const string& branch, const string& company_id) : TCS(name, age, gender, branch, company_id) {}

  void display_details() override {
    TCS::display_details();
    cout << "Company: " << company << endl;
  }
};

class HCL_Manager : public HCL_Employee {
public:
  int total_experience;
  string department;

  HCL_Manager(const string& name, int age, const string& gender, const string& branch, const string& company_id, int total_experience, const string& department) :
      HCL_Employee(name, age, gender, branch, company_id), total_experience(total_experience), department(department) {}

  void display_details() override {
    HCL_Employee::display_details();
    cout << "Total Experience: " << total_experience << " years" << endl;
    cout << "Department: " << department << endl;
  }
};

int main() {
  int choice;

  while (true) {
    cout << "Enter 1 for Manager or 2 for Employee (0 to exit): ";
    cin >> choice;

    if (choice == 0) {
      break;
    } else if (choice == 1) {
      string name, gender, branch, department;
      int age, total_experience;
      string company_id;

      cout << "Enter name: ";
      cin >> name;
      cout << "Enter age: ";
      cin >> age;
      cout << "Enter gender: ";
      cin >> gender;
      cout << "Enter branch: ";
      cin >> branch;
      cout << "Enter company ID: ";
      cin >> company_id;
      cout << "Enter total experience: ";
      cin >> total_experience;
      cout << "Enter department: ";
      cin >> department;

      HCL_Manager manager(name, age, gender, branch, company_id, total_experience, department);

      cout << "\nEmployee Details:" << endl;
      manager.display_details();
      cout << "\n";

    } else if (choice == 2) {
      string name, gender, branch, company_id;
      int age;

      cout << "Enter name: ";
      cin >> name;
      cout << "Enter age: ";
      cin >> age;
      cout << "Enter gender: ";
      cin >> gender;
      cout << "Enter branch: ";
      cin >> branch;
      cout << "Enter company ID: ";
      cin >> company_id;

      HCL_Employee employee(name, age, gender, branch, company_id);

      cout << "\nEmployee Details:" << endl;
      employee.display_details();
      cout << "\n";

    } else {
      cout << "Invalid choice!" << endl;
    }
  }

  return 0;
}
