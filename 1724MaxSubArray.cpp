////
//// Created by jeevan on 1/21/17.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class matrix {
//    int* ptr;
//    int rows, cols;
//
//public:
//    matrix(int r, int c) : rows(r), cols(c) {
//        ptr = new int[rows * cols];
//    }
//
//    int* operator[] (int row) {
//        return ptr + row * cols;
//    }
//
//    void fill(vector<vector<int>> a) {
//        for (int i = 0; i < getRows(); i++)
//            for (int j = 0; j < getCols(); j++)
//                *(ptr + i * cols + j) = a[i][j];
//    }
//
//    void display() {
//        for (int i = 0; i < rows; i++) {
//            for (int j = 0; j < cols; j++)
//                cout << *(ptr + i * cols + j) << " ";
//            cout << endl;
//        }
//        cout << endl;
//    }
//
//
//    int getRows() { return rows; }
//
//    int getCols() { return cols; }
//};
//
//class subMatrix {
//    int row1, col1, row2, col2, sum;
//
//public:
//
//    subMatrix() {}
//
//    subMatrix(int r1, int c1, int r2, int c2, int s) {
//        row1 = r1; col1 = c1;
//        row2 = r2; col2 = c2;
//        sum = s;
//    }
//
//    void display() {
//        cout << row1 << col1 << " " << row2 << col2 << " " << sum;
//    }
//
//    int getSum() { return sum; }
//};
//
//void findSumThru(matrix& sumThru, matrix& mat) {
//
//    int left, top, overlap;
//
//    for (int i = 0; i < mat.getRows(); i++) {
//        for (int j = 0; j < mat.getCols(); j++) {
//
//            top = i > 0 ? sumThru[i-1][j] : 0;
//            left = j > 0 ? sumThru[i][j-1] : 0;
//            overlap = i > 0 && j > 0 ? sumThru[i-1][j-1] : 0;
//
//            sumThru[i][j] = top + left - overlap + mat[i][j];
//        }
//    }
//}
//
//int findSum(int r1, int c1, int r2, int c2, matrix& sumThr) {
//
//    int top = r1 > 0 ? sumThr[r1-1][c2] : 0;
//    int left = c1 > 0 ? sumThr[r2][c1-1] : 0;
//    int topLeft = r1 > 0 && c1 > 0 ? sumThr[r1-1][c1-1] : 0;
//
//    return sumThr[r2][c2] - top - left + topLeft;
//}
//
//subMatrix* findMaxSum(matrix& mat) {
//
//    int rows = mat.getRows(), cols = mat.getCols();
//    matrix sumThru(rows, cols);
//
//    findSumThru(sumThru, mat);
//
//    subMatrix *best = nullptr;
//
//    for (int r1 = 0; r1 < rows; r1++)
//
//        for (int r2 = r1; r2 < rows; r2++)
//
//            for (int c1 = 0; c1 < cols; c1++)
//
//                for (int c2 = 0; c2 < cols; c2++) {
//
//                    int sum = findSum(r1, c1, r2, c2, sumThru);
//
//                    if (best == nullptr || sum >5 best->getSum() )
//                        best = new subMatrix(r1, c1, r2, c2, sum);
//                }
//
//    return best;
//}
//
//
//
//
//int main() {
//
//    matrix mat(4, 4);
//    vector<vector<int>> a ({
//                                    {-8, 5, -3, -7},
//                                    {4, 3, 5, 0},
//                                    {-1, -4, 2, 6},
//                                    {-8, 3, -5, 7}
//                            });
//    mat.fill(a);
//
//    subMatrix* best = findMaxSum(mat);
//
//    best->display();
//    return 0;
//}
