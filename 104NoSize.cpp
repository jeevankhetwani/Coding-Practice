////
//// Created by jeevan on 1/4/17.
////
//#include<iostream>
//#include<ctime>
//
//using namespace std;
//class listy {
//    int n, *ptr;
//
//public:
//    listy(int n) {
//        this->n = n;
//        ptr = new int[n];
//    }
//
//    void init(int *a, int n) {
//        for (int i = 0; i < n; i++)
//            ptr[i] = a[i];
//    }
//
//    void display() {
//        for (int i = 0; i < n; i++)
//            cout << *(ptr + i) << " ";
//    }
//
//    int operator[] (int i) {
//        return *(ptr + i);
//    }
//};
//
//int binarySearch(listy& a, int low, int high, int k) {
//
//    if (low > high)
//        return -1;
//
//    int middle = (low + high) / 2;
//
//    if (k < a[middle])
//        return binarySearch(a, low, middle - 1, k);
//    else if (k > a[middle])
//        return binarySearch(a, middle + 1, high, k);
//    else
//        return middle;
//
//}
//
//
//int search(listy& list, int k) {
//    int left = 0, right = 1, len = 1;
//
//    while(true) {
//
//        while( list[right] != 0) {
//
//            if (list[left] == k)
//                return left;
//            else if (list[right] == k)
//                return right;
//
//            if (list[right] > k)
//                return binarySearch(list, left, right, k);
//
//            len *= 2;
//
//            left = right + 1;
//            right = left + len;
//        }
//
//        if (list[left] == 0)
//            return -1;
//
//        len = 1;
//        right = left + len;
//    }
//
//}
//
//int linearsearch(listy& list, int k) {
//    int i = 0;
//
//    while(list[i] != k && list[i] != 0)
//        i++;
//
//    if (list[i] == k)
//        return i;
//    return -1;
//}
//
//int main() {
//    int n = 1000000;
//    int a[n];
//    clock_t begin, end;
//
//    for (int i = 0; i < n; i++)
//        a[i] = i + 1;
//
//    listy list(2 * n);
//    list.init(a, n);
//
//    begin = clock();
//    search(list, 100000);
//    end = clock();
//
//    cout << end - begin << endl;
//
//
//    begin = clock();
//    linearsearch(list, 100000);
//    end = clock();
//
//    cout << end - begin;
//
//
//}
//
