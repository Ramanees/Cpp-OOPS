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

    void setMatrix() {
        cout << "Enter elements of the matrix (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> data[i][j];
            }
        }
    }

    void displayMatrix() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix addMatrix(const Matrix& m) const {
        if (rows != m.rows || cols != m.cols) {
            throw invalid_argument("Matrices dimensions do not match for addition.");
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + m.data[i][j];
            }
        }
        return result;
    }
};

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns for the matrices: ";
    cin >> rows >> cols;

    Matrix matrix1(rows, cols);
    Matrix matrix2(rows, cols);

    cout << "Matrix 1:\n";
    matrix1.setMatrix();
    cout << "Matrix 2:\n";
    matrix2.setMatrix();

    try {
        Matrix result = matrix1.addMatrix(matrix2);
        cout << "Resultant Matrix after Addition:\n";
        result.displayMatrix();
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
