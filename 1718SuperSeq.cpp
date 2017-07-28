////
//// Created by jeevan on 1/19/17.
////
//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include <algorithm>
//
//using namespace std;
//
//class subArray {
//    int start, end;
//
//public:
//    subArray(int i, int j) {
//        start = i;
//        end = j;
//    }
//
//    bool operator <(const subArray& rhs) const
//    {
//        return start < rhs.start;
//    }
//
//    int getStart() { return start; }
//    int getEnd() { return end; }
//
//    int len() {
//        return end - start;
//    }
//};
//
//subArray* find(int low, int high, unordered_map<subArray, subArray*> mymap,
//               const vector<int>& big, const vector<int>& smallSorted) {
//
//    if ( low > high )
//        return nullptr;
//
//    subArray curr(low, high);
//
//    if (mymap.find(curr) == mymap.end()) {
//
//        vector<int> bigSorted(big.begin() + low, big.begin() + high);
//        sort(bigSorted.begin(), bigSorted.end());
//
//        if (!includes(bigSorted.begin(), bigSorted.end(), smallSorted.begin(), smallSorted.end()))
//            mymap[curr] = nullptr;
//
//        subArray *left = find(low, high - 1, mymap, big, smallSorted);
//        subArray *right = find(low + 1, high, mymap, big, smallSorted);
//
//
//        if (left == nullptr && right == nullptr)
//            mymap[curr] = new subArray(low, high);
//        else if (left == nullptr)
//            mymap[curr] = right;
//        else if (right == nullptr)
//            mymap[curr] = left;
//        else
//            mymap[curr] =  left->len() <= right->len() ? left : right;
//    }
//
//    return mymap[curr];
//
//}
//
//subArray* find(const vector<int>& big, const vector<int>& small) {
//    vector<int> smallSorted (small.begin(), big.begin());
//    sort(smallSorted.begin(), smallSorted.end());
//
//    unordered_map<subArray, subArray*> mymap;
//
//    return find(0, big.size() - 1, mymap, big, small);
//}
//
//int main() {
//
//    vector<int> big = {7, 5, 9, 0, 2, 1, 3, 5, 7, 9, 1};
//    vector<int> small = {1, 5, 9};
//
//    subArray* index = find(big, small);
//
//    if (index == nullptr)
//        cout << "not";
//    else
//        cout << index->getStart() << " " << index->getEnd();
//    return 0;
//}
