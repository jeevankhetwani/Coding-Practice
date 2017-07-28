////
//// Created by jeevan on 2/9/17.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int n, a[1000005];
//
//void swap(int& a, int& b) {
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//int partition(int p, int r) {
//
//    int x = a[r], i = p - 1, j = p;
//
//    while (j < r) {
//
//        if (a[j] <= x) {
//            i++;
//            swap(a[i], a[j]);
//        }
//
//        j++;
//    }
//
//    swap(a[i + 1], a[r]);
//    return i + 1;
//}
//
//int find() {
//    int p = 0, r = n - 1, med = n / 2;
//
//    while (p <= r && med) {
//
//        int q = partition(p, r);
//
//        if (q < med)
//            p = q + 1;
//        else if (q > med)
//            r = q - 1;
//        else
//            return a[q];
//    }
//
//    return -1;
//}
//
//int main() {
//
//    cin >> n;
//    for(int i = 0; i < n; i++)
//        cin >> a[i];
//
//    cout << find();
//    return 0;
//}
