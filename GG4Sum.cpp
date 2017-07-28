////
//// Created by jeevan on 3/23/17.
////
//#include <iostream>
//#include <algorithm>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//
//using namespace std;
//
//typedef struct {
//    int first, sec;
//    int sum;
//} mypair;
//
//bool mycompare(mypair p1, mypair p2) {
//    return p1.sum < p2.sum;
//}
//
//
//bool noCommon(mypair p1, mypair p2) {
//
//    return ( p1.first == p2.first || p1.first == p2.sec
//             || p1.sec == p2.first || p1.sec == p2.first );
//}
//
//int a[100];
//
//void findEff(int n, int k) {
//
//    int size = n * (n - 1) / 2;
//
//    mypair pairs[size];
//
//    int m = 0;
//    fi(i, 0, n - 2)
//        fi(j, i + 1, n - 1) {
//            pairs[m].first = i;
//            pairs[m].sec = j;
//            pairs[m].sum = a[i] + a[j];
//            m++;
//        }
//
//
//    sort(pairs, pairs + size, mycompare);
//
//    int i = 0, j = size - 1;
//
//    while( i < j) {
//
//        int sum = pairs[i].sum + pairs[j].sum;
//
//        if ( sum == k )  {
//            if ( noCommon(pairs[i], pairs[j]) )
//                printf ("%d, %d, %d, %d\n", a[pairs[i].first], a[pairs[i].sec],
//                        a[pairs[j].first], a[pairs[j].sec]);
//            i++; j--;
//        } else if (sum < k)
//            i++;
//        else
//            j--;
//    }
//
//}
//
//
//
//void find(int n, int k) {
//
//    bool flag = false;
//
//    sort(a, a + n);
//
//    fi(i, 0, n - 4) {
//
//        if(i != 0 && a[i] == a[i - 1])
//            continue;
//
//        fi(j, i + 1, n - 3) {
//
//            if(j != i + 1 && a[j] == a[j - 1])
//                continue;
//
//            int rem = k - a[i] - a[j];
//            int l = j + 1, h = n - 1;
//
//            while (l < h) {
//
//                int sum = a[l] + a[h];
//
//                if (sum == rem) {
//
//                    printf("%d %d %d %d $", a[i], a[j], a[l], a[h]);
//                    flag = true;
//                    l++;
//                    h--;
//
//                    while(l < h && a[l] == a[l-1])
//                        l++;
//
//                    while(l < h && a[h] == a[h+1])
//                        h--;
//
//
//
//                } else if (sum < rem)
//                    l++;
//                else
//                    h--;
//
//            }
//        }
//    }
//
//    if(!flag)
//        cout << -1;
//
//    cout << endl;
//}
//
//void test() {
//
//    int n, k;
//    cin >> n >> k;
//
//    rep(i, n)
//        cin >> a[i];
//
////    find(n, k);
//    findEff(n, k);
//
//}
//
//int main() {
//
////    int a[] = {10, 2, 3, 4, 5, 9, 7, 8}, k = 23;
////    int n = sizeof(a) / sizeof(a[0]);
//
//
//
//
//    int t;
//    cin >> t;
//
//    rep(i, t)
//        test();
//
//    return 0;
//}
