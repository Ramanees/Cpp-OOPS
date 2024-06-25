#include <iostream>

int main() {
    // Declare variables
    int rollNumber;
    int marksSubject1, marksSubject2, marksSubject3;
    int totalMarks;
    double averageMarks;

    // Input roll number and marks for 3 subjects
    std::cout << "Enter roll number: ";
    std::cin >> rollNumber;

    std::cout << "Enter marks for Subject 1: ";
    std::cin >> marksSubject1;

    std::cout << "Enter marks for Subject 2: ";
    std::cin >> marksSubject2;

    std::cout << "Enter marks for Subject 3: ";
    std::cin >> marksSubject3;

    // Calculate total marks
    totalMarks = marksSubject1 + marksSubject2 + marksSubject3;

    // Calculate average marks
    averageMarks = (totalMarks) / 3.0;

    // Display results
    std::cout << "\nStudent Roll Number: " << rollNumber << std::endl;
    std::cout << "Marks in Subject 1: " << marksSubject1 << std::endl;
    std::cout << "Marks in Subject 2: " << marksSubject2 << std::endl;
    std::cout << "Marks in Subject 3: " << marksSubject3 << std::endl;
    std::cout << "Total Marks: " << totalMarks << std::endl;
    std::cout << "Average Marks: " << averageMarks << std::endl;

    return 0;
}
