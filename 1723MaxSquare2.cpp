////
//// Created by jeevan on 1/20/17.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class squareCell {
//    int below, right;
//
//public:
//    squareCell() {
//        below = right = 0;
//    }
//
//
//    void set(int r, int b) {
//        right = r;
//        below = b;
//    }
//
//    int getRight() { return right; }
//
//    int getBelow() { return below; }
//
//    void display() {
//        cout << right << below << " ";
//    }
//};
//
//
//template <typename T>
//class matrix {
//    T* ptr;
//    int rows, cols;
//
//public:
//    matrix(int r, int c) : rows(r), cols(c) {
//        ptr = new T[rows * cols];
//    }
//
//    T* operator[] (int row) {
//        return ptr + row * cols;
//    }
//
//    void fill(vector<vector<T>> a) {
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
//void precompute(matrix<squareCell>& cells, matrix<bool> mat) {
//
//    int right , below ;
//
//    for (int i = mat.getRows() - 1; i >= 0; i--)
//        for (int j = mat.getCols() - 1; j >= 0; j--) {
//
//            if (mat[i][j] == 1)  {
//
//                if (i < cells.getRows() - 1)
//                    below = cells[i + 1][j].getBelow() + 1;
//                else
//                    below = 1;
//
//                if (j < cells.getCols() - 1)
//                    right = cells[i][j + 1].getRight() + 1;
//                else
//                    right = 1;
//
//                cells[i][j].set(right, below);
//
//            }
//        }
//}
//
//bool isSquare(int size, int row, int col, matrix<squareCell>& cells) {
//
//    squareCell topLeft = cells[row][col];
//    squareCell topRight = cells[row][col + size - 1];
//    squareCell bottomLeft = cells[row + size - 1][col];
//
//    if ( topLeft.getRight() < size || topLeft.getBelow() < size )
//        return false;
//
//    if (topRight.getBelow() < size)
//        return false;
//
//    if (bottomLeft.getRight() < size)
//        return false;
//
//    return true;
//}
//
//bool check(int size, matrix<squareCell>& cells) {
//
//    int count = cells.getRows() - size + 1;
//
//    for (int i = 0; i < count; i++)
//        for (int j = 0; j < count; j++) {
//            bool flag = isSquare(size, i, j, cells);
//
//            if (flag)
//                return true;
//        }
//
//    return false;
//}
//
//int findMax(matrix<bool>& mat) {
//
//    matrix<squareCell> cells(mat.getRows(), mat.getCols());
//    precompute(cells, mat);
//
//    for (int k = mat.getRows(); k >= 1; k--) {
//        bool flag = check(k, cells);
//
//        if (flag)
//            return k;
//    }
//
//    return 0;
//}
//
//int main() {
//    matrix<bool> mat(4, 4);
//    vector<vector<bool>> a ({
//                                    {1, 1, 1, 1},
//                                    {1, 1, 1, 1},
//                                    {1, 1, 0, 1},
//                                    {1, 1, 1, 1}
//                            });
//    mat.fill(a);
//    cout << findMax(mat);
//    return 0;
//}