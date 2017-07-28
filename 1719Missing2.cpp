////
//// Created by jeevan on 1/20/17.
////
//#include<iostream>
//#include<vector>
//#include<set>
//#include<cmath>
//
//using namespace std;
//
//
//// O(n) space
//void find(vector<int> &a, int n) {
//
//    int actualSum = 0, trueSum = 0;
//    set<int> myset;
//
//    for(int i = 0; i < a.size(); i++) {
//        actualSum += a[i];
//        myset.insert(a[i]);
//    }
//
//    for (int i = 1; i <= a.size() + n; i++)
//        trueSum += i;
//
//    int diff = trueSum - actualSum;
//
//    if (n == 1) {
//        cout << diff;
//        return;
//    }
//
//    for (int i = 1; i < diff / 2; i++ ) {
//        if ( myset.find(i) == myset.end() ) {
//            cout << i << " " << diff - i;
//            return;
//        }
//    }
//}
//
//void find1(vector<int> &a) {
//
//    int currSum = 0, trueSum = 0, currSqSum = 0, trueSqSum = 0;
//    set<int> myset;
//
//    for(int i = 0; i < a.size(); i++) {
//        currSum += a[i];
//        currSqSum += a[i] * a[i];
//
//    }
//
//    for (int i = 1; i <= a.size() + 2; i++) {
//        trueSum += i;
//        trueSqSum += i * i;
//    }
//
//
//    int sum = trueSum - currSum;
//    int sumSq = trueSqSum - currSqSum;
//
//    int productMul2 = sum * sum - sumSq ;
//    int diff = sqrt(sumSq - productMul2);
//
//    int x = ( sum + diff ) / 2;
//    int y = sum - x;
//
//    cout << x << " " << y;
//}
//
//int main() {
//
//    vector<int> a = {6, 2, 4, 5, 1, 7, 9};
//    find1(a);
//    return 0;
//}
//
