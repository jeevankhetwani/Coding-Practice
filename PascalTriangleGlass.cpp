////
//// Created by jeevan on 5/19/17.
////
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//float find(int row, int col, float k) {
//
//    int n = row * (row + 1) / 2, len;
//
//    float water[n];
//    memset(water, 0, sizeof(water));
//
//    water[0] = k;
//
//    for(int i = 0, index = 0; i < row && k; i++) {
//
//        k = 0;
//        len = i + 1;
//
//        for(int j = 0; j <= i; j++, index++) {
//
//            if(water[index] <= 1.0f)
//                continue;
//
//            k = water[index] - 1;
//            water[index] = 1.0f;
//            water[index + len] += k / 2;
//            water[index + len + 1] += k / 2;
//
//        }
//    }
//
//    int index = row * ( row - 1 ) / 2 + col - 1;
//
//    return water[index];
//}
//
//void test() {
//    int i, j;
//    float k;
//    cin >> k >> i >> j;
//
//    cout << find(i, j, k) << endl;
//
//}
//
//int main() {
//
////    int i = 2, j = 2;
////    float X = 2.0; // Total amount of water
////
////    printf("Amount of water in jth glass of ith row is: %f",
////           find(i, j, X));
//
//    int t;
//    cin >> t;
//
//    while(t--)
//        test();
//
//    return 0;
//}
