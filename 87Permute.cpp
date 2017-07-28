////
//// Created by jeevan on 1/1/17.
////
//#include <iostream>
//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <map>
//
//using namespace std;
//
//vector<string> permute(string s, int n) {
//    vector<string> subsets;
//
//    if ( n < 0 )
//        subsets.push_back({""});
//    else {
//        char ch = s[n];
//        vector<string> prev = permute(s, n-1);
//
//        for (vector<string>::const_iterator itr = prev.begin(); itr != prev.end(); itr++) {
//            for(int i = 0; i <= itr->size(); i++) {
//                string temp = *itr;
//                temp.insert(i, 1, ch);
//                subsets.push_back(temp);
//            }
//        }
//    }
//
//    return subsets;
//}
//
//
//vector<string> permute(string s) {
//    if (s == nullptr)
//        return nullptr;
//
//    return permute(s, s.length()-1);
//}
//
//unordered_map<char, int> buildFreq(string s) {
//    unordered_map<char, int> map;
//    for (int i = 0; i < s.size(); i++) {
//        char ch = s[i];
//
//        if ( map.find(ch) == map.end() )
//            map[ch] = 1;
//        else
//            map[ch] += 1;
//    }
//    return map;
//}
//
//void permute(unordered_map<char, int>& map, string prefix, int rem, vector<string>* subsets) {
//
//    if (rem == 0) {
//        subsets->push_back(prefix);
//        return;
//    }
//
//    for (unordered_map<char, int>::iterator itr = map.begin(); itr != map.end(); itr++) {
//        if (itr->second > 0) {
//            itr->second--;
//            permute(map, prefix + string(1, itr->first), rem - 1, subsets);
//            itr->second++;
//        }
//    }
//
//}
//
//
//vector<string> permute1(string s) {
//    if (s.length() == 0)
//        return vector<string> ();
//
//    vector<string> subsets;
//    map<char, int> map = buildFreq(s);
//    permute(map, "", s.size(), &subsets);
//    return subsets;
//}
//
//
//int main() {
//
//    vector<string> subsets = permute1("acb");
//
//    for (vector<string>::const_iterator itr = subsets.begin(); itr != subsets.end(); itr++)
//        cout << *itr << " ";
//    cout << endl;
//    cout << subsets.size();
//
//    return 0;
//}
