////
//// Created by jeevan on 3/10/17.
////
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int findCount(string pattern, char key) {
//    int count = 0;
//    for(char ch: pattern)
//        if(ch == key)
//            count++;
//
//    return count;
//}
//
//bool matchString(string value, int offset1, int offset2, int size) {
//
//    for(int i = 0; i < size; i++)
//        if(value[i + offset1] != value[i + offset2])
//            return false;
//    return true;
//}
//
//bool matchPattern(string value, string pattern, int mainSize, int altSize, int altIndex) {
//
//    int matchIndex = mainSize;
//
//    for(int i = 1; i < pattern.size(); i++) {
//        int size = pattern[i] == pattern[0] ? mainSize : altSize;
//        int offset = pattern[i] == pattern[0] ? 0 : altIndex;
//
//        if(!matchString(value, offset, matchIndex, size))
//            return false;
//
//        matchIndex += size;
//
//    }
//
//    return true;
//}
//
//bool check(string value, string pattern) {
//
//    if(pattern.size() == 0)
//        return value.size() == 0;
//
//    char main = pattern[0];
//    char alt = main == 'a' ? 'b' : 'a';
//
//    int mainCount = findCount(pattern, main);
//    int altCount = findCount(pattern, alt);
//    int firstAlt = pattern.find(alt);
//    int n = value.size();
//
//    int mainMaxSize = ( n -  altCount ) / mainCount;
//
//    for(int mainSize = 1; mainSize <= mainMaxSize; mainSize++) {
//        int remSize = n - mainSize * mainCount;
//
//        if( altCount == 0 && remSize != 0)
//            continue;
//
//        if ( altCount != 0 && remSize % altCount != 0)
//            continue;
//
//        int altIndex = firstAlt * mainSize;
//        int altSize = altCount == 0 ? 0 : remSize / altCount;
//
//        if(matchPattern(value, pattern, mainSize, altSize, altIndex))
//            return true;
//
//    }
//
//    return false;
//}
//
//
//int main() {
//
//
//    string value = "catgocatgo";
//    string pattern = "b";
//
//    cout << boolalpha;
//    cout << check(value, pattern);
//    return 0;
//}
