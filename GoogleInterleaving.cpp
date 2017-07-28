////
//// Created by jeevan on 4/14/17.
////
//#include <iostream>
//using namespace std;
//
//bool check(string A, string B, string C) {
//
//    int a = A.length(), b = B.length(), c = C.length();
//
//    if(c != a + b)
//        return false;
//
//    int w[a + 1][b + 1];
//    w[0][0] = 1;
//
//    for(int i = 1; i <= a; i++)
//        w[i][0] = C[i - 1] == A[i - 1] && w[i - 1][0];
//
//    for(int j = 1; j <= b; j++)
//        w[0][j] = C[j - 1] == B[j - 1] && w[0][j - 1];
//
//    for(int i = 1; i <= a; i++)
//        for(int j = 1; j <= b; j++)
//            w[i][j] = (A[i - 1] == C[i + j - 1] && w[i - 1][j]) || (B[j - 1] == C[i + j - 1] && w[i][j - 1]);
//
//    return w[a][b];
//}
//
//
//int main() {
//
////    string A = "", B = "", C = "";
////    cout << check(A, B, C);
//
//    cout << check("XXY", "XXZ", "XXZXXXY");
//    cout << check("XY" ,"WZ" ,"WZXY");
//    cout << check("XY", "X", "XXY");
//    cout << check("YX", "X", "XXY");
//    cout << check("XXY", "XXZ", "XXXXZY");
//    return 0;
//}
