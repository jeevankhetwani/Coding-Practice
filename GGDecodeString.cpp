////
//// Created by jeevan on 3/28/17.
////
////
//// Created by jeevan on 3/24/17.
////
//#include <iostream>
//#include <stack>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//string repString(string s, int count) {
//    string str = "";
//
//    rep(i, count)
//        str += s;
//
//    return str;
//}
//
//string check(const string &s)  {
//
//    int num = 0;
//    string prefix = "";
//    stack<string> strings;
//    stack<int> count;
//
//    rep(i, s.length()) {
//
//        if (isalpha(s[i]))
//            prefix += s[i];
//
//        else if (isdigit(s[i]))
//            num = num * 10 + (s[i] - '0');
//
//        else {
//
//            if (prefix != "")
//                strings.push(prefix);
//
//
//            if (s[i] == '[') {
//                count.push(num);
//                strings.push("[");
//            } else {
//
//                int repCount = count.top();
//                count.pop();
//                string str = "";
//
//                while (strings.top() != "[") {
//                    str = strings.top() + str;
//                    strings.pop();
//                }
//                strings.pop();
//
//                str = repString(str, repCount);
//                strings.push(str);
//            }
//
//            prefix = "";
//            num = 0;
//        }
//    }
//
//    return strings.top();
//}
//
//void test() {
//
//    string s;
//    cin >> s;
//    cout << check(s) << endl;
//
//}
//
//int main() {
//
//    int t;
//    cin >> t;
//
//    rep(i, t)
//        test();
//
//    return 0;
//}
