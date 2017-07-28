////
//// Created by jeevan on 3/29/17.
////
////
//// Created by jeevan on 3/28/17.
////
////
//// Created by jeevan on 3/24/17.
////
//#include <iostream>
//#include <stack>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//const int N = 100;
//int a[N];
//
//
//void findLeaf(int n)  {
//
//    stack<int> st;
//    st.push(a[0]);
//
//    fi(i, 1, n - 2) {
//
//        int curr = a[i], next = a[i + 1];
//
//        while(!st.empty() && curr > st.top())
//            st.pop();
//
//        if(!st.empty() && next > st.top())
//            cout << curr << " ";
//        else
//            st.push(curr);
//    }
//
//    cout << a[n - 1];
//}
//
//void test() {
//
//    int n;
//    cin >> n;
//
//    rep(i, n)
//        cin >> a[i];
//
//    findLeaf(n);
//
//    cout << endl;
//
//}
//
//int main() {
//
//    int t;
//    cin >> t;
//
//    rep(i, t)
//        test();
//
//    return 0;
//}
//
