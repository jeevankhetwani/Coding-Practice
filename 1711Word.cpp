////
//// Created by jeevan on 1/17/17.
////
//#include<iostream>
//#include<string>
//#include<fstream>
//
//using namespace std;
//
//int find(string filename, string a, string b) {
//
//    int start, min = INT16_MAX;
//    int i = 0, diff;
//    string curr, lookingfor;
//
//    ifstream myfile (filename);
//
//    if (myfile.is_open())
//        while ( myfile >> curr ) {
//
//            if (curr == a || curr == b) {
//
//                if (lookingfor == curr) {
//                    diff = i - start - 1;
//
//                    if ( diff < min)
//                        min = diff;
//                } else {
//                    lookingfor = curr == a ? b : a;
//                    start = i;
//                }
//
//            }
//
//            i++;
//        }
//
//    if( min != INT16_MAX )
//        return min;
//
//    return -1;
//}
//
//int main() {
//
//    string line;
//    cout << find("temp.txt" ,"lov", "a");
//    return 0;
//}
//
