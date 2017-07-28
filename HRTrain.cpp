////
//// Created by jeevan on 1/27/17.
////
//#include <iostream>
//
//using namespace std;
//
////class Track {
////
////public:
////    int r, c1, c2;
////
////    Track(int r, int c1, int c2) : r(r), c1(c1), c2(c2) {}
////};
//
//class matrix {
//    bool *ptr;
//    int rows, cols;
//
//public:
//    matrix(int r, int c) {
//        rows = r;
//        cols = c;
//        ptr = new bool[rows * cols];
//    }
//
//    bool* operator[] (int r) {
//        return ptr + cols * r;
//    }
//
//    int getRows() { return rows; }
//    int getCols() { return cols; }
//
//};
//
//
//void addTrack(matrix& mat, int r, int c1, int c2) {
//
//    for (int j = c1; j <= c2; j++)
//        mat[r][j] = 1;
//
//}
//
//int getNum(int m, int n, int k) {
//
//    int r, c1, c2;
//
//    matrix mat(m, n);
//
//    for (int i = 1; i <= k; i++) {
//        cin >> r >> c1 >> c2;
//        addTrack(mat, r - 1, c1 - 1, c2 - 1);
//        cin.clear();
//    }
//
//    int sum = 0;
//    for (int i = 0; i < mat.getRows(); i++)
//        for (int j = 0; j < mat.getCols(); j++)
//            sum += mat[i][j];
//
//
//    return m * n - sum;
//}
//
//int main() {
//
//    int m, n, k;
//
//    cin >> m >> n >> k;
//    cout << getNum(m, n, k);
//
//
//    return 0;
//}
//
