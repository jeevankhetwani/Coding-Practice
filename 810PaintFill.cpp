////
//// Created by jeevan on 1/2/17.
////
//#include<iostream>
//#include <set>
//
//using namespace std;
//
//class matrix {
//    int rows, columns;
//    char *ptr;
//
//public:
//    matrix(int  m, int n) {
//        rows = m;
//        columns = n;
//        ptr = new char[rows * columns];
//    }
//
//    int getRows() {
//        return rows;
//    }
//
//    int getCols() {
//        return columns;
//    }
//
//    char* operator [](int row) {
//        return ( ptr  + columns * row);
//    }
//
//    void fill(char a[][4], int m, int n) {
//        for (int i = 0; i < m; i++)
//            for (int j = 0; j < n; j++)
//                *(ptr + i * columns + j) = a[i][j];
//    }
//
//    void display() {
//        for (int i = 0; i < rows; i++) {
//            for (int j = 0; j < columns; j++)
//                cout << *(ptr + i * columns + j) << " ";
//            cout << endl;
//        }
//        cout << endl;
//    }
//};
//
////void paintFill(set<pair<int, int>> pixels, matrix mat, int m, int n, char prev, char newColor) {
////    if ( m < 0 || m >= mat.getRows() || n < 0 || n >= mat.getCols() )
////        return;
////
////    if ( mat[m][n] != prev || pixels.find(pair<int, int> (m, n)) != pixels.end() )
////        return;
////
////    mat[m][n] = newColor;
////    pixels.insert(pair<int, int> (m, n));
////
////    paintFill(pixels, mat, m-1, n, prev, newColor);
////    paintFill(pixels, mat, m+1, n, prev, newColor);
////    paintFill(pixels, mat, m, n-1, prev, newColor);
////    paintFill(pixels, mat, m, n+1, prev, newColor);
////
////    paintFill(pixels, mat, m-1, n-1, prev, newColor);
////    paintFill(pixels, mat, m+1, n-1, prev, newColor);
////    paintFill(pixels, mat, m+1, n+1, prev, newColor);
////    paintFill(pixels, mat, m-1, n+1, prev, newColor);
////}
////
////void paintFill(matrix mat, int m, int n, char newColor) {
////    set<pair<int, int>> pixels;
////    paintFill(pixels, mat, m, n, mat[m][n], newColor);
////}
//
//void paintFill(matrix mat, int m, int n, char prev, char newColor) {
//    if ( m < 0 || m >= mat.getRows() || n < 0 || n >= mat.getCols() )
//        return;
//
//    if ( mat[m][n] != prev )
//        return;
//
//    mat[m][n] = newColor;
//
//    paintFill(mat, m-1, n, prev, newColor);
//    paintFill(mat, m+1, n, prev, newColor);
//    paintFill(mat, m, n-1, prev, newColor);
//    paintFill(mat, m, n+1, prev, newColor);
//
////    paintFill(mat, m-1, n-1, prev, newColor);
////    paintFill(mat, m+1, n-1, prev, newColor);
////    paintFill(mat, m+1, n+1, prev, newColor);
////    paintFill(mat, m-1, n+1, prev, newColor);
//}
//
//void paintFill(matrix mat, int m, int n, char newColor) {
//    paintFill(mat, m, n, mat[m][n], newColor);
//}
//
//int numOfIslands(matrix& mat) {
////    0 water 1 land
//    int rows = mat.getRows(), cols = mat.getCols();
//
//    for(int i = 0; i < rows; i++)
//        for(int j = 0; j < cols; j++)
//            if(mat[i][j] == '1')
//                mat[i][j] = 'X';
//
//    for(int i = 0; i < rows; i++) {
//
//        if(mat[i][0] == 'X')
//            paintFill(mat, i, 0, 'X', '1');
//
//        if(mat[i][cols - 1] == 'X')
//            paintFill(mat, i, cols - 1, 'X', '1');
//
//    }
//
//    for(int j = 0; j < cols; j++) {
//
//        if(mat[0][j] == 'X')
//            paintFill(mat, 0, j, 'X', '1');
//
//        if(mat[rows - 1][j] == 'X')
//            paintFill(mat, rows - 1, j, 'X', '1');
//
//    }
//
//    int count = 0;
//    for(int i = 1; i < rows - 1; i++)
//        for(int j = 1; j < cols - 1; j++)
//            if(mat[i][j] == 'X') {
//                count++;
//                paintFill(mat, i, j, 'X', '1');
//            }
//
//    return count;
//}
//
//
//int main() {
//
////    matrix mat(3,3);
////    char a[][3] = {
////            {'a', 'a', 'f'},
////            {'f', 's', 'f'},
////            {'s', 'e', 'g'} } ;
////
////    mat.fill(a, 3);
////    mat.display();
////    paintFill(mat, 1, 1, 'x');
////    mat.display();
//
//    matrix mat(5, 4);
//    char a[][4] = {
//            {'0', '0', '0', '0'},
//            {'0', '1', '1', '0'},
//            {'0', '0', 'O', '0'},
//            {'0', '1', '0', '0'},
//            {'0', '0', '1', '1'}
//    };
//
//    mat.fill(a, 5, 4);
//    mat.display();
//
//    cout << numOfIslands(mat);
//    return 0;
//}
