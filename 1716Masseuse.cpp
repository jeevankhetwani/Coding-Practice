////
//// Created by jeevan on 1/18/17.
////
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
////int findmax(vector<int>& a, int index = 0, bool flag = false) {
//// recursion
////    if (index >= a.size())
////        return 0;
////
////    if (flag)
////        index++;
////
////    return max(a[index] + findmax(a, index + 1, true), findmax(a, index + 1, false));
////
////}
//
//int findmaxMemoization(vector<int>& a, vector<int>& mem, int index, bool flag) {
//    if (index >= a.size())
//        return 0;
//
//    if (flag)
//        index++;
//
//    if (mem[index] == 0)
//
//    mem[index] =  max(a[index] + findmaxMemoization(a, mem, index + 1, true), findmaxMemoization(a, mem, index + 1, false));
//
//    return mem[index];
//}
//
//int findmax(vector<int>& a) {
//    vector<int> mem(a.size());
//    return findmaxMemoization(a, mem, 0, false);
//
//}
//
//int main() {
//
//    vector<int> a = {30, 15, 60, 75, 45, 15, 15, 45};
//    cout << findmax(a);
//    return 0;
//}
