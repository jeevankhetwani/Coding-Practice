//// C/C++ program to get maximum xor value
//// of two numbers in a range
//#include <bits/stdc++.h>
//using namespace std;
//
//// method to get maximum xor value in range [L, R]
//int maxXORInRange(int L, int R)
//{
//    // get xor of limits
//    int LXR = L ^ R;
//
//    // loop to get msb position of L^R
//    int msbPos = 0;
//    while (LXR)
//    {
//        msbPos++;
//        LXR >>= 1;
//    }
//
//    // construct result by adding 1,
//    // msbPos times
//    int maxXOR = 0;
//    int two = 1;
//    while (msbPos--)
//    {
//        maxXOR += two;
//        two <<= 1;
//    }
//
//    return maxXOR;
//}
//
//// Driver code to test above methods
//int main()
//{
//    int L = 128;
//    int R = 129;
//    cout << maxXORInRange(L, R) << endl;
//    return 0;
//}
