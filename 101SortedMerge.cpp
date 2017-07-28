////len1, int len2
//#include<iostream>
//
//using namespace std;
//
//
//void merge(int *a, int *b, int len1, int len2) {
//    int temp[len1];
//
//    for(int i = 0; i < len1; i++)
//        temp[i] = a[i];
//
//    int left = 0, right = 0, curr = 0;
//
//    while( left < len1 && right <  len2 ) {
//        if ( temp[left] <= b[right] )
//            a[curr++] = temp[left++];
//        else
//            a[curr++] = b[right++];
//    }
//
//    while( left < len1)
//        a[curr++] = temp[left++];
//
//    while (right < len2)
//        a[curr++] = b[right++];
//}
//
//
//int main() {
//    int a[10] = {-5, -3, 1, 3 , 3, 4};
//    int b[] = {-6, -1, 5, 7};
//
//    for (int i = 0; i < 10; i++)
//        cout << a[i] << " ";
//    cout << endl;
//
//    merge(a, b, 6, 4);
//
//    for (int i = 0; i < 10; i++)
//        cout << a[i] << " ";
//
//    return 0;
//}
