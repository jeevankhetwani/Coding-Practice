////
//// Created by jeevan on 2/9/17.
////
//#include <iostream>
//#define rep(i, n) for(int i = 0; i < (n); i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//using namespace std;
//
//class person {
//
//public:
//    int id;
//    string name;
//
//    person(int id, string s) : id(id), name(s) {}
//};
//
//
//person *a[1000005], *b[1000005];
//int freq[100];
//
//int main() {
//
//    int n, id;
//    string s;
//    cin >> n;
//
//    rep(i, n) {
//        cin >> id >> s;
//        a[i] = new person(id, s);
//        freq[id]++;
//    }
//
//    freq[0]--;
//    fi(i, 1, 99)
//        freq[i] += freq[i - 1] - 1;
//
//    fd(i, n - 1, n / 2) {
//        int index = freq[a[i]->id];
//        b[index] = a[i];
//        freq[a[i]->id]--;
//    }
//
//    fd(i, n / 2 - 1, 0) {
//        int index = freq[a[i]->id];
//        b[index] = a[i];
//        freq[a[i]->id]--;
//        b[index]->name = "-";
//    }
//
//
//    rep(i, n)
//        cout << b[i]->name << " ";
//    return 0;
//}
