////
//// Created by jeevan on 3/17/17.
////
//#include <iostream>
//
//using namespace std;
//
//int find(int price[], int n) {
//
//    int maxPrice[n + 1];
//
//    maxPrice[0] = 0;
//
//    for(int i = 1; i <= n; i++) {
//
//        int currMax = price[i - 1];
//
//        for(int j = 1; j <= i / 2; j++)
//            currMax = max( currMax, maxPrice[j] + maxPrice[i - j]);
//
//        maxPrice[i] = currMax;
//
//    }
//
//    return maxPrice[n];
//
//}
//
//int main() {
//
//    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
//    cout << find(price, 8);
//    return 0;
//}
