////
//// Created by jeevan on 1/27/17.
////
//
//#include <unordered_map>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//
//vector<int>* findMissing(vector<int>& a, vector<int>& b) {
//
//    int num = b.size() - a.size();
//    unordered_map<int, int> mymap;
//
//    for (int i = 0; i < b.size(); i++) {
//        if ( mymap.find(b[i]) == mymap.end() )
//            mymap[b[i]] = 1;
//        else
//            mymap[b[i]] += 1;
//    }
//
//    for (int i = 0; i < a.size(); i++)
//            mymap[a[i]] -= 1;
//
//    vector<int> *missing = new vector<int>();
//    missing->reserve(num);
//
//    unordered_map<int, int>::const_iterator itr = mymap.begin();
//
//    while ( itr != mymap.end() ) {
//
//        if ( itr->second > 0 )
//            missing->push_back(itr->first);
//
//        if ( missing->size() == num)
//            break;
//
//        itr++;
//    }
//
//    sort(missing->begin(), missing->end());
//    return missing;
//}
//
//void load(vector<int>& a, int m) {
//
//    int x;
//    a.reserve(m);
//
//    for(int i = 0; i < m; i++) {
//        cin >> x;
//        a.push_back(x);
//    }
//
//}
//
//int main() {
//
//    int m;
//    vector<int> a, b;
//
//    cin >> m;
//    load(a, m);
//
//    cin >> m;
//    load(b, m);
//
//    vector<int>* missing = findMissing(a, b);
//
//    for (int i = 0; i < missing->size(); i++)
//        cout << missing->at(i) << " ";
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
///*
//Numeros, the Artist, had two lists  and , such that  was a permutation of . Numeros was very proud of these lists.
// Unfortunately, while transporting them from one exhibition to another, some numbers were left out of A.
// Can you find the missing numbers?
//
//Notes
//
//If a number occurs multiple times in the lists, you must ensure that the
//frequency of that number in both lists is the same. If that is not the case, then it is also a missing number.
//You have to print all the missing numbers in ascending order.
//Print each missing number once, even if it is missing multiple times.
//The difference between maximum and minimum number in  is less than or equal to .
//Input Format
//
//There will be four lines of input:
//
// - the size of the first list
//This is followed by  space-separated integers that make up the first list.
// - the size of the second list
//This is followed by  space-separated integers that make up the second list.
//
//Constraints
//
//Output Format
//
//Output the missing numbers in ascending order.
//
//Sample Input
//
//10
//203 204 205 206 207 208 203 204 205 206
//13
//203 204 204 205 206 207 205 208 203 206 205 206 204
//Sample Output
//
//204 205 206
//Explanation
//
// is present in both arrays. Its frequency in  is , while its frequency in  is .
// Similarly,  and  occur twice in , but thrice in . So, these three numbers are our output.
// The rest of the numbers have thesame frequency in both lists.
//*/
