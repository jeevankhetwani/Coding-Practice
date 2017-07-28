////
//// Created by jeevan on 3/29/17.
////
//#include <iostream>
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//
//using namespace std;
//
//int value(char r)
//{
//    if (r == 'I')
//        return 1;
//    if (r == 'V')
//        return 5;
//    if (r == 'X')
//        return 10;
//    if (r == 'L')
//        return 50;
//    if (r == 'C')
//        return 100;
//    if (r == 'D')
//        return 500;
//    if (r == 'M')
//        return 1000;
//
//    return -1;
//}
//
//int convert(string str) {
//
//    int res = 0;
//
//    // Traverse given input
//    for (int i=0; i<str.length(); i++)
//    {
//        // Getting value of symbol s[i]
//        int s1 = value(str[i]);
//
//        if (i+1 < str.length())
//        {
//            // Getting value of symbol s[i+1]
//            int s2 = value(str[i+1]);
//
//            // Comparing both values
//            if (s1 >= s2)
//            {
//                // Value of current symbol is greater
//                // or equal to the next symbol
//                res = res + s1;
//            }
//            else
//            {
//                res -= s1;
////                res = res + s2 - s1;
////                i++; // Value of current symbol is
//                // less than the next symbol
//            }
//        }
//        else
//        {
//            res = res + s1;
//        }
//    }
//    return res;
//
//}
//
//void convertToRoman(int n)
//{
////Your code here
//    string prefix = "", curr;
//
//    while(n != 0) {
//
//        if(n >= 1000) {
//            n -= 1000;
//            curr = "M";
//        }
//        else if(n >= 900) {
//            curr = "CM";
//            n -= 900;
//        }
//        else if(n >= 500) {
//            curr = "D";
//            n -= 500;
//        }
//        else if(n >= 400) {
//            curr = "CD";
//            n -= 400;
//        }
//        else if(n >= 100) {
//            curr = "C";
//            n -= 100;
//        }
//        else if(n >= 90) {
//            curr = "XC";
//            n -= 90;
//        }
//        else if(n >= 50) {
//            curr = "L";
//            n -= 50;
//        }
//        else if(n >= 40) {
//            curr = "XL";
//            n -= 40;
//        }
//        else if(n >= 10) {
//            curr = "X";
//            n -= 10;
//        }
//        else if(n == 9) {
//            curr = "IX";
//            n -= 9;
//        }
//        else if(n >= 5) {
//            curr = "V";
//            n -= 5;
//        }
//        else if(n == 4) {
//            curr = "IV";
//            n -= 4;
//        }
//        else if(n == 3) {
//            curr = "III";
//            n -= 3;
//        }
//        else if(n == 2) {
//            curr = "II";
//            n -= 2;
//        }
//        else if(n == 1) {
//            curr = "I";
//            n -= 1;
//        }
//        else
//            break;
//
//        prefix += curr;
//    }
//
//    cout << prefix;
//}
//
//void test() {
//
//    string s;
//    cin >> s;
//
//    cout << convert(s) << endl;
//}
//
//
//int main() {
//
//
//    int t;
//    cin >> t;
//
//    rep(i, t)
//        test();
//
//    return 0;
//}
