////
//// Created by jeevan on 12/18/16.
////
//#include<iostream>
//#include<string>
//using namespace std;
//
//string compress(string s) {
//    string s1 = "";
//    char prev = s.at(0), curr;
//    int count = 1;
//
//    for (int i = 1; i < s.length(); i++) {
//           curr = s.at(i);
//           if (curr == prev)
//               count++;
//        else {
//               s1 += prev + to_string(count);
//               prev = curr;
//               count = 1;
//           }
//    }
//    s1 += prev  + to_string(count);
//
//    if ( s1.length() >= s.length())
//        return s;
//
//    return s1;
//}
//
//int main() {
//    string s = "aabccaa";
//    cout<<compress(s);
//    return 0;
//}
