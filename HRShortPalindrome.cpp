////
//// Created by jeevan on 1/28/17.
////
//#include <iostream>
//#include <vector>
//#include <string>
//#include <cmath>
//
//typedef unsigned long ul;
//
//using namespace std;
//
//
//ul find(string s) {
//
//    unsigned long k = 0UL, len = s.size();
//
//    for (ul i = 0; i < len; i++)
//        for (ul j = i + 1; j < len; j++)
//            for (ul m = j + 1; m < len; m++) {
//                if( s[j] == s[m] )
//                    for (ul n = m + 1; n < len; n++)
//                        if (s[i] == s[n])
//                            k += 1;
//            }
//    return k % (ul)( pow(10.0 , 9.0) + 7 );
//
//}
//
//int main() {
//
//    cout << find("");
//
//    return 0;
//}
