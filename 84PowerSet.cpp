////
//// Created by jeevan on 1/1/17.
////
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void getSubsets(int *a, int n, vector<vector<int>>& subsets) {
//
//    if (n < 0) {
//        subsets.push_back(vector<int> ());
//    } else {
//        getSubsets(a, n-1, subsets);
//
//        vector<vector<int>>::const_iterator itr = prev.begin();
//
//        while ( itr != prev.end() ) {
//            vector<int> temp = *itr;
//            subsets.push_back(temp);
//            temp.push_back(a[n]);
//            subsets.push_back(temp);
//            itr++;
//        }
//    }
//    return subsets;
//}
//
//
//
//
//int main() {
//    int a[] = {1, 2, 3, 4};
//    vector<vector<int>> subsets;
//    getSubsets(a, 3, subsets);
//
//    for ( vector<vector<int>>::const_iterator itr = subsets.begin(); itr != subsets.end(); itr++) {
//        for (vector<int>::const_iterator itr1 = itr->begin(); itr1 != itr->end(); itr1++)
//            cout << *itr1 << " ";
//        cout << endl;
//    }
//
//    return 0;
//}
