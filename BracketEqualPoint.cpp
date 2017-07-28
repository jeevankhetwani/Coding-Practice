////
//// Created by jeevan on 5/19/17.
////
//#include <iostream>
//using namespace std;
//
//int find(string& s) {
//
//    int i = -1, j = s.size();
//
//    while(1) {
//
//        while(++i < j && s[i] != '(');
//
//
//        if(i == j)
//            return i;
//
//        while(--j > i && s[j] != ')');
//
//        if(i == j)
//            return i;
//
//    }
//
//}
//
//int find2(string& s) {
//    int count = 0, i = 0;
//
//    while(i < s.size())
//        if(s[i] == ')')
//            count++;
//
//    return count;
///*
// * suppose n = total len, k = total closing
// *
// * Now consider substr of len k from start
// *          left        right
// * total      k         n - k
// * closing    k - x     x    suppose x is num of closing in right sub
// * opening    x
// *
// *
// *
// *
// */
//}
//
//
//void test() {
//    string s;
//    cin >> s;
//    cout << find2(s) << endl;
//}
//
//int main() {
//
//    int t;
//    cin >> t;
//
//    while(t--)
//        test();
//
//    return 0;
//}
