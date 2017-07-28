////
//// Created by jeevan on 1/31/17.
////
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//typedef unsigned int uInt;
//
//class order {
//public:
//    uInt id, arr, proc;
//    order(uInt id, uInt arr, uInt proc) : id(id), arr(arr), proc(proc) {}
//
//    static bool mycompare (const order* str1, const order* str2)
//    {
//        if (str1->arr + str1->proc < str2->arr + str2->proc) return true;
//        if (str1->arr + str1->proc == str2->arr + str2->proc) return str1->id < str2->id;
//        return false;
//    }
//};
//
//int main() {
//
//    uInt n, a, p;
//    cin >> n;
//
//    vector<order*> orders;
//    orders.reserve(n);
//
//    for (uInt i = 1; i <= n; i++) {
//        cin >> a >> p;
//        orders.push_back(new order(i, a, p));
//    }
//
//    sort(orders.begin(), orders.end(), order::mycompare);
//
//    for (uInt i = 0; i < n; i++)
//        cout << orders[i]->id << " ";
//
//    return 0;
//}
//
//
