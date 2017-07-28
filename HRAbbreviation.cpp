////
//// Created by jeevan on 2/7/17.
////
//#include <iostream>
//#include <string>
//#define fi(i, n) for(int i = 0; i < n; i++)
//using namespace std;
//
//bool check(string a, string b, int i, int j) {
//
//    if(j == b.size()) {
//
//        while( i < a.size() ) {
//
//            if (isupper(a[i]))
//                return false;
//
//            i++;
//        }
//        return true;
//    }
//
//    if (i == a.size())
//        return false;
//
//    if (isupper(a[i]) && a[i] != b[j])
//        return false;
//
//    if (isupper(a[i]))
//        return check(a, b, i + 1, j + 1);
//
//    if (toupper(a[i]) != b[j])
//        return check(a, b, i + 1, j);
//
//    return check(a, b, i + 1, j) || check(a, b, i + 1, j + 1);
//}
//
//bool check(string a, string b) {
//
//    if(a.size() < b.size())
//        return false;
//
//    return check(a, b, 0, 0);
//}
//
//int main() {
//
//    int q;
//    string a, b;
//    cin >> q;
//
//    fi(i, q) {
//        cin >> a >> b;
//        if (check(a, b))
//            cout << "YES";
//        else
//            cout << "NO";
//        cout << endl;
//    }
//    return 0;
//}
