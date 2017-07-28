////
//// Created by jeevan on 1/15/17.
////
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void shuffleHelper(vector<int>& v, int i) {
//
//    if (i == 0) {
//        v[0] = 0;
//        return;
//    }
//
//    shuffleHelper(v, i - 1);
//    int index = rand() % ( i + 1 ) ;
//
//    v[i] = v[index];
//    v[index] = i;
//}
//
//
//void shuffle(int n) {
//
//    srand(time(NULL));
//    vector<int> v(n);
//
//    for (int i = 1; i < v.size(); i++)
//        v[i] = i;
//
//
//    for (int i = 1; i < v.size(); i++) {
//        int index = rand() % ( i + 1 ) ;
//        int temp = v[i];
//        v[i] = v[index];
//        v[index] = temp;
//    }
//
//    for (int i = 0; i < v.size(); i++)
//        cout << v[i] << " " ;
//}
//
//
//
//int main() {
//
//    shuffle(10);
//    return 0;
//}
