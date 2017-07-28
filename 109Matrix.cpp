////
//// Created by jeevan on 1/7/17.
////
//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//class matrix {
//    int *ptr, m, n;
//
//public:
//    matrix(int r, int c) {
//        m = r;
//        n = c;
//        ptr = new int[m * n];
//    }
//
//    void init(vector<vector<int>> v) {
//        for (int i = 0; i < m; i++)
//            for (int j = 0; j < n; j++)
//                (*this)[i][j] = v[i][j];
//    }
//
//    int getRows() { return m; }
//    int getCols() { return n; }
//
//    int* operator[] (int row) {
//        return (ptr + n * row);
//    }
//
//    int* getRowM(int i) {
//        int *a = new int[n];
//
//        if (i < m)
//            for (int j = 0; j < n; j++)
//                 a[j] = (*this)[i][j];
//
//        return a;
//    }
//
//    int* getColM(int j) {
//        int *a = new int[m];
//
//        if (j < n)
//            for (int i = 0; i < m; i++)
//                a[i] = (*this)[i][j];
//        return a;
//    }
//
//};
//
//pair<int, int> search1Helper(matrix mat, pair<int, int> row, pair<int, int> col, int k ) {
//
//    pair<int, int> notFound (-1, -1), temp;
//
//    if ( row.first <= row.second && col.first <= col.second ) {
//        int i = (row.first + row.second) / 2;
//        int j = (col.first + col.second) / 2;
//
//        if (mat[i][j] == k)
//            return pair<int, int>(i, j);
//        else if (mat[i][j] < k) {
//
//            temp = search1Helper(mat, pair<int,int> (row.first, i), pair<int, int> (j+1, col.second), k);
//            if (temp != notFound)
//                return temp;
//
//            temp = search1Helper(mat, pair<int,int> (i + 1, row.second), pair<int, int> (j+1, col.second), k);
//            if (temp != notFound)
//                return temp;
//
//            temp = search1Helper(mat, pair<int,int> (i+1, row.second), pair<int, int> (col.first, j), k);
//            if (temp != notFound)
//                return temp;
//
//        }
//        else {
//
//            temp = search1Helper(mat, pair<int,int> (row.first, i-1), pair<int, int> (col.first, j-1), k);
//            if (temp != notFound)
//                return temp;
//
//            temp = search1Helper(mat, pair<int,int> (i, row.second), pair<int, int> (col.first, j-1), k);
//            if (temp != notFound)
//                return temp;
//
//            temp = search1Helper(mat, pair<int,int> (row.first, i-1), pair<int, int> (j, col.second), k);
//            if (temp != notFound)
//                return temp;
//
//        }
//    }
//
//    return notFound;
//}
//
//pair<int, int> search1(matrix mat, int k) {
//    return search1Helper(mat, pair<int, int> (0, mat.getRows() - 1), pair<int, int> (0, mat.getCols()-1), k);
//}
//
//pair<int, int> search(matrix mat, int k) {
//    int i = 0, j = mat.getCols() - 1;
//
//    while( i < mat.getRows() && j >= 0) {
//        if ( mat[i][j] == k )
//            return pair<int, int> (i, j);
//        else if ( mat[i][j] > k )
//            j--;
//        else
//            i++;
//    }
//
//    return pair<int, int> (-1, -1);
//}
//
//int main() {
//    matrix mat(4, 4);
//    mat.init( vector<vector<int>> {
//                  {15, 20, 40, 85},
//                  {20, 35, 80, 95},
//                  {30, 55, 95, 105},
//                  {40, 80, 100, 120}
//              }
//    );
//
//    pair<int, int> index = search1(mat, 85);
//    cout << index.first << " " << index.second;
//
//
//}