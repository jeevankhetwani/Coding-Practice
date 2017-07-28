////
//// Created by jeevan on 3/17/17.
////
//#include <iostream>
//#include <string>
//using namespace std;
//
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//bool isPalindrome(string s, int i, int j) {
//
//    while (i < j) {
//        if(s[i] != s[j])
//            return false;
//
//        i++; j--;
//    }
//
//    return true;
//}
//
//int findCuts(string s, int i, int j) {
//
//    if( isPalindrome ( s, i, j ) )
//        return 0;
//
//    int minCuts = INT32_MAX;
//
//    for(int k = i; k < j; k++)
//        minCuts = min( minCuts, findCuts(s, i, k) + findCuts(s, k + 1, j) + 1);
//
//    return minCuts;
//
//}
//
//int findCuts(string s) {
//
//    int n = s.length();
//
//    int p[n][n];
//    bool c[n][n];
//
//    if(isPalindrome(s, 0, n-1))
//        return 0;
//
//    fi(i, 0, n-1) {
//        p[i][i] = 0;
//        c[i][i] = true;
//    }
//
//
//    fd(i, n - 2, 0)
//
//        fi(j, i + 1, n - 1)
//
//            if(j == i + 1)
//                c[i][j] = ( s[i] == s[j] );
//            else
//                c[i][j] = ( s[i] == s[j] && c[i + 1][j - 1] );
//
//
//    fd(i, n - 2, 0) {
//
//        fi(j, i + 1, n - 1) {
//
//            if(c[i][j])
//                p[i][j] = 0;
//            else {
//                p[i][j] = INT32_MAX;
//                fi(k, i, j - 1)
//                    p[i][j] = min(p[i][j], p[i][k] + p[k + 1][j] + 1);
//            }
//
//        }
//    }
//
//    return p[0][n-1];
//
//
//}
//
//int minPalPartion(string str)
//{
//    // Get the length of the string
//    int n = str.length();
//
//    /* Create two arrays to build the solution in bottom up manner
//       C[i] = Minimum number of cuts needed for palindrome partitioning
//                 of substring str[0..i]
//       P[i][j] = true if substring str[i..j] is palindrome, else false
//       Note that C[i] is 0 if P[0][i] is true */
//    int C[n];
//    bool P[n][n];
//
//    int i, j, k, L; // different looping variables
//
//    // Every substring of length 1 is a palindrome
//    for (i=0; i<n; i++)
//    {
//        P[i][i] = true;
//    }
//
//    /* L is substring length. Build the solution in bottom up manner by
//       considering all substrings of length starting from 2 to n. */
//    for (L=2; L<=n; L++)
//    {
//        // For substring of length L, set different possible starting indexes
//        for (i=0; i<n-L+1; i++)
//        {
//            j = i+L-1; // Set ending index
//
//            // If L is 2, then we just need to compare two characters. Else
//            // need to check two corner characters and value of P[i+1][j-1]
//            if (L == 2)
//                P[i][j] = (str[i] == str[j]);
//            else
//                P[i][j] = (str[i] == str[j]) && P[i+1][j-1];
//        }
//    }
//
//    for (i=0; i<n; i++)
//    {
//        if (P[0][i] == true)
//            C[i] = 0;
//        else
//        {
//            C[i] = INT32_MAX;
//            for(j=0;j<i;j++)
//            {
//                if(P[j+1][i] == true && 1+C[j]<C[i])
//                    C[i]=1+C[j];
//            }
//        }
//    }
//
//    // Return the min cut value for complete string. i.e., str[0..n-1]
//    return C[n-1];
//}
//
//int main() {
//
//    string s = "abcbd";
////    cout << findCuts(s, 0, s.length() - 1);
//
////    cout << findCuts(s);
//    cout << minPalPartion(s);
//    return 0;
//}
