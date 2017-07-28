////
//// Created by jeevan on 5/14/17.
////
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//int count = 0;
//
//string* findLen(int n, unordered_map<char, string>& mymap) {
//
//    string *s = new string();
//
//    while(n) {
//        char ch = n % 10 + '0';
//
//        if(mymap.find(ch) != mymap.end())
//            s->insert(0, 1, ch);
//
//        n /= 10;
//    }
//
//    return s;
//}
//
//void generateHelp(string& s, int index, unordered_map<char, string>& mymap, vector<string>& words) {
//
//    if(index == s.size()) {
//        words.push_back(s);
//        return;
//    }
//
//    char num = s[index];
//
//    for(char ch: mymap[num]) {
//        s[index] = ch;
//        generateHelp(s, index + 1, mymap, words);
//    }
//
//    s[index] = num;
//}
//
//
//void generate(int n) {
//
//    unordered_map<char, string> mymap { {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"},
//                                        {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"} };
//
//    string* s = findLen(n, mymap);
//
//
//    generateHelp(s, 0, mymap);
//
//    cout << count;
//}
//
//vector<string> letterCombinations(string digits) {
//
//    vector<string> words;
//    unordered_map<char, string> mymap { {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"},
//                                        {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"} };
//
//    if(!digits.empty())
//        generateHelp(digits, 0, mymap, words);
//
//    return words;
//}
//
//
//
//int main() {
//
//    generate(46217);
//
//    return 0;
//}
