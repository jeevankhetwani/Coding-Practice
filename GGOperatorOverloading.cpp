////
//// Created by jeevan on 4/2/17.
////
//#include <iostream>
//
//using namespace std;
//
//class complex {
//private:
//    int re, im;
//
//public:
//
//    complex() { cout << "default constructor" << endl; }
//
//    complex(int i, int j) {
//        re = i;
//        im = j;
//        cout << "parameter constructor" << endl;
//    }
//
//    complex(const complex& c) {
//        re = c.re;
//        im = c.im;
//        cout << "copy constructor" << endl;
//    }
//
//    complex& operator=(const complex& c) {
//        cout << "assignment" << endl;
//        complex tmp(c);
//        swap(re, tmp.re);
//        swap(im, tmp.im);
//        return *this;
//    }
//
//    complex& operator=(complex&& c1) {
//        cout << "move semantic assignment" << endl;
//        swap(re, c1.re);
//        swap(im, c1.im);
//        return *this;
//    }
//
//    complex& operator++() {
//        cout << this;
//        re += 1;
//        im += 1;
//        return *this;
//    }
//
//    complex operator++(int) {
//
//        complex tmp(*this);
//        re += 1;
//        im += 1;
//        cout << this << " " << &tmp << endl;
//        return tmp;
//    }
//
//    ~complex() {
////        cout << "Destructor\n";
//    }
//
//    friend ostream& operator<<(ostream& , const complex& );
//
//};
//
//ostream& operator<<(ostream& os, const complex& c)
//{
//    os << '(' << c.re << ',' << c.im << ')' ;
//    return os;
//}
//
//int main() {
//
////    int a=1;
//    complex c1(1, 1);
////    complex c2 ;
////    cout << "assigning rvalue...\n";
////    c2 = complex(1, 2);
////    cout << "ended assigning rvalue...\n";
////    cout << c1;
//
//     a++++;
////    c1++++++;
////    cout << c1;
////    cout << ++complex(1, 2);
//}
