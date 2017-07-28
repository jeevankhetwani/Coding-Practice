////
//// Created by jeevan on 1/2/17.
////
//#include<iostream>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//
//void permute(unordered_map<char, int> map, string prefix, int rem, vector<string>* perms) {
//
//    if ( map[')'] < map['('] )
//        return;
//
//    if(rem == 0) {
//        perms->push_back(prefix);
//        return;
//    }
//
//    if (map['('] > 0) {
//        map['('] -= 1;
//        permute(map, prefix + string(1, '('), rem - 1, perms);
//        map['('] += 1;
//    }
//
//    if ( map[')'] > 0) {
//        map[')'] -= 1;
//        permute(map, prefix + string(1, ')'), rem - 1, perms);
////        map[')'] += 1;
//    }
//}
//
//
//
//vector<string> permute(int n) {
//    vector<string> perms;
//    if (n == 0)
//        return perms;
//
//    unordered_map<char, int> map;
//    map['('] = map[')'] = n;
//
//    permute(map, "", 2 * n, &perms);
//}
//
//
//
//int main() {
//
//    vector<string> perms = permute(5);
//
//    for(vector<string>::const_iterator itr = perms.begin(); itr != perms.end(); itr++)
//        cout << *itr << " ";
//    cout << endl << perms.size();
//    return 0;
//}
