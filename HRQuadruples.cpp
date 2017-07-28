////
//// Created by jeevan on 2/5/17.
////
//#include <iostream>
//#include <unordered_map>
//#include <unordered_set>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define FI(i, a, b) for(int i = a; i <= b ;i++)
//
//using namespace std;
//
//template <typename Map>
//bool map_compare (Map const &lhs, Map const &rhs) {
//    // No predicate needed because there is operator== for pairs already.
//    return lhs.size() == rhs.size()
//           && std::equal(lhs.begin(), lhs.end(),
//                         rhs.begin());
//}
//
//class Quadruple {
//public:
//    int a, b, c, d;
//    unordered_map<int, int> mymap;
//
//    Quadruple(int a, int b, int c, int d) : a(a), b(b), c(c), d(d) {
//
//        mymap[a] = 1;
//
//        if( mymap.find(b) == mymap.end())
//            mymap[b] = 1;
//        else
//            mymap[b] += 1;
//
//        if( mymap.find(c) == mymap.end())
//            mymap[c] = 1;
//        else
//            mymap[c] += 1;
//
//        if( mymap.find(d) == mymap.end())
//            mymap[d] = 1;
//        else
//            mymap[d] += 1;
//
//    }
//
//    bool operator==(const Quadruple& rhs) const
//    {
//        return map_compare(mymap, rhs.mymap);
//    }
//
//};
//
//namespace std {
//    template<>
//    struct hash<Quadruple> {
//
//        size_t operator()(const Quadruple &q) const {
//            // Compute individual hash values for first,
//            // second and third and combine them using XOR
//            // and bit shifting:
//
//            return (hash<int>()(q.a)
//                    ^ hash<int>()(q.b << 2)
//                    ^ hash<int>()(q.c << 4)
//                    ^ hash<int>()(q.d << 6));
//        }
//
//    };
//
//}
//int main() {
//
////    unordered_map<int, int> m1 {{1, 2}};
////    unordered_map<int, int> m2 {{1, 3}};
////    cout << map_compare(m1, m2);
//    int a, b, c, d;
//    cin >> a >> b >> c >> d;
//    unordered_set<Quadruple> myset;
//
//    FI(i, 1, a)
//        FI(j, 1, b)
//            FI(m, 1, c)
//                FI(n, 1, d)
//                    if(i ^ j ^ m ^ n) {
//                        Quadruple t(i, j, m, n);
//                        myset.insert(t);
//                    }
//
//    cout << myset.size();
//
//    return 0;
//}
