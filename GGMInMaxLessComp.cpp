////
//// Created by jeevan on 3/20/17.
////
//#include <iostream>
//
//using namespace std;
//
//struct mypair {
//    int min, max;
//};
//
//struct mypair find(int a[], int n) {
//
//    struct mypair minmax;
//
//    int count = 0;
//
//    if(n == 1) {
//        minmax.min = a[0];
//        minmax.max = a[0];
//        return minmax;
//    }
//
//    count++;
//    if(a[0] > a[1]) {
//        minmax.min = a[1];
//        minmax.max = a[0];
//    } else {
//        minmax.min = a[0];
//        minmax.max = a[1];
//    }
//
//    for(int i = 2; i < n; i++) {
//
//
//        if(++count && a[i] > minmax.max)
//            minmax.max = a[i];
//
//        else if(++count && a[i] < minmax.min)
//            minmax.min = a[i];
//
//
//    }
//
//    cout << count;
//    return minmax;
//
//}
//
//struct mypair find1(int a[], int n) {
//
//    struct mypair minmax;
//    int i, count = 0;
//
//    if(n % 2 == 0) {
//        if( ++count && a[1] > a[0]) {
//            minmax.min = a[0];
//            minmax.max = a[1];
//        } else {
//            minmax.min = a[1];
//            minmax.max = a[0];
//        }
//        i = 2;
//    } else {
//        minmax.min = minmax.max = a[0];
//        i = 1;
//    }
//
//    while(i < n) {
//
//        if( ++count && a[i] > a[i + 1]) {
//
//            if(++count && minmax.max > a[i])
//                    minmax.max = a[i];
//            if(++count && minmax.min < a[i + 1])
//                minmax.min = a[i + 1];
//
//        } else {
//
//            if(++count && minmax.max > a[i + 1])
//                minmax.max = a[i + 1];
//            if(++count && minmax.min < a[i])
//                minmax.min = a[i];
//
//        }
//
//        i += 2;
//    }
//
//    cout << count;
//    return minmax;
//
//}
//
//int main() {
//
//    int a[] = {0, 10, 44, 55, 62, 80, 45, 5, 69, 58, 7, 244, 489, 369, 2115, 1556, 4514, 65, 6516, 0, 4, 48151};
//    int n = sizeof(a) / sizeof(a[0]);
//
//    find(a, n);
//    find1(a, n);
//    return 0;
//}
