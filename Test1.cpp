////
//// Created by jeevan on 3/30/17.
////
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int && func2(){
//    return 17; //returns an rvalue
//}
//
//class A {
//public:
//    void foo() const { std::cout << "A::foo() const\n"; }
//    void foo() const  volatile  { std::cout << "A::foo() const\n"; }
//    void foo() volatile  { std::cout << "A::foo() const\n"; }
//    void foo() { std::cout << "A::foo()\n"; }
//};
//
//A bar() { return A(); }
//const A cbar() { return A(); }
//
//
//
//int main() {
//
//    bar().foo();  // calls foo
//    cbar().foo(); // calls foo cons
//
////    int b, c[1];
//
////    char l;
////    static int k;
////    int *d = new int[1];
//
////    cout << a << " " << b << " " << c[1] << " " << d[10000] << " " << k;
//
////    char* const c {"jevan"};
////    cout << c;
////    *c = &l;
//
////    string s1 = "hello";
////    string s2 = "hello";
////    cout << s1.compare(s2);
//
//    return 0;
//}