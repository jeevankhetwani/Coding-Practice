////
//// Created by jeevan on 1/6/17.
////
//#include<iostream>
//#include<string>
//#include <vector>
//
//using namespace std;
//
//int bsearch(vector<string>& strings, string key, int low, int high, int offset) {
//    int middle, temp;
//    if (low <= high) {
//        middle = ( low + high ) / 2;
//
//        if (strings[middle] == "") {
//            temp = bsearch(strings, key, low, middle - 1, offset);
//
//            if (temp != -1)
//                return temp;
//            else
//                return bsearch(strings, key, middle + 1, high, offset + middle + 1 - low);
//        } else if ( strings[middle].compare(key) > 0 )
//            return bsearch(strings, key, low, middle - 1, offset);
//        else if ( strings[middle].compare(key) < 0 )
//            return bsearch(strings, key, middle + 1, high, offset + middle + 1 - low);
//        else
//            return offset + middle - low;
//    }
//
//    return -1;
//}
//
//int search(vector<string>& strings, string key) {
//    return bsearch(strings, key, 0, strings.size() - 1, 0);
//}
//
//
//int main() {
//
//    vector<string> strings = {"at", "", "", "", "ball", "", "car", "", "dad", ""};
//    cout << search(strings, "ball");
//
//    return 0;
//
//}
