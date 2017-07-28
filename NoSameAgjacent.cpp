////
//// Created by jeevan on 3/16/17.
////
//#include <iostream>
//#include <string>
//#include <queue>
//
//using namespace std;
//
//const int MAX_CHAR = 26;
//
//struct key {
//    int freq;
//    char ch;
//
//    bool operator< (const key& k) const {
//        return freq < k.freq;
//    }
//
//};
//
//string check(string s) {
//
//    priority_queue<key> pq;
//    int n = s.length();
//
//    int count[MAX_CHAR] = {0};
//
//    for(int i = 0; i < n; i++)
//        count[s[i] - 'a']++;
//
//    for(int i = 0; i < MAX_CHAR; i++)
//        if(count[i])
//            pq.push( key {count[i], 'a' + i} );
//
//    key prev {-1, '#'};
//
//    string result = "";
//
//    while(!pq.empty()) {
//
//        key curr = pq.top();
//        pq.pop();
//
//        result += curr.ch;
//
//        if(prev.freq > 0)
//            pq.push(prev);
//
//        curr.freq--;
//        prev = curr;
//    }
//
//    if(n == result.length())
//        return result;
//
//    return "not valid";
//}
//
//int main() {
//
//    string s;
//    cin >> s;
//
//    cout << check(s);
//    return 0;
//}
