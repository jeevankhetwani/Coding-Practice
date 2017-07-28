////
//// Created by jeevan on 4/15/17.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void getDuplicate(vector<int> arr,int size)
//{
//    int pos = 0;
//    int desiredPos = 0;
//    while(pos < size)
//    {
//        if(arr[pos] <= 0)
//        {
//            pos++;
//            continue;
//        }
//        desiredPos = arr[pos] -1;
//        if(arr[desiredPos] > 0)
//        {
//            arr[pos] = arr[desiredPos];
//            arr[desiredPos] = -1;
//        }
//        else
//        {
//            arr[desiredPos]--;
//            arr[pos] = 0;
//            pos++;
//        }
//    }
//}
//
//void repetitions(vector<int> A,int n)
//{
//    int i;
//
//    for(i=0;i<n;i++) {
//        int index = A[i] % n;
//        A[index] += n;
//    }
//
//    for(i=0;i<n;i++) {
//        int frequency = A[i]/n;
//        int element=i;
//        printf("Element= %d , frequency = %d\n", element, frequency );
//    }
//}
//
//int main() {
//
//    int arr[] = {1, 2, 3, 1, 3, 6, 6};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    vector<int> v (arr, arr + n);
//
////    getDuplicate(v, n);
//
////    for(int i = 0; i < n; i++)
////        cout << arr[i] << " ";
//
//    repetitions(v, n);
//}
