////
//// Created by jeevan on 5/10/17.
////
//#include <iostream>
//#include <unordered_map>
//#include <vector>
//using namespace std;
//
//int get(string emp, unordered_map<string, int>& freqMap, unordered_map<string, vector<string>>& managerMap) {
//
////    if(freqMap.find(emp) == freqMap.end()) {
//
//    if( managerMap.find(emp) == managerMap.end() )
//        freqMap[emp] = 0;
//    else {
//
//        int count = managerMap[emp].size();
//        for(auto manager: managerMap[emp])
//            count += get(manager, freqMap, managerMap);
//        freqMap[emp] = count;
//    }
////    }
//    return freqMap[emp];
//}
//
//void find(vector<pair<string, string>>& list) {
//
//    unordered_map<string, int> freqMap;
//    unordered_map<string, vector<string>> managerMap;
//
//    for(auto p: list)
//        if(p.first != p.second)
//            managerMap[p.second].push_back(p.first);
//
//    for(auto p: list)
//        if(freqMap.find(p.first) == freqMap.end())
//            get(p.first, freqMap, managerMap);
//
//    for(auto it: freqMap)
//        cout << it.first << " " << it.second << endl;
//
//}
//
//int main() {
//
//    vector<pair<string, string>> list = { {"A", "C"}, {"B", "C"}, {"C", "F"}, {"D", "E"},
//                                          {"E", "F"}, {"F", "F"}};
//
//    find(list);
//    return 0;
//}
