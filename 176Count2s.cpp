////
//// Created by jeevan on 1/15/17.
////
//#include<iostream>
//
//using namespace std;
//
//int count(int n) {
//
//    int d = 1, count = 0, temp = n;
//
//     while ( temp > 0 ) {
//        int digit  = temp % 10;
//
////          because of 20, 200, ..
//         if ( digit > 2 )
//             count += d;
//         else if (digit == 2)
//             count += n % d + 1;
//
////         because of 12, 22, ..
//         count += digit * ( d / 10 );
//
//         temp /= 10;
//         d *= 10;
//     }
//    return count;
//
//}
//
//int main() {
//    cout << count(255);
//    return 0;
//}
