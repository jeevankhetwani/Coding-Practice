////
//// Created by jeevan on 3/16/17.
////
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//
//void find(int a[], int n) {
//
//    int maxLen[n], parent[n];
//    int maxIndex;
//
//    maxLen[0] = 1;
//    parent[0] = -1;
//
//    fi(i, 1, n - 1) {
//
//        maxIndex = -1;
//
//        fi(j, 0, i - 1)
//
//            if( a[i] >= a[j] &&
//                ( maxIndex == -1 || maxLen[maxIndex] < maxLen[j] )  )
//                maxIndex = j;
//
//
//        if(maxIndex != -1)
//            maxLen[i] = maxLen[maxIndex] + 1;
//        else
//            maxLen[i] = 1;
//
//        parent[i] = maxIndex;
//    }
//
//
//    maxIndex = 0;
//    fi(i, 1, n - 1)
//        if(maxLen[i] > maxLen[maxIndex])
//            maxIndex = i;
//
//    printf("Length: %d\n", maxLen[maxIndex]);
//
//    while(maxIndex != -1) {
//        printf("%d ", a[maxIndex]);
//        maxIndex = parent[maxIndex];
//    }
//
//
//}
//
//int main() {
//
//    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
//    int n = sizeof(arr)/sizeof(arr[0]);
//
//    find(arr, n);
//    return 0;
//}