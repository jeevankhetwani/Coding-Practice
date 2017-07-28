////
//// Created by jeevan on 5/13/17.
////
//#include <iostream>
//#include <unordered_map>
//#include <map>
//using namespace std;
//
//void printHelper(char *str, int i, int k, map<char, char>& mymap) {
//
//    int j = k - i - 1;
//
//    if(i > j) {
//        printf("%s ", str);
//        return;
//    }
//
//    if(i == j) {
//        for(auto it = mymap.begin(); it != mymap.end(); it++) {
//
//            char ch1 = (*it).first, ch2 = (*it).second;
//
//            if(ch1 == ch2) {
//                str[i] = ch1;
//                printf("%s ", str);
//            }
//        }
//        return;
//    }
//
//    for(auto it = mymap.begin(); it != mymap.end(); it++) {
//
//        char ch1 = (*it).first, ch2 = (*it).second;
//
//        str[i] = ch1;
//        str[j] = ch2;
//        printHelper(str, i + 1, k, mymap);
//    }
//}
//
//void printAll(int k) {
//
//    char str[k];
//    map<char, char> mymap { {'0', '0'}, {'1', '1'}, {'2', '2'}, {'5', '5'},
//                                      {'6', '9'}, {'8', '8'}, {'9', '6'} };
//
//
//
//    printHelper(str, 0, k, mymap);
//}
//
//
//bool check(string s) {
//    unordered_map<char, char> mymap { {'0', '0'}, {'1', '1'}, {'2', '2'}, {'5', '5'},
//                                      {'6', '9'}, {'8', '8'}, {'9', '6'} };
//
//    int i = 0, j = s.size() - 1;
//
//    while( i <= j ) {
//        char ch = s[i];
//
//        if(mymap.find(ch) == mymap.end() || mymap[ch] != s[j])
//            return false;
//
//        i++; j--;
//    }
//
//    return true;
//
//}
//
//int main() {
//
////    cout << check("190801");
//
//    printAll(3);
//    return 0;
//}
