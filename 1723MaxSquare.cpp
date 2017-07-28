////
//// Created by jeevan on 1/20/17.
////
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int findMax(vector<vector<bool>> a) {
//
//    int len = a[0].size();
//    bool flag;
//
////  len
//    for (int k = len; k >= 2; k-- ) {
//
////     select 2d matrix
//
//        for (int m = 0; m <= len - k; m++)
//
//            for (int n = 0; n <= len - k; n++) {
//
//// check border elements
//
//                flag = true;
//                for (int i = m; i < m + k && flag; i+= k - 1)
//                    for (int j = n; j < n + k && flag; j++)
//                        flag = a[i][j];
//
//                for (int i = m; i < m + k && flag; i++)
//                    for (int j = n; j < n + k && flag; j += k - 1)
//                        flag = a[i][j];
//
//                if (flag)
//                    return k;
//
//            }
//
//    }
//
////    for len 1
//    for (int i = 0; i < len; i++)
//        for (int j = 0; j < len; j++)
//            if (a[i][j])
//                return 1;
//
//    return 0;
//}
//
//int main() {
//
//    vector<vector<bool>> a ({
//                                    {1, 1, 1, 1},
//                                    {1, 0, 1, 1},
//                                    {1, 1, 1, 1},
//                                    {1, 1, 1, 1}
//                            });
//    cout << findMax(a);
//    return 0;
//}
