////
//// Created by jeevan on 1/17/17.
////
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void swap(int& a, int& b) {
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//int partition(vector<int>& a, int p, int r) {
//
//    int x = a[r];
//    int i = p - 1, j = p;
//
//    while( j <= r ) {
//
//        if ( a[j] <= x ) {
//            i++;
//            swap(a[i], a[j]);
//        }
//
//        j++;
//    }
//
//    return i;
//
//}
//
//void find(vector<int>& a, int low, int high, int k) {
//
//    int q = partition(a, low, high);
//
//    if ( q == k )
//        return;
//    else if (k < q)
//        find(a, low, q - 1, k);
//    else
//        find(a, q + 1, high, k);
//}
//
//vector<int> find(vector<int> a, int k) {
//    if ( k >= a.size())
//        return a;
//
//    vector<int> mycopy(a.begin(), a.end());
//
//    find(mycopy, 0, a.size() - 1, k - 1);
//
//    return vector<int> (mycopy.begin(), mycopy.begin() + k);
//}
//
//int main() {
//
//    vector<int> v = {9, 3, -2, 4, 6, 1, 7};
//    vector<int> ksmall = find(v, 8);
//
//    for (int i = 0; i < ksmall.size(); i++)
//        cout << ksmall[i] << " ";
//
//    return 0;
//}
//
