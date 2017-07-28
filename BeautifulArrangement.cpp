////
//// Created by jeevan on 5/5/17.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int count = 0;
//
//void swap(int& a, int& b) {
//    int tmp = a;
//    a = b;
//    b = tmp;
//}
//
//void permute(int a[], int n, int index) {
//
//    if(index == n) {
//        count++;
//        return;
//    }
//
//    for(int i = index; i < n; i++) {
//        swap(a[i], a[index]);
//
//        if(a[index] % (index + 1) == 0 || (index + 1) % a[index] == 0)
//            permute(a, n, index + 1);
//
//        swap(a[i], a[index]);
//    }
//}
//
//int countArrangement(int N) {
//
//    int a[N];
//    for(int i = 0; i < N; i++)
//        a[i] = i + 1;
//
//    permute(a, N, 0);
//    return count;
//
//}
//
//vector<int> findDuplicates(vector<int>& nums) {
//
//    vector<int> res;
//
//}
//
//int main() {
//
//    cout << countArrangement(4);
//
//    return 0;
//}
