////
//// Created by jeevan on 1/10/17.
////
//#include<iostream>
//#include<set>
//#include<string>
//#include<unordered_map>
//
//using namespace std;
//
//void find(string keys, unordered_map<char, string>& mapping, set<string>& words, int index = 0, string prefix = "") {
//
//    if (index == keys.size()) {
//
//        if (words.find(prefix) != words.end())
//            cout << prefix << " ";
//
//        return;
//
//    }
//
//    string s = mapping[keys[index]];
//
//    for (int i = 0; i < s.size(); i++)
//        find(keys, mapping, words, index + 1, string(prefix + s[i]));
//
//}
//
//int main() {
//
//
//    unordered_map<char, string> mapping ( {
//                                                  {'2', "abc"}, {'3', "def"},
//                                                  {'4', "ghi"}, {'5', "jkl"},
//                                                  {'6', "mno"}, {'7', "pqrs"},
//                                                  {'8', "tuv"}, {'9', "wxyz"}
//
//                                          });
//
//    set<string> words = {"tree", "used", "anu"};
//    find("268", mapping, words);
//    return 0;
//
//}
