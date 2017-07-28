////
//// Created by jeevan on 4/26/17.
////
//#include <iostream>
//#include <memory.h>
//
//using namespace std;
//
//class A {
//public:
//    char *name;
//
//    A() {}
//
////    A(char const *s) { name = strdup(s); };
//
//    ~A() { delete name; }
//};
//
//int main() {
//
//    A a;
//
//
////    A b = a;
//
//
////    printf("%s", a.name);
//
////    seg abort happens bcoz memory pointed by one object gets collected so in next call to destructor for another
////  object, it is trying to delete null
//
//    return 0;
//}
