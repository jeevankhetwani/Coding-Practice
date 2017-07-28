////
//// Created by jeevan on 4/8/17.
////
//#include <iostream>
//#include <unordered_map>
//
//using namespace std;
//
//int find(string s, int k) {
//
//    unordered_map<char, int> mymap;
//    int start = 0, maxLen = 0, currLen;
//
//    for(int i = 0; i < s.length(); i++) {
//
//        char curr = s[i];
//
//        if(mymap.find(curr) != mymap.end())
//            mymap[curr]++;
//
//        else {
//
//            if(mymap.size() == k) {
//                currLen = i - start;
//                maxLen = max(maxLen, currLen);
//
//                while(true) {
//
//                    char tmp = s[start];
//                    start++;
//
//                    mymap[tmp]--;
//
//                    if(mymap[tmp] == 0) {
//                        mymap.erase(tmp);
//                        break;
//                    }
//
//                }
//            }
//
//            mymap[curr] = 1;
//
//        }
//
//    }
//
//    if(mymap.size() == k) {
//        currLen = s.length() - start;
//        maxLen = max(maxLen, currLen);
//    }
//    return maxLen;
//}
//
//
//int main() {
//
//    cout << find("aaabbb", 3);
//    return 0;
//}
