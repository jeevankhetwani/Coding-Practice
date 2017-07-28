////
//// Created by jeevan on 1/8/17.
////
//#include<iostream>
//
//using namespace std;
//
//string units[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
//string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
//string tensOne[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Forteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
//string place[] = {"", "", "Hundred", "Thousand, ", ""};
//
//string convert(int n) {
//
//    int i = 0, d1, d2;
//    string s ;
//
//
//    while( n > 0 ) {
//
//        d1 = n % 10;
//
//        if (i == 0 || i == 3) {
//
//            n /= 10;
//
//            d2 = n % 10;
//
//            if (d2 == 1) {
//                s = tensOne[d1] + " " +  place[i] + s;
//            } else
//                s = tens[d2] + " " + units[d1]  + " " + place[i] + s;
//
//            i++;
//
//        }
//        else
//            s = units[d1] + " " + place[i] + " " + s;
//
//        n /= 10;
//        i++;
//    }
//    return s;
//}
//
//
//int main() {
//
//    cout << convert(15148);
//    return 0;
//
//}
