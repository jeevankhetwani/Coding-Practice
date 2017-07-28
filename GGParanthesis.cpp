////
//// Created by jeevan on 4/2/17.
////
//#include <iostream>
//#include <string>
//#include <stack>
//#include <unordered_map>
//
//using namespace std;
//
//bool find(string s) {
//
//    stack<char> st;
//    unordered_map<char, char> mymap = { {'(', ')'},  {'[', ']'},  {'{', '}'}  };
//
//
//    for(int i = 0; i < s.length(); i++) {
//
//        char ch = s[i];
//
//        if(ch == '{' || ch == '[' || ch == '(')
//            st.push(ch);
//        else {
//
//            if(st.empty() || ch != mymap[st.top()] )
//                return false;
//
//            st.pop();
//        }
//    }
//
//    return st.empty();
//}
//
//
//
//int main() {
//
//    cout << find("()(");
//    return 0;
//}