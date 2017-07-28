////
//// Created by jeevan on 1/27/17.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
////unsigned long find(vector<unsigned long>& a, unsigned long m, unsigned long sum = 0, int i = 0) {
////// non contiguous
////    if (i == a.size() - 1)
////        return sum % m;
////
////    if ( sum == m - 1)
////        return sum  ;
////
////    return max(find(a, m, sum, i + 1), find(a, m, sum + a[i], i+1));
////
////}
//
//unsigned long find(vector<unsigned long>& a, unsigned long m, unsigned long sum = 0, int index = 0) {
//// contiguous
//
//    unsigned long mymax = sum % m;
//
//    for(int i = index; i < a.size(); i++)
//        mymax = max(mymax, find(a, m, sum + a[i], i + 1));
//
//    return mymax;
//}
//
//unsigned long find(int n, unsigned long m) {
//
//    vector<unsigned long> a(n);
//
//    for (int i = 0; i < n; i++)
//        cin >> a[i];
//
//    return find(a, m);
//}
//
//int main() {
//
//    int test, n;
//    unsigned long m;
//
//    cin >> test;
//
//    for (int i = 0; i < test; i++) {
//        cin >> n >> m;
//        cout << find(n, m) << endl;
//
//    }
//
//    return 0;
//}
