#include <iostream>
using namespace std;
class Matrix {
private:
    int rows, cols;
    int** data;
public:
    Matrix(int r, int c) {
        rows = r;
        cols = c;
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }
    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }
    void inputMatrix() {
        cout << "Enter elements of the matrix (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> data[i][j];
            }
        }
    }
    void displayMatrix() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix multiply(Matrix& other) {
        if (cols != other.rows) {
            cout << "Matrix multiplication not possible due to dimension mismatch.\n";
            exit(1);
        }
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }
};
int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> rows1 >> cols1;
    Matrix matrix1(rows1, cols1);
    matrix1.inputMatrix();
    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> rows2 >> cols2;
    Matrix matrix2(rows2, cols2);
    matrix2.inputMatrix();
    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible due to dimension mismatch.\n";
        return 1;
    }
    Matrix result = matrix1.multiply(matrix2);
    cout << "Resultant matrix after multiplication:\n";
    result.displayMatrix();
    return 0;
}

