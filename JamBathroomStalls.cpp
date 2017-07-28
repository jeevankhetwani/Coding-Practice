////
//// Created by jeevan on 4/10/17.
////
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//void test(int i) {
//
//    int n, k, t, n1, n2;
//    cin >> n >> k;
//
//    priority_queue<int> pq;
//    pq.push(n);
//
//    for(int i = 1; i <= k; i++) {
//
//        t = pq.top();
//        pq.pop();
//
//        n1 = t / 2;
//        if (n1)
//            pq.push(n1);
//
//        n2 = (t - 1) / 2;
//        if(n2)
//            pq.push(n2);
//
//    }
//
//    printf("Case #%d: %d %d\n", i, n1, n2);
//
//}
//
//
//int main() {
//
//
//    int t;
//    cin >> t;
//
//    for(int i = 1; i <= t; i++)
//        test(i);
//    return 0;
//}
//
