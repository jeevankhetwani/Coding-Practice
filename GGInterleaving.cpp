////
//// Created by jeevan on 3/26/17.
////
//#include <iostream>
//#include <string>
//#include <cstring>
//
//using namespace std;
//
//
//bool isInterleave(string A, string B, string C)
//{
//    int M = A.length(), N = B.length();
//
//    // Let us create a 2D table to store solutions of
//    // subproblems.  C[i][j] will be true if C[0..i+j-1]
//    // is an interleaving of A[0..i-1] and B[0..j-1].
//    bool IL[M+1][N+1];
//
//    memset(IL, 0, sizeof(IL)); // Initialize all values as false.
//
//    // C can be an interleaving of A and B only of sum
//    // of lengths of A & B is equal to length of C.
//    if ((M+N) != C.length())
//        return false;
//
//    // Process all characters of A and B
//    for (int i=0; i<=M; ++i)
//    {
//        for (int j=0; j<=N; ++j)
//        {
//            // two empty strings have an empty string
//            // as interleaving
//            if (i==0 && j==0)
//                IL[i][j] = true;
//
//                // A is empty
//            else if (i==0 && B[j-1]==C[j-1])
//                IL[i][j] = IL[i][j-1];
//
//                // B is empty
//            else if (j==0 && A[i-1]==C[i-1])
//                IL[i][j] = IL[i-1][j];
//
//                // Current character of C matches with current character of A,
//                // but doesn't match with current character of B
//            else if(A[i-1]==C[i+j-1] && B[j-1]!=C[i+j-1])
//                IL[i][j] = IL[i-1][j];
//
//                // Current character of C matches with current character of B,
//                // but doesn't match with current character of A
//            else if (A[i-1]!=C[i+j-1] && B[j-1]==C[i+j-1])
//                IL[i][j] = IL[i][j-1];
//
//                // Current character of C matches with that of both A and B
//            else if (A[i-1]==C[i+j-1] && B[j-1]==C[i+j-1])
//                IL[i][j]=(IL[i-1][j] || IL[i][j-1]) ;
//        }
//    }
//
//    return IL[M][N];
//}
//bool isInterleaveDP(string A, string B, string C) {
//
//    int a = A.length(), b = B.length();
//    bool c[a + 1][b + 1];
//    c[0][0] = true;
//
//    for(int i = 1; i <= a; i++)
//        c[i][0] = (A[i - 1] == C[i - 1]) && c[i-1][0];
//
//    for(int j = 1; j <= b; j++)
//        c[0][j] = (B[j - 1] == C[j - 1]) && c[0][j - 1];
//
//    for(int i = 1; i <= a; i++)
//        for(int j = 1; j <= b; j++)
//            c[i][j] = ( A[i - 1] == C[i + j - 1] && c[i - 1][j] ) || ( B[j - 1] == C[i + j - 1] && c[i][j - 1] );
//
//
//    return c[a][b];
//
//}
//
//
//int main() {
//
//    cout << isInterleaveDP("aab", "axy", "aaxaby");
//    return 0;
//}