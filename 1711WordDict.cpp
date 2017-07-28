////
//// Created by jeevan on 1/17/17.
////
//#include<iostream>
//#include<fstream>
//#include<unordered_map>
//#include<vector>
//
//using namespace std;
//
//void buildDictionary(string filename, unordered_map<string, vector<int>>& dict) {
//
//    int i = 0;
//    string curr;
//    ifstream myfile (filename);
//
//    if ( myfile.is_open() ) {
//
//        while ( myfile >> curr ) {
//
//            if ( dict.find(curr) == dict.end() )
//                dict[curr] = vector<int> {i};
//            else
//                dict[curr].push_back(i);
//
//            i++;
//        }
//    }
//
//    myfile.close();
//}
//
//int findMin(vector<int>& a, vector<int>& b) {
////    both must be sorted
//
//    int i = 0, j = 0;
//    int diff, min = INT16_MAX;
//
//    while (i < a.size() && j < b.size() ) {
//
//        diff = abs( a[i] - b[j] );
//
//        if (  diff < min )
//            min = diff ;
//
//        if ( a[i] < b[i] )
//            i++;
//        else
//            j++;
//    }
//
//    return min;
//}
//
//int find(unordered_map<string, vector<int>> dict, string a, string b) {
//
//    if ( dict.find(a) == dict.end() || dict.find(b) == dict.end() )
//        return -1;
//
//    return findMin(dict[a], dict[b]);
//}
//
//
//int find(string filename, string a, string b) {
//
//    unordered_map<string, vector<int>> dict;
//    buildDictionary(filename, dict);
//
//    if (dict.empty())
//        return -1;
//
//    return find(dict, a, b);
//}
//
//int main() {
//
//    cout << find("temp.txt", "I", "");
//    return 0;
//}
//
