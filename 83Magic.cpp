////
//// Created by jeevan on 1/1/17.
////
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//int magic(int *a, int p, int q) {
//
//    if (p > q)
//        return -1;
//
//    int m = ( p + q ) / 2;
//
//    if (m == a[m])
//        return m;
//
//    if ( m < a[m] )
//        return magic(a, 0, m-1);
//
//    return magic(a, m+1, q);
//}
//
//int magicDup(int *a, int p, int q) {
//
//    if (p > q)
//        return -1;
//
//    int m = ( p + q ) / 2;
//
//    if ( m == a[m] )
//        return m;
//
////    left
//    int index, srcIndex = min(m-1, a[m]);
//    index = magic(a, 0, srcIndex);
//
//    if (index != -1)
//        return index;
//
////    right
//    srcIndex = max(m+1, a[m]);
//    return magic(a, srcIndex, q);
//
//}
//
//
//int magicDup(int *a, int n) {
//    return magicDup(a, 0, n-1);
//}
//
//
//int magic(int *a, int n) {
//    return magic(a, 0, n-1);
//}
//
//int main() {
//
//    int a[] = {-10, -5, 2, 2, 2, 3, 4, 7, 9, 12, 13};
//
//    int index = magicDup(a, 11);
//
//    if (index == -1)
//        cout << "NO";
//    else
//        cout << a[index];
//    return 0;
//}
