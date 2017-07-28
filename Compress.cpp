////
//// Created by jeevan on 2/2/17.
////
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//char* compress(char *input) {
//
//    char prev = input[0], curr;
//    string result = "";
//    int count = 1, i = 1;
//
//    while ( input[i] != '\0') {
//
//        curr = input[i];
//
//        if (curr != prev) {
//            result += count;
//            result += prev;
//            count = 1;
//            prev = curr;
//        }
//
//        count++;
//        i++;
//    }
//
//    return &result;
//}
//
//int main() {
//
//    char *input = "AABBBBBCCA";
//    cout << compress(input);
//    return 0;
//
//}
