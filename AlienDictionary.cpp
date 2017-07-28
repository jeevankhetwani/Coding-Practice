////
//// Created by jeevan on 5/20/17.
////
//#include <iostream>
//using namespace std;
//
//int findMismatchIndex(string& s1, string& s2) {
//
//    int i, n = min(s1.size(), s2.size());
//
//    for(i = 0; i < n; i++)
//        if(s1[i] != s2[i])
//            break;
//
//    if(i == n)
//        return -1;
//
//    return i;
//}
//
//void insert(string& s, char ch1, char ch2) {
//
//    int i = s.find(ch1), j = s.find(ch2);
//
//    if(i != string::npos && j != string::npos)
//        return;
//
//    if(i == string::npos && j == string::npos) {
//        s.push_back(ch1);
//        s.push_back(ch2);
//    }
//    else if (i != string::npos)
//        s.insert(i + 1, 1, ch2);
//    else
//        s.insert(j, 1, ch1);
//}
//
//string printOrder(string dict[], int N, int k)
//{
//    //Your code here
//    string s = "";
//
//    if(N == 0)
//        return s;
//
//    s.push_back(dict[0][0]);
//
//    for(int i = 1; i < N && s.size() < k; i++) {
//
//        int index = findMismatchIndex(dict[i - 1], dict[i]);
//
//        if(index == -1)
//            continue;
//
//        char ch1 = dict[i - 1][index], ch2 = dict[i][index];
//
//        insert(s, ch1, ch2);
//    }
//
//    return s;
//
//}
//
//int main() {
//
//    string s[] = {"caa", "aaa", "aab" };
//    int n = sizeof(s) / sizeof(s[0]);
//
//    cout << sizeof(s) << " " << sizeof(s[0]) << endl;
//
//    cout << printOrder(s, n, 3);
//
//    string s1;
//    cin >> s1;
//
//    cout << s1;
//
//}
