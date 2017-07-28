////
//// Created by jeevan on 1/3/17.
////
//#include<iostream>
//#include<stack>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class Box {
//    int length, breadth, height;
//
//public:
//    Box(){}
//
//    Box(int l, int b, int h) : length(l), breadth(b), height(h) {}
//
//    int getH() {
//        return height;
//    }
//
//    bool canSitTop(Box box) {
//        return length < box.length && breadth < box.breadth && height < box.height;
//    }
//};
//
//int findHeight(vector<Box>* list, Box* top, int ht) {
//    if (list->size() == 0)
//        return ht;
//
//    int maxht = ht;
//    Box box;
//
//    for (int i = 0; i < list->size(); i++) {
//        if ( top == nullptr || (list->at(i)).canSitTop(*top)) {
//            box = list->at(i);
//            list->erase(list->begin() + i);
//            maxht = max(maxht, findHeight(list, &box, ht + box.getH()));
//            list->insert(list->begin() + i, box);
//        }
//    }
//
//    return maxht;
//}
//
//int findHeight(vector<Box> list) {
//    stack<Box> st;
//    return findHeight(&list, nullptr, 0);
//}
//
//
//int main() {
//    Box box1(1,1,1), box2(2,5,2), box3(3,3,5), box4(4, 4, 4);
//    vector<Box> list {box1, box2, box3, box4};
//    cout << findHeight(list);
//    return 0;
//}
//
