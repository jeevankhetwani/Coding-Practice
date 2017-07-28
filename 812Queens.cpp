////
//// Created by jeevan on 1/3/17.
////
//#include<iostream>
//
//using namespace std;
//
//class matrix {
//    int *ptr, rows, columns;
//
//public:
//    matrix() {}
//
//    matrix(int r, int c) {
//        rows = r;
//        columns = c;
//        ptr = new int[rows * columns];
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
//    int* operator[] (int row) {
//        return ptr + row * columns;
//    }
//
//    void display() {
//        for(int i = 0; i < rows; i++) {
//            for (int j = 0; j < columns; j++)
//                cout << *(ptr + i * columns + j) << " ";
//            cout << endl;
//        }
//    }
//};
//
//bool placeQueen(int* col, int m, int n) {
//
//    for (int i = 0; i < m; i++) {
//
//        if (col[i] == n)
//            return false;
//
//        if ( abs(m - i) == abs(n - col[i]))
//            return false;
//    }
//
//
//    return true;
//}
//
//void display(int* col, int n) {
//    int i, j;
//    for (i = 0; i < n; i++) {
//
//        for (j = 0; j < col[i]; j++)
//            cout << 0 << " ";
//
//        cout << 1 << " ";
//
//        for ( j++; j < n; j++)
//            cout << 0 << " ";
//        cout << endl;
//    }
//
//    cout << endl;
//}
//
//void nqueens(int* col, int row, int n) {
//
//    for (int j = 0; j < n; j++) {
//
//        if (placeQueen(col, row, j)) {
//
//            col[row] = j;
//
//            if (row == n - 1)
//                display(col, n);
//             else
//                nqueens(col, row + 1, n);
//
//        }
//    }
//}
//
//void nqueens(int n) {
//    int *col = new int[n];
//    nqueens(col, 0, n);
//}
//
//int main() {
//
//    nqueens(6);
//}
