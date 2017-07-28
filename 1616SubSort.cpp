////
//// Created by jeevan on 1/9/17.
////
//#include<iostream>
//#include<vector>
//#include<stack>
//
//using namespace std;
//
////pair<int, int> subSort(vector<int> a) {
////
////    stack<int> st;
////
////    if (a.empty())
////        return pair<int, int> (-1, -1);
////
////    int m = a.size()  - 1, max = a[0], n = 0;
////    st.push(0);
////
////    for (int i = 1; i < a.size(); i++) {
////
////        if ( a[st.top()] > a[i] ) {
////
////            if ( a[st.top()] > max)
////                max = a[st.top()];
////
////            while ( !st.empty() &&  a[st.top()] > a[i])
////                st.pop();
////
////
////            if ( st.empty() )
////                m = 0;
////            else if ( st.top() < m )
////                m = st.top() + 1;
////        }
////
////        if ( a[i] < max )
////            n = i;
////
////        st.push(i);
////    }
////
////    if ( m < n )
////        return pair<int, int> (m, n);
////
////    return pair<int, int> (-1, -1);
////}
//
//int leftEnd(vector<int>& a) {
//    int left = 0;
//    while ( left < a.size() - 1 && a[left] <= a[left + 1])
//        left++;
//    return left;
//}
//
//int rightEnd(vector<int>& a) {
//    int right = a.size() - 1;
//    while( a[right] >= a[right - 1])
//        right--;
//    return right;
//}
//
//int myMin(vector<int>& a, int m, int n) {
//
//    int min = a[m];
//    for (int i = m; i <= n; i++) {
//        if (a[i] < min)
//            min = a[i];
//    }
//
//    return min;
//}
//
//int myMax(vector<int>& a, int m, int n) {
//
//    int max = a[m];
//    for (int i = m; i <= n; i++) {
//        if (a[i] > max)
//            max = a[i];
//    }
//    return max;
//}
//
//
//pair<int, int> subSort(vector<int> a) {
//    int min, max;
//
//    if (a.empty())
//        return pair<int, int> (-1, -1);
//
//    int left = leftEnd(a);
//
//    if (left == a.size() - 1)
//        return pair<int, int> (-1, -1);
//
//    int right = rightEnd(a);
//
//
//    min = myMin(a, left + 1, right);
//    max = myMax(a, left, right - 1);
//
//    while ( min < a[left] )
//        left--;
//
//    while ( max > a[right] )
//        right++;
//
//
//    return pair<int, int> (left + 1, right - 1 );
//
//}
//
//int main() {
//
//    vector<int> v = {1, 2, 4, 7, 10, 11, 7, 12, 6, 7, 16, 5, 19};
//    pair<int, int> indices = subSort(v);
//    cout << indices.first << " " << indices.second;
//    return 0;
//}
