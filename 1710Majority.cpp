////
//// Created by jeevan on 1/16/17.
////
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int majority(vector<int>& a) {
//
//    int total, same, curr;
//    bool flag;
//
//    for (int i = 0; i < a.size(); i++) {
//        curr = a[i];
//        same =  1; total = 1;
//        flag = false;
//
//        i++;
//
//        while (i < a.size() ) {
//
//            if (curr == a[i])
//                same++;
//
//            total++;
//
//
//            if ( (float) same  / total < 0.5 ) {
//                break;
//            }
//
//            flag = true;
//            i++;
//        }
//    }
//
//    if (flag)
//        return curr;
//
//    return -1;
//}
//
//
//
//int main() {
//
//    vector<int> a = {1, 5, 2, 5, 3, 5, 4,  9, 9, 9};
//    cout << majority(a);
//    return 0;
//}
