////
//// Created by jeevan on 2/3/17.
////
//#include <iostream>
//#include <vector>
//#define FI(i, a, b) for(int i = (a); i < (b); i++)
//#define FD(i, a, b) for(int i = (a); i > (b); i--)
//using namespace std;
//
//void swap(int& x, int& y) {
//    int temp = x;
//    x = y;
//    y = temp;
//}
//
//int check() {
//
//    int k, n, sum = 0;
//    cin >> n;
//    vector<int> a(n + 1);
//
//    FI(i, 1, n + 1)
//        cin >> a[i];
//
//    FD(i, n, -1) {
//
//        k = i;
//        while(a[k] != i)
//            k--;
//
//        if (i - k >= 3) {
//            sum = -1;
//            break;
//        }
//
//        sum += i - k;
//        while(k != i) {
//            swap(a[k], a[k + 1]);
//            k++;
//        }
//    }
//
//    return sum;
//
//}
//
//int main() {
//
//    int test, sum;
//
//    cin >> test;
//    FI(i, 0, test) {
//
//        sum = check();
//
//        if (sum == -1)
//            cout << "Too chaotic";
//        else
//            cout << sum;
//        cout << endl;
//    }
//
//
//    return 0;
//}
