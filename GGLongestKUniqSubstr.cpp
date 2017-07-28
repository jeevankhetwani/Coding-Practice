////
//// Created by jeevan on 3/23/17.
////
//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//
//int find(string s, int k) {
//
//    int currSize, maxSize = -1, start = 0, count = 0;
//    unordered_map<char, int> mymap;
//
//    for(int i = 0; i < s.length(); i++) {
//
//        char ch = s[i];
//
//        if(mymap.find(ch) == mymap.end()) {
//            mymap[ch] = 1;
//            count++;
//        } else
//            mymap[ch]++;
//
//
//        if(count > k) {
//
//            currSize = i - start;
//            maxSize = max( maxSize, currSize );
//
//            while(start < i) {
//                char ch1 = s[start];
//
//                mymap[ch1]--;
//
//                start++;
//
//                if(mymap[ch1] == 0) {
//                    count--;
//                    break;
//                }
//            }
//        }
//    }
//
//    if(count == k) {
//        currSize = s.length() - start;
//        maxSize = max( maxSize, currSize );
//    }
//
//
//    return maxSize;
//}
//
//
//int find2(string s, int k) {
//
//    int count[128] = {0}, uniqChars = 0, start = 0, n = s.size();
//
//    for(int i = 0; i < n; i++) {
//
//        if(count[s[i]] == 0)
//            uniqChars++;
//
//        count[s[i]]++;
//
//        if(uniqChars > k && --count[s[start++]] == 0)
//            uniqChars--;
//
//    }
//
//    if(uniqChars < k)
//        return -1;
//
//    return n - start;
//
//}
//
//
//int main() {
//    int k, t;
//    string s;
//
//    cin >> t;
//
//    while(t--) {
//        cin >> s >> k;
//        cout << find2(s, k) << endl;
//    }
//
//    return 0;
//}
