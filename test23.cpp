////
//// Created by jeevan on 5/24/17.
////
//#include <iostream>
//#include <vector>
//#include<string>
//#include <deque>
//#include <unordered_set>
//#include <unordered_map>
//using namespace std;
//
//class Pair {
//public:
//    string key;
//    string value;
//    Pair(string key , string value){
//        this->key = key;
//        this->value = value;
//    }
//};
//
//
//vector<Pair> solve( const vector<Pair>& lunchMenuPairs, const vector<Pair>& teamCuisinePreferencePairs ){
//
//
//    unordered_set<string> allFood;
//    vector<Pair> pairs;
//    unordered_map<string, vector<string>> mymap;
//
//    for(int i = 0; i < lunchMenuPairs.size(); i++) {
//        mymap[lunchMenuPairs[i].value].push_back(lunchMenuPairs[i].key);
//        allFood.insert(lunchMenuPairs[i].key);
//    }
//
//    for(int i = 0; i < teamCuisinePreferencePairs.size(); i++) {
//        string person = teamCuisinePreferencePairs[i].key;
//        string cuisine = teamCuisinePreferencePairs[i].value;
//
//        if(cuisine == "*") {
//            for(string food: allFood)
//                pairs.push_back(Pair(person, food));
//        } else {
//            for(string food: mymap[cuisine])
//                pairs.push_back(Pair(person, food));
//        }
//    }
//
//
//
//
//    /***
//     ** your code here
//    ***/
//
//    return pairs;
//}
//
//
//bool compare(Pair &a , Pair &b){
//    if(a.key == b.key){
//        return a.value < b.value;
//    }
//    return a.key < b.key;
//}
//void print( vector<Pair> &resultPairs ) {
////    std::sort( resultPairs.begin() , resultPairs.end() , compare);
////    for ( int i = 0 ; i < resultPairs.size(); i++ ) {
////        cout<< resultPairs[i].key << " " << resultPairs[i].value <<"\n";
////    }
//}
//
//int solve(int number){
//
//    /***
//    ** your code here
//    ***/
//
//    deque<int> v;
//
//    while(number) {
//
//        if(number & 1)
//            v.push_front(1);
//        else
//            v.push_front(0);
//
//        number /= 2;
//    }
//
//    int i = 0, j = v.size() - 1;
//
//    while(i < j && v[i++] == v[j--]);
//
//    return i >= j;
//
//}
//
//int main(){
//    //read the input
//    vector<Pair> lunchMenuPairs;
//    vector<Pair> teamCuisinePreferencePairs;
//
////    int lunchMenuPairCount;
////    cin >> lunchMenuPairCount;
////    while(lunchMenuPairCount-- > 0) {
////        string item , itemType;
////        cin >> item;
////        cin >> itemType;
////        lunchMenuPairs.push_back( Pair(item,itemType) );
////    }
////
////    int teamCuisinePreferencePairCount;
////    cin >> teamCuisinePreferencePairCount;
////    while(teamCuisinePreferencePairCount-- > 0) {
////        string teamMember , item;
////        cin >> teamMember;
////        cin >> item;
////        teamCuisinePreferencePairs.push_back( Pair(teamMember,item) );
////    }
////
////    //solve it !
////    vector<Pair> resultArr = solve( lunchMenuPairs , teamCuisinePreferencePairs);
////    print(resultArr);
//
////    unordered_map<string, vector<string>> test;
////
////    for(string s: test["sdd"]) {
////        cout << s;
////    }
//
//    int number = -1;
////    cin >> number;
//
//    //solve it!
//    cout << solve(number);
//    return 0;
//}
//
