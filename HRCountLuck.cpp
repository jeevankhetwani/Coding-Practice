////
//// Created by jeevan on 1/29/17.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class matrix {
//
//    char* ptr;
//    int rows, cols;
//
//public:
//    matrix(int r, int c) {
//        rows = r;
//        cols = c;
//        ptr = new char[rows * cols];
//    }
//
//    int getRows() { return rows; }
//    int getCols() { return cols; }
//
//    char* operator[] (int r) {
//        return ptr + r * cols;
//    }
//};
//
//
//int dx[] = {1, 0, -1, 0};
//int dy[] = {0, 1, 0, -1};
//
//int check(int i, int j, matrix& mat) {
//
//    if (mat[i][j] == '*')
//        return 1;
//
//    mat[i][j] = 'X';
//
//    int cnt = 0, res = 0, nx, ny;
//
//    for (int m = 0; m < 4; m++) {
//
//        nx = i + dx[m];
//        ny = j + dy[m];
//
//        if ( nx >= 0 && nx < mat.getRows() && ny >= 0 && ny < mat.getCols() && mat[nx][ny] != 'X') {
//            cnt++;
//            res= max(res, check(nx, ny, mat));
//        }
//
//    }
//
//    if (!res) return 0;
//
//    return res + (cnt > 1);
//
//}
//
//
//pair<int, int> getStart(matrix& mat, char ch) {
//
//    for (int i = 0; i < mat.getRows(); i++)
//        for (int j = 0; j < mat.getCols(); j++)
//
//            if (mat[i][j] == ch)
//                return pair<int, int> (i, j);
//
//    return pair<int, int> (-1, -1);
//}
//
//bool check(matrix& mat, char start, char end, int k) {
//
//    pair<int, int> startPos = getStart(mat, start);
//
//    if ( startPos == pair<int, int> (-1, -1) )
//        return false;
//
//    return check(startPos.first, startPos.second, mat) == k + 1;
//}
//
//void load(matrix& mat) {
//
//    for (int i = 0; i < mat.getRows(); i++)
//        for (int j = 0; j < mat.getCols(); j++)
//            cin >> mat[i][j];
//
//}
//
//bool loadAndCheck() {
//    int n, m, k;
//
//    cin >> n >> m;
//    matrix mat(n, m);
//    load(mat);
//
//    cin >> k;
//    return check(mat, 'M', '*', k) ;
//
//}
//
//int main() {
//
//    int test;
//    cin >> test;
//
//    for (int i = 0; i < test; i++) {
//        if (loadAndCheck())
//            cout << "Impressed";
//        else
//            cout << "Oops!";
//        cout << endl;
//    }
//
//    return 0;
//}
