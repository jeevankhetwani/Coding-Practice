////
//// Created by jeevan on 5/14/17.
////
//// given a function func("google", "logarithm") -> "loogge"
//// func("banana", "can") -> "aaannb"  what is this function returning and implement it
//
//#include <iostream>
//#include <unordered_map>
//#include <map>
//#include <cstring>
//
//using namespace std;
//
//string arrange(string s1, string s2) {
//
//    string s;
//    s.reserve(s1.size());
//
//    unordered_map<char, int> mymap;
//
//    for(int i = 0; i < s1.size(); i++)
//        mymap[s1[i]]++;
//
//    int k = 0;
//
//    for(int i = 0; i < s2.size(); i++) {
//
//        char ch = s2[i];
//
//        if( mymap.find(ch) != mymap.end() ) {
//            s.insert(k, mymap[ch], ch);
//            k += mymap[ch];
//            mymap[ch] = 0;
//        }
//
//    }
//
//    for(int i = 0; i < s1.size(); i++) {
//
//        char ch = s1[i];
//
//        if(mymap[ch]) {
//            s.insert(k, mymap[ch], ch);
//            k += mymap[ch];
//            mymap[ch] = 0;
//        }
//    }
//
//    return s;
//}
//
//string arrange2(string s1, string s2) {
//// avoid 2nd pass of s1
//
//
//    string s;
//    s.reserve(s1.size());
//
//    unordered_map<char, int> mymap; // to count freq of chars
//    map<int, char> mymap2; // to store first index of chars
//
//    for(int i = 0; i < s1.size(); i++) {
//
//        char ch = s1[i];
//
//        if(mymap.find(ch) == mymap.end())
//            mymap2[i] = ch;
//
//        mymap[s1[i]]++;
//
//    }
//
//    int k = 0;
//
//    for(int i = 0; i < s2.size(); i++) {
//
//        char ch = s2[i];
//
//        if( mymap.find(ch) != mymap.end() ) {
//            s.insert(k, mymap[ch], ch);
//            k += mymap[ch];
//            mymap[ch] = 0;
//        }
//    }
//
//    for(auto it = mymap2.begin(); it != mymap2.end(); it++) {
//
//        char ch = (*it).second;
//
//        if(mymap[ch]) {
//            s.insert(k, mymap[ch], ch);
//            k += mymap[ch];
//            mymap[ch] = 0;
//        }
//    }
//    return s;
//}
//
//void removeSpaces(char *s) {
//
//    int n = strlen(s), k = -1;
//
//
//    for(int i = 0; i < n; i++)
//        if( s[i] == ' ' && ( k == -1 || s[k] == ' ') )
//            continue;
//        else if( ( s[i] == '.' || s[i] == ','  || s[i] == '?') && s[k] == ' ')
//            s[k] = s[i];
//        else
//            s[++k] = s[i];
//
//    while(k < n)
//        s[++k] = ' ';
//
//}
//
//int main() {
//
////    string s1 = "bananak";
////    string s2 = "can";
////    cout << arrange2(s1, s2);
//
//    char *s = strdup("   Hello Geeks . Welcome  ,   to  GeeksforGeeks   . Any doubts ?      ");
//    removeSpaces(s);
//    printf("%s", s);
//    return 0;
//}