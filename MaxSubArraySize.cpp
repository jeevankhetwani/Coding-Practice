////
//// Created by jeevan on 5/18/17.
////
//#include <iostream>
//#include <cstring>
//#include <unordered_map>
//
//using namespace std;
//
//int findHelper(int prefix[], int n, int k) {
//
//    int left = 1, right = n, ans = 0, i;
//
//    while(left <= right) {
//
//        int mid = (left + right) / 2;
//
//        for(i = mid; i <= n; i++)
//            if(prefix[i] - prefix[i - mid] > k)
//                break;
//
//        if(i == n + 1) {
//            left = mid + 1;
//            ans = mid;
//        } else
//            right = mid - 1;
//
//    }
//
//    return ans;
//
//}
//
//int maxSumSubArrayRemoveOneElement(int a[], int n) {
//
//    int fwd[n], bwd[n], maxSum = a[0];
//
//    fwd[0] = a[0];
//    for(int i = 1; i < n; i++) {
//        fwd[i] = max(a[i], a[i] + fwd[i - 1]);
//        maxSum = max(maxSum, fwd[i]);
//    }
//
//    bwd[n - 1] = a[n - 1];
//    for(int i = n - 2; i >= 0; i--)
//        bwd[i] = max(a[i], a[i] + bwd[i + 1]);
//
//    int removeIndex = -1;
//
//    for(int i = 1; i < n - 1; i++)
//
//        if(fwd[i - 1] + bwd[i + 1] > maxSum) {
//            maxSum = fwd[i - 1] + bwd[i + 1];
//            removeIndex = i;
//        }
//
//    return removeIndex;
//}
//
//
//int findSize(int a[], int n, int k) {
//
//    int prefix[n + 1];
//    memset(prefix, 0, sizeof(int));
//
//    for(int i = 1; i <= n; i++)
//        prefix[i] = prefix[i - 1] + a[i - 1];
//
//    return findHelper(prefix, n, k);
//}
//
//int span(bool a[], bool b[], int n) {
//
//    int diff = 0, maxLen = 0, start = -1, preSumA = 0, preSumB = 0, currLen;
//    unordered_map<int, int> mymap;
//
//    mymap[diff] = -1;
//
//    for(int i = 0; i < n; i++) {
//
//        preSumA += a[i];
//        preSumB += b[i];
//
//        diff = preSumA - preSumB;
//
//        if(mymap.find(diff) == mymap.end())
//            mymap[diff] = i;
//        else {
//
//            currLen = i - mymap[diff];
//
//            if(maxLen < currLen) {
//                maxLen = currLen;
//                start = mymap[diff] + 1;
//            }
//        }
//    }
//
//    return maxLen;
//}
//
//void arrangePosNeg(int a[], int n) {
//
//    for(int i = 1; i < n; i++) {
//
//        if(a[i] > 0)
//            continue;
//
//        int j = i - 1, x = a[i];
//
//
//        while(j >= 0 && a[j] < 0) {
//            a[j + 1] = a[j];
//            j--;
//        }
//
//        a[j + 1] = x;
//    }
//}
//
//void swap(int a[], int i, int j, int n) {
//
//    while(n--)
//        swap(a[i++], a[j++]);
//}
//
//void leftRotate(int arr[], int d, int n)
//{
//    int i, j;
//    if(d == 0 || d == n)
//        return;
//    i = d;
//    j = n - d;
//    while (i != j)
//    {
//        if(i < j) /*A is shorter*/
//        {
//            swap(arr, d-i, d+j-i, i);
//            j -= i;
//        }
//        else /*B is shorter*/
//        {
//            swap(arr, d-i, d, j);
//            i -= j;
//        }
//        // printArray(arr, 7);
//    }
//    /*Finally, block swap A and B*/
//    swap(arr, d-i, d, i);
//}
//
//bool oneSwap(int a[], int n) {
//
//    int i = 0;
//
//    while(i < n - 1 && a[i] <= a[i + 1])
//        i++;
//
//    if(i == n - 1)
//        return true;
//
//    int j = n - 1;
//    while(j > 0 && a[j] >= a[j - 1])
//        j--;
//
//    swap(a[i], a[j]);
//
//    for(int k = 0; k < n - 1; k++)
//        if(a[k] > a[k + 1])
//            return false;
//
//    return true;
//}
//
//void reverse(int a[], int i, int j) {
//
//    while(i < j)
//        swap(a[i++], a[j--]);
//}
//
//void merge(int a[], int low, int mid, int high) {
//
//    int i = low, j = mid + 1;
//
//    while(i <= mid && a[i] < 0)
//        i++;
//// a[i...m] is pos
//
//    while(j <= high && a[j] < 0)
//        j++;
////    a[j..high] is pos
//
////    left pos
//    reverse(a, i, mid);
//
////    right neg
//    reverse(a, mid + 1, j - 1);
//
////    left pos + right neg
//    reverse(a, i, j - 1);
//}
//
//void mergeSort(int a[], int low, int high) {
//
//    if(low < high) {
//        int mid = (low + high) / 2;
//        mergeSort(a, low, mid);
//        mergeSort(a, mid + 1, high);
//        merge(a, low, mid, high);
//    }
//}
//
//void arrange(int a[], int n) {
////    using merge and reversal rotate for merging
//    mergeSort(a, 0, n - 1);
//}
//
//int main() {
//
////    int arr[] = {-2, -3, 4, 1, 4, 1, 5, -3};
////    int n = sizeof(arr)/sizeof(arr[0]);
////    int k = 14;
////    cout << findSize(arr, n, k) << endl;
//
////    int index =  maxSumSubArrayRemoveOneElement(arr, n);
////
////    if(index == -1)
////        cout << "no remval";
////    else
////        cout << arr[index];
//
////    bool  arr1[] = {0, 1, 0, 1, 1, 1, 1};
////    bool  arr2[] = {1, 1, 1, 1, 1, 0, 1};
////    int n = sizeof(arr1)/sizeof(arr1[0]);
////    cout << "Length of the longest common span with same "
////            "sum is "<< span(arr1, arr2, n);
//
//    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
//    int n = sizeof(arr)/sizeof(arr[0]);
////    cout << oneSwap(arr, n);
//
////    leftRotate(arr, 2, n);
//
//    arrange(arr, n);
//    for(int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    return 0;
//
//}
