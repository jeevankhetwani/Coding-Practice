////
//// Created by jeevan on 1/21/17.
////
//
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
//class subArray {
//    int start, end, sum;
//
//public:
//
//    subArray() {}
//
//    subArray(int i, int j, int s) {
//        start = i;
//        end = j;
//        sum = s;
//    }
//
//    int getStart() { return start; }
//
//    int getEnd() { return end; }
//
//    int getSum() { return sum; }
//};
//
//subArray* findMaxSubArray(vector<int> a) {
//
//    int sum = 0, maxSum = 0, start = 0, maxStart, maxEnd;
//
//    for (int i = 0; i < a.size(); i++) {
//
//        if ( sum + a[i] >= 0 ) {
//            sum += a[i];
//
//            if ( maxSum < sum ) {
//                maxSum = sum;
//                maxStart = start;
//                maxEnd = i;
//            }
//        } else {
//            sum = 0;
//            start = i + 1;
//        }
//
//    }
//
//    return new subArray(maxStart, maxEnd, maxSum);
//}
//
//void findColSum(matrix& colSum, matrix& mat) {
//
//    for (int j = 0; j < mat.getCols(); j++)
//        colSum[0][j] = mat[0][j];
//
//    for (int i = 1; i < mat.getRows(); i++)
//        for (int j = 0; j < mat.getCols(); j++)
//            colSum[i][j] = colSum[i-1][j] + mat[i][j];
//
//}
//
//vector<int> findPartialSum(int r1, int r2, matrix& colSum) {
//    vector<int> sum (colSum.getCols());
//
//    if (r1 == 0)
//        for (int j = 0; j < sum.size(); j++)
//            sum[j] = colSum[r1][j];
//    else
//
//        for (int j = 0; j < sum.size(); j++)
//            sum[j] = colSum[r2][j] - colSum[r1 - 1][j];
//
//    return sum;
//}
//
//
//subMatrix* findMaxSum(matrix& mat) {
//    int rows = mat.getRows(), cols = mat.getCols();
//    subMatrix* bestMatrix = nullptr;
//
//    matrix colSum(rows, cols);
//    findColSum(colSum, mat);
//
//    for (int r1 = 0; r1 < rows; r1++)
//        for (int r2 = r1; r2 < rows; r2++) {
//
//            subArray* bestArray = findMaxSubArray(findPartialSum(r1, r2, colSum));
//
//            if ( bestMatrix == nullptr || bestMatrix->getSum() < bestArray->getSum() )
//                bestMatrix = new subMatrix(r1, bestArray->getStart(), r2, bestArray->getEnd(), bestArray->getSum());
//        }
//
//    return bestMatrix;
//}
//
//int main() {
//
//    matrix mat(4, 4);
//    vector<vector<int>> a({
//                                  {-8, 5,  -3, -7},
//                                  {4,  3,  5,  0},
//                                  {-100, -4, 2,  6},
//                                  {25, -3,  -5, 7}
//                          });
//    mat.fill(a);
//
//    subMatrix* best = findMaxSum(mat);
//
//    best->display();
//
//    return 0;
//}
//
