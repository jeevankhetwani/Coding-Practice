////
//// Created by jeevan on 1/4/17.
////
//#include <iostream>
//#include <string>
//#include <algorithm>
//#include<unordered_map>
//#include <vector>
//
//using namespace std;
//
//
//void sortAnagram(vector<string>& s) {
//    int i;
//    unordered_map<string, vector<string>> map;
//    string temp;
//
//    for (i = 0; i < s.size(); i++) {
//        temp = s[i];
//
//        sort(temp.begin(), temp.end());
//
//        if ( map.find(temp) == map.end() )
//            map[temp] = vector<string> {s[i]};
//        else
//            map[temp].insert(map[temp].begin(), s[i]);
//    }
//
//    i = 0;
//
//    for (unordered_map<string, vector<string>>::const_iterator itr = map.begin(); itr != map.end(); itr++)
//        for ( vector<string>::const_iterator itr2 = itr->second.begin(); itr2 != itr->second.end(); itr2++ )
//            s[i++] = *itr2;
//
//}
//
//
//int main() {
//    vector<string> s = {"eat", "veej", "dog", "ate", "god", "jeev"};
//    sortAnagram(s);
//
//    for (int i = 0; i < 6; i++)
//        cout << s[i] << " ";
//    return 0;
//
//}
