////
//// Created by jeevan on 1/9/17.
////
//#include<iostream>
//#include <vector>
//#include<algorithm>
//
//
//using namespace std;
//
//vector<int> born, die;
//
//
//
//void addPerson(pair<int, int> years) {
//    born.push_back(years.first);
//    die.push_back(years.second);
//}
//
//pair<int, int> find() {
//    sort(born.begin(), born.end());
//    sort(die.begin(), die.end());
//
//    int i = 0, j = 0, maxVal = 0, maxYear = 0,curr = 0;
//
//    while ( i < born.size() ) {
//        if ( born[i] <= die[j] ) {
//            curr++;
//
//            if (curr > maxVal) {
//                maxVal = curr;
//                maxYear = born[i];
//            }
//            i++;
//        } else {
//            curr--;
//            j++;
//        }
//    }
//
//    return pair<int, int> (maxVal, maxYear);
//}
//
//int  main() {
//
//    addPerson(pair<int, int> (1901, 1902));
//    addPerson(pair<int, int> (1905, 1906));
//    addPerson(pair<int, int> (1905, 1908));
//    addPerson(pair<int, int> (1904, 1906));
//    addPerson(pair<int, int> (1909, 1915));
//    addPerson(pair<int, int> (1907, 1908));
//    addPerson(pair<int, int> (1909, 1912));
//
//    pair<int, int> t = find();
//    cout << t.first << " " << t.second[[]];
//    return 0;
//}
