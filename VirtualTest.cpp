////
//// Created by jeevan on 2/27/17.
////
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class Base {
//public:
//    virtual void NameOf();   // Virtual function.
//    void InvokingClass();   // Nonvirtual function.
//};
//
//// Implement the two functions.
//void Base::NameOf() {
//    cout << "Base::NameOf\n";
//}
//
//void Base::InvokingClass() {
//    cout << "Invoked by Base\n";
//}
//
//class Derived : public Base {
//public:
//    void NameOf();   // Virtual function.
//    void InvokingClass();   // Nonvirtual function.
//};
//
//// Implement the two functions.
//void Derived::NameOf() {
//    cout << "Derived::NameOf\n";
//}
//
//void Derived::InvokingClass() {
//    cout << "Invoked by Derived\n";
//}
//
//int main() {
//    // Declare an object of type Derived.
////    Derived aDerived;
////
////    // Declare two pointers, one of type Derived * and the other
////    //  of type Base *, and initialize them to point to aDerived.
////    Derived *pDerived = &aDerived;
////    Base    *pBase    = &aDerived;
////
////    // Call the functions.
////    pBase->NameOf();           // Call virtual function.
////    pBase->InvokingClass();    // Call nonvirtual function.
////    pDerived->NameOf();        // Call virtual function.
////    pDerived->InvokingClass(); // Call nonvirtual function.
////
////    int a = 5;
////    int *p = &a;
////    cout << p << endl;
////    cout << *p++ << endl;
////    cout << p;
//
//    char *c, d[6] = "Hello";
//    c = strdup(d);
//    printf("%s", c);
//    while(*c++ = 0) {
//        cout << 2;
//    };
//
//
//}
//
////Note that regardless of whether the NameOf function is invoked through a pointer to Base or a pointer to Derived,
//// it calls the function for Derived. It calls the function for Derived because NameOf is a virtual function,
//// and both pBase and pDerived point to an object of type Derived