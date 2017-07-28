////
//// Created by jeevan on 5/21/17.
////
//#include <iostream>
//using namespace std;
//
//const int CHARS = 256;
//
//string findLen(string& s1, string& s2) {
//
//    int n1 = s1.size(), n2 = s2.size(), count = 0;
//
//    if(n1 < n2)
//        return "-1";
//
//    int s1Freq[CHARS] = {0}, s2Freq[CHARS] = {0};
//
//    for(int i = 0; i < n2; i++)
//        s2Freq[s2[i]]++;
//
//    char ch1, ch2;
//
//    int minLen = n1, minStart = -1, start = 0;
//
//    for(int i = 0; i < n1; i++) {
//
//        ch1 = s1[i];
//
//        s1Freq[ch1]++;
//
//        if(s1Freq[ch1] <= s2Freq[ch1])
//            count++;
//
//        if(count == n2) {
//
//            while( ch2 = s1[start]  ) {
//
//                if(s1Freq[ch2] == s2Freq[ch2])
//                    break;
//
//                s1Freq[ch2]--;
//                start++;
//            }
//
//            if(i - start + 1 < minLen) {
//                minLen = i - start + 1;
//                minStart = start;
//            }
//        }
//    }
//
//    if(minStart == -1)
//        return "-1";
//
//    return s1.substr(minStart, minLen);
//
//}
//
//void test() {
//    string s1, s2;
//    cin >> s1 >> s2;
//
//    cout << findLen(s1, s2) << endl;
//}
//
//
//int main() {
//
////    string str("this is a test string");
////    string pat("tist");
////
////    cout << "Smallest window is :  \n"
////         << findLen(str, pat);
//
////    int i = 0;
////    char ch;
////    while(ch = str[i] && ch != 0) {
////        cout << ch;
////        i++;
////    }
//
//    int t;
//    cin >> t;
//
//    while(t--)
//        test();
//
//    return 0;
//}
