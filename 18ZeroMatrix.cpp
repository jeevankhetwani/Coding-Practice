////
//// Created by jeevan on 12/23/16.
////
//#include<iostream>
//#include<set>
//using namespace std;
//
//
//
//
//void display(int **a, int m, int n) {
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++)
//            cout << a[i][j] << " ";
//        cout << endl;
//
//    }
//    cout << endl;
//}
//
//void zero(int **a, int m, int n) {
//    int i, j;
//    set<int> rows, col;
//
//    for (i = 0; i < m; i ++)
//        for ( j = 0; j < n; j++)
//            if (a[i][j] == 0) {
//                rows.insert(i);
//                col.insert(j);
//            }
//
//    set<int>::const_iterator itr;
//    for (itr = rows.begin(); itr != rows.end(); ++itr) {
//        i = *(itr);
//        for (j = 0; j < n; j++)
//            a[i][j] = 0;
//    }
//
//    for (itr = col.begin(); itr != col.end(); ++itr) {
//        j = *(itr);
//        for (i = 0; i < m; i++)
//            a[i][j] = 0;
//    }
//
//}
//
//
//
//
//int main() {
//
//    int m, n, **a;
//    cout << "Enter dim: "<<endl;
//    cin>>m>>n;
//
//    cout<<"Enter val:"<<endl;
//
//    a = new int* [m];
//    for (int i = 0; i < m; i++)
//        for (int j = 0; j < n; j++)
//            a[i] = new int[n];
//
//    for (int i = 0; i < m; i++)
//        for (int j = 0; j < n; j++)
//            cin >> a[i][j];
//
//
//    display(a, m, n);
//    zero(a, m, n);
//    display(a, m, n);
//    return 0;
//}
//
//
//
