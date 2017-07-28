////
//// Created by jeevan on 4/19/17.
////
//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//int calcArea(stack<int>& posStack, stack<int>& heightStack, int& lastPos, int currPos) {
//    lastPos = posStack.top(); posStack.pop();
//    int lastHeight = heightStack.top(); heightStack.pop();
//    int area = lastHeight * (currPos - lastPos);
//    return area;
//}
//
//int findMax(int a[], int n) {
//
//    int maxArea = 0, lastPos, tmp;
//    stack<int> posStack, heightStack;
//
//    for(int i = 0; i < n; i++) {
//
//        int h = a[i];
//
//        if(heightStack.empty() || h > heightStack.top()) {
//            posStack.push(i);
//            heightStack.push(h);
//        }
//        else if(h < heightStack.top()) {
//
//            while(!heightStack.empty() && h < heightStack.top()) {
//                tmp = calcArea(posStack, heightStack, lastPos, i);
//                maxArea = max(maxArea, tmp);
//            }
//
//            posStack.push(lastPos);
//            heightStack.push(h);
//
//        }
//    }
//
//    while(!posStack.empty()) {
//        tmp = calcArea(posStack, heightStack, lastPos, n);
//        maxArea = max(maxArea, tmp);
//    }
//
//    return maxArea;
//
//}
//
//
//int main() {
//
//    int a[] = {1, 3, 5, 3, 2, 2, 3, 3, 0, 3, 6};
//    int n = sizeof(a) / sizeof(a[0]);
//
//    cout << findMax(a, n);
//}
