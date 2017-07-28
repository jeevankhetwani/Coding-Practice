////
//// Created by jeevan on 5/6/17.
////
//#include <iostream>
//using namespace std;
//
//bool check(string s) {
//
//    int n = s.size();
//
//    if(n >= 10)
//        return true;
//
//    for(int i = 1; i < n - 2; i++)
//        for(int j = i + 1; j < n - 1; j++)
//            for(int k = j + 1; k < n; k++) {
//                string s1 = s.substr(0, i);
//                string s2 = s.substr(i, j - i);
//                string s3 = s.substr(j, k - j);
//                string s4 = s.substr(k, n - k);
//
//                if(s1 != s2 && s2 != s3 && s3 != s4 && s2 != s3 && s2 != s4 && s3 != s4)
//                    return true;
//            }
//    return false;
//
//}
//
//int main() {
//
//
//    cout << check("aaabb");
//    return 0;
//}
