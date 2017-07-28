////
//// Created by jeevan on 12/18/16.
////
//#include<iostream>
//#include<string>
//using namespace std;
//
//void rotate(int *a, int n) {
//    int temp;
//    for (int j = 1; j < n; j++)
//        for (int i = 0; i < j; i++) {
//            temp = *(a+ i*n + j);
//            *(a+ i*n + j) = *(a+ j*n + i);
//            *(a+ j*n + i) = temp;
//        }
//}
//
//void display(int *a, int n) {
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++)
//            cout << *(a+ i*n + j) << " ";
//        cout << endl;
//
//    }
//    cout << endl;
//}
//
//int main() {
//
//    int n;
//    int a[3][3] = {1, 3, 5, 2, 4, 7, 8, 9, 6};
//    display(a[0], 3);
//    rotate(a[0], 3);
//    display(a[0], 3);
//
//    return 0;
//}
//
