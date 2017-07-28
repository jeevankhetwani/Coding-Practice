////
//// Created by jeevan on 1/27/17.
////
//#include <cmath>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//class IceCream {
//
//    public:
//        int flavor;
//        int index;
//
//        IceCream(int flavor, int index) {
//            this->flavor = flavor;
//            this->index = index;
//       }
//
//    static struct {
//        bool operator() (const IceCream& a, const IceCream& b) {
//            return a.flavor < b.flavor;
//        }
//    } mycompare;
//};
//
//int binarySearch(int first, int last, vector<IceCream> arr, int search) {
//
//    while( first <= last ) {
//
//        int middle = ( first + last ) / 2;
//        int val = arr[middle].flavor;
//
//        if (search < val)
//            last = middle - 1;
//        else if (search > val)
//            first = middle + 1;
//        else
//            return arr[middle].index;
//    }
//
//    return -1;
//}
//
//int main() {
//    int t;
//    int n, m;
//    cin >> t;
//    for(int test = 0; test < t; test++) {
//        cin >> m >> n;
//        vector<IceCream> arr;
//        arr.reserve(n);
//
//        for (int i = 0; i < n; i++) {
//            int cost;
//            cin >> cost;
//            arr.push_back(IceCream(cost, i + 1));
//        }
//
//        sort(arr.begin(), arr.end(), IceCream::mycompare);
//        int firstIndex = 100000, secondIndex = 100000;
//        for(int i = 0; i < n - 1 ; i++) {
//            int search = m - arr[i].flavor;
//            if(search >= arr[i].flavor) {
//                int index = binarySearch( i + 1, n - 1, arr, search);
//                if( index != -1 ) {
//                    cout << min(arr[i].index, index) << " " << max(arr[i].index, index) << endl;
//                    break;
//
//                }
//            }
//        }
//
//    }
//
//}
//
//
