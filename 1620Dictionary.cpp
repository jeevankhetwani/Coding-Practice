////
//// Created by jeevan on 1/11/17.
////
//#include<iostream>
//#include<unordered_map>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//unordered_map<char, char> createLetterToDigitMap(unordered_map<char, string>& digitToLetter) {
//    unordered_map<char, char> reverse;
//    unordered_map<char, string>::const_iterator itr = digitToLetter.begin();
//
//    while(itr != digitToLetter.end()) {
//        char digit = itr->first;
//        string letters = itr->second;
//
//        for (int i = 0; i < letters.size(); i++)
//            reverse[letters[i]] = digit;
//
//        itr++;
//    }
//
//    return reverse;
//
//}
//
//string wordToNumber(string word, unordered_map<char, char>& map) {
//    string num ;
//
//    for (int i = 0; i < word.size(); i++)
//        num += map[word[i]];
//
//    return num;
//}
//
//unordered_map<string, vector<string>> createDictionary(vector<string> words, unordered_map<char, char> letterToDigit) {
//    unordered_map<string, vector<string>> map;
//
//    for (int i = 0; i < words.size(); i++) {
//        string num = wordToNumber(words[i], letterToDigit);
//        if ( map.find(num) == map.end() )
//            map[num] = vector<string> ( {words[i]} );
//        else
//            map[num].push_back(words[i]);
//    }
//
//    return map;
//}
//
//vector<string> find(string num, vector<string> words) {
//    if ( num.empty() )
//        return vector<string> ();
//
//    unordered_map<char, string> mapping ( {
//                                                  {'2', "abc"}, {'3', "def"},
//                                                  {'4', "ghi"}, {'5', "jkl"},
//                                                  {'6', "mno"}, {'7', "pqrs"},
//                                                  {'8', "tuv"}, {'9',  "wxyz"}
//
//                                          });
//
//    unordered_map<char, char> letterToDigit = createLetterToDigitMap(mapping);
//    unordered_map<string, vector<string>> dictionary = createDictionary(words, letterToDigit);
//
//    return dictionary[num];
//}
//
//
//int main() {
//
//
//    vector<string> words = {"tree", "used", "anu", "bot"};
//    vector<string> matched = find("268", words);
//
//    for (int i = 0; i < matched.size(); i++)
//        cout << matched[i] << " ";
//
//    return 0;
//}
