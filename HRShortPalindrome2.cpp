////
//// Created by jeevan on 1/28/17.
////
//#include <iostream>
//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//
//typedef unsigned long ul;
//
//using namespace std;
//
////void createMap(unordered_map<char, vector<ul>*>& mymap, string s) {
////
////    for (ul i = 0; i < s.length(); i++) {
////
////        if ( mymap.find(s[i]) == mymap.end() )
////            mymap[s[i]] = new vector<ul> {i};
////        else
////            mymap[s[i]]->push_back(i);
////
////    }
////}
////
////ul findCount(vector<ul>* v1, ul start1, vector<ul>* v2, ul start2) {
////
////    ul n = 0;
////    vector<ul>::iterator itr = v2->begin();
////    vector<ul>::iterator itr1 = upper_bound(v1->begin(), v1->end(), start1);
////
////    while( itr1 != v1->end()) {
////
////        itr = upper_bound(itr, v2->end(), *itr1);
////
////        if (itr == v2->end())
////            break;
////
////        n += v2->end() - itr;
////
////        itr1++;
////    }
////
////    return n;
////}
//
////ul find(string& s) {
////
////    ul num = 0;
////    unordered_map<char, vector<ul>*> mymap;
////
////    if (s.size() < 3)
////        return 0;
////
////    createMap(mymap, s);
////
////    for (ul i = 0; i < s.size() - 3; i++) {
////        cout << i << endl;
////        for (ul j = i + 1; j < s.size() - 2; j++)
////            num += findCount(mymap[s[j]], j, mymap[s[i]], j);
////    }
////
////        return num % (ul)( pow(10.0 , 9.0) + 7 );
////
////}
//
//ul find(string& s) {
//
//        ul result = 0;
//        ul seenfirst[30] = {0}, seenboth[30][30] = {0}, seenthree[30][30] = {0};
//
//        for(char cc: s) {
//            int c = cc - 'a';
//
//            for(int x=0; x<26; x++)
//                result += seenthree[c][x];
//            for(int x=0; x<26; x++)
//                seenthree[x][c] += seenboth[x][c];
//            for(int x=0; x<26; x++)
//                seenboth[x][c] += seenfirst[x];
//            seenfirst[c] += 1;
//        }
//
//        return result;
//    }
//
//
//int main() {
//
//    string s = "";
////    cout << find(s);
//    printf("%ul", find(s));
//    return 0;
//
//}
