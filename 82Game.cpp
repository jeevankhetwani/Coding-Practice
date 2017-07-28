////
//// Created by jeevan on 1/1/17.
////
//#include <iostream>
//#include <memory>
//using namespace std;
//
//
//class matrix {
//    size_t rows, columns;
//    char *data;
//
//public:
//    matrix(size_t r, size_t col) {
//        rows = r;
//        columns = col;
//        data = new char[rows * columns];
//    }
//
//    char * operator[](size_t row) {
//        return row * columns + data;
//    }
//};
//
//bool pathExists(matrix mat, int m, int n, int i, int j) {
//    if ( i < 0 || i == m || j < 0 || j == n )
//        return false;
//
//    if (i == 0 && j == 0)
//        return true;
//
//    if (mat[i][j] == 'X')
//        return false;
//
//    if (mat[i][j] == 0)
//        mat[i][j] = pathExists(mat, m, n, i, j - 1) || pathExists(mat, m, n, i - 1, j);
//
//    return mat[i][j];
//}
//
//void displayPath(matrix mat, int m, int n, int i, int j) {
//
//    if (pathExists(mat, m, n, i, j)) {
//
//        while (true) {
//            cout << i << j << " ";
//
//            if (i == 0 && j == 0)
//                return;
//
//            if (j > 0  && mat[i][j-1] == 1)
//                j--;
//            else
//                i--;
//        }
//    }
//}
//
//
//int main() {
//
//    int m = 4, n = 4;
//    matrix mat(m,n);
//
//    for (int i = 0; i < m; i++)
//        for (int j = 0; j < n; j++)
//            mat[i][j] = 0;
//
//    mat[0][1] = mat[1][2] = mat[2][0] = mat[2][3]  = 'X';
//
////    cout << pathExists(mat, m, n, m-1, n-1);
//
//    displayPath(mat, m, n, m-1, n-1);
//    return 0;
//}
