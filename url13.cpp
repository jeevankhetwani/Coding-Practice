//
// Created by jeevan on 12/17/16.
//
#include<iostream>
#include<algorithm>
using namespace std;

string rep(string s,int n) {
    int spaces = 0;

    for (int i = 0; i < n; i++)
        if (s.at(i)==' ')
            spaces++;

    int d = 2, k = d * spaces, j = n + k - 1;

    for (int i = n - 1; i >= 0 ; i--) {
        if ( s.at ( i ) == ' ' ) {
            s[j--] = '0';
            s[j--] = '2';
            s[j--] = '%';
            spaces--;
            if (spaces == 0)
                break;
        }
        else
            s[j--] = s.at(i);
    }

    return s;
}

//int main() {
//    string s1 = "mr john smith khet       ";
//    cout << rep(s1, 18);
//    return 1;
//}
