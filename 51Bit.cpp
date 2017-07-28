////
//// Created by jeevan on 12/30/16.
////
//#include<iostream>
//#include<bitset>
//#include <climits>
//
//using namespace std;
//
//int maxSeq(int x) {
//    int prevL = 0, currL = 0, maxL = 0;
//
//    for (int i = 0; i < sizeof(int) * CHAR_BIT; i++) {
//
//        if ( (x & 1) == 0) {
//
//            if (currL + prevL > maxL)
//                maxL = currL + prevL;
//
//            prevL = currL;
//            currL = 0;
//        } else
//            currL++;
//
//        x >>= 1;
//    }
//    return maxL;
//}
//
//int nextBig(int x) {
//
//    int prev = 0, curr, numOne = 0, numZero = 0;
//    int i = 0;
//    while( i  < sizeof(int) * CHAR_BIT ) {
//
//        curr =  x & ( 1 << i ) ;
//        if( curr == 0 && prev != 0) {
//            x |= (1 << i);
//
//            if (numOne != 0 && numZero != 0) {
//                x &= (-1 << i);
//                x |= ( (1 << numOne-1) - 1 );
//                return x;
//            }
//
//        } else if ( curr != 0 )
//            numOne++;
//        else if (curr == 0)
//            numZero++;
//
//        prev = curr;
//        i++;
//    }
//}
//
//int nextSmall(int x) {
//
//    int prev = 1, curr, numOne = 0;
//    int i = 0;
//    while( i  < sizeof(int) * CHAR_BIT ) {
//
//        curr =  x & ( 1 << i ) ;
//        if( curr != 0 && prev == 0) {
//            x &= ~(1 << i);
//
//            x &= (-1 << i);
//            x |=  ~( ( -1 << i ) | ( (1 << i - numOne - 1) - 1 ) );
//            return x;
//
//        } else if ( curr != 0 )
//            numOne++;
//
//        prev = curr;
//        i++;
//    }
//
//}
//
//int swap(int x) {
//    int odd = x & 0xAAAA, even = x & 0x5555;
//
//    return ( odd >> 1 | even << 1 );
//}
//
//void drawLine(char* scr, int w, int h, int x1, int x2, int y) {
//
//    if (x1 > x2)
//        return;
//
//    int index1 = w * y + x1 / CHAR_BIT,
//            offset1 = x1 % CHAR_BIT,
//            index2 = w * y + x2 / CHAR_BIT,
//            offset2 = x2 % CHAR_BIT;
//
//    if (index1 == index2) {
//        scr[index1] |= ~ (  ( -1 << CHAR_BIT - offset1 ) | ( ( 1 << CHAR_BIT - offset2 - 1 ) - 1 ) ) ;
//        return;
//    }
//
//    scr[index1] |= ( ( 1 << CHAR_BIT - offset1 ) - 1 );
//
//    for (int i = index1 + 1; i < index2 ; i++)
//        scr[i] = -1;
//
//
//    scr[index2] |= ( -1 << CHAR_BIT - offset2 - 1 );
//}
//
//
//
//int conversion(int m, int n) {
//    int x = m ^ n, cnt = 0;
//    for (int i = 0; i < sizeof(int) * CHAR_BIT; i++) {
//        if ( ( x & (1 << i) ) != 0)
//            cnt++;
//    }
//    return cnt;
//}
//
//void displayScreen(char *scr, int w, int h) {
//    for (int i = 0; i < h; i++) {
//        for (int j = 0; j < w; j++)
//            cout << bitset<8>(scr[i * w + j]) << " ";
//        cout << endl;
//    }
//}
//
//
//int main() {
////    int i = 2, j = 8, m = 2648, n =  5852;
////    int mask = ( -1 << j+1 ) | (  ( 1 << i ) - 1 );
////    int res = ( n & mask ) |  ( m & ~mask );
////
////    cout << bitset<16> (n) << endl;
////    cout << bitset<16> (m) << endl;
////    cout << bitset<16>(mask) << endl;
////    cout << bitset<16> (res) << endl;
//
////    bitset<16> foo ( "000001011" );
////    int x = (int) foo.to_ullong();
////    cout << maxSeq(x);
////    cout << x << nextSmall(x) << bitset<16> (nextSmall(x));
//
////    int n = 0;
////    cout << boolalpha;
////    cout << ( n & (n-1) == 0 ) ;
//
////    cout << conversion(29, 15);
//
////    int x = 1767;
////    cout << bitset<16> (x) << endl;
////    cout << bitset<16> (swap(x)) << endl;
//
//    int w = 4, h = 2;
//
//    int n = h * w;
//
//    char scr[n];
//
//    for (int i = 0; i < n; i++)
//        scr[i] = 0;
//
////    displayScreen(scr, w, h);
//    drawLine(scr, w, h, 2, 31, 0);
//    displayScreen(scr, w, h);
//    return 0;
//}
