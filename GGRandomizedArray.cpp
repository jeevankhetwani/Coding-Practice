////
//// Created by jeevan on 3/22/17.
////
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//int count[6];
//unordered_map<string, int> perm = { {"123",  0}, {"132", 1}, {"231", 2},
//                                    {"213", 3}, {"312", 4}, {"321", 5}};
//
//void swap(char &ch1, char &ch2) {
//
//    char tmp = ch1;
//    ch1 = ch2;
//    ch2 = tmp;
//}
//
//void naive(int n) {
//
//    char num[3];
//    srand(time(NULL));
//
//    rep(i, 6)
//        count[i] = 0;
//
//    rep(i, n) {
//
//        num[0] = '1';
//        num[1] = '2';
//        num[2] = '3';
//
//        rep(j, 3) {
//            int k = rand() % 3;
//            swap(num[j], num[k]);
//        }
//
//        string s = num;
//        int index = perm[s];
//        count[index]++;
//    }
//
//    rep(i, 6)
//     cout << count[i] << " ";
//    cout << endl;
//
//}
//
//void kf(int n) {
//    char num[3];
//    srand(time(NULL));
//
//    rep(i, 6)
//        count[i] = 0;
//
//    rep(i, n) {
//
//        num[0] = '1';
//        num[1] = '2';
//        num[2] = '3';
//
//        fd(j, 2, 1) {
//            int k = rand() % (j + 1);
//            swap(num[j], num[k]);
//        }
//
//        string s = num;
//        int index = perm[s];
//        count[index]++;
//    }
//
//    rep(i, 6)
//        cout << count[i] << " ";
//
//}
//
//int main() {
//
//    naive(1000000);
//    kf(1000000);
//    return 0;
//}
