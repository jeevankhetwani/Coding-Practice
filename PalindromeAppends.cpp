////
//// Created by jeevan on 5/8/17.
////
//#include <iostream>
//#include <string>
//#include <cstring>
//#include <unordered_map>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//bool palindrome(string& s, int i,int j) {
//
//    while(i < j) {
//        if(s[i] != s[j])
//            return false;
//        i++;
//        j--;
//    }
//
//    return true;
//}
//
//int findInsertion(string& s, int i, int j) {
//
//    if(i > j)
//        return 0;
//
//    if(s[i] == s[j])
//        return findInsertion(s, i + 1, j - 1);
//
//    return 1 + min(findInsertion(s, i, j - 1), findInsertion(s, i + 1, j));
//
//}
//
//int palindromeLength(string& s, int i, int j) {
//
//    int count = 0;
//
//    while(i >= 0 && j < s.size() && s[i--] == s[j++])
//        count++;
//
//    return count;
//}
//
//int longestPalindromeSubstringLL(string& s) {
//
//    int low, high, len;
//    int maxLen = 1, maxIndex = 0;
//
//    for(int i = 0; i < s.size() - 1; i++) {
////            even length palindrome
//        low = i;
//        high = i + 1;
//
//        while(low >= 0 && high < s.size() && s[low] == s[high]) {
//            low--; high++;
//        };
//
//        len = high - low - 1;
//
//        if(len > maxLen) {
//            maxLen = len;
//            maxIndex = low + 1;
//        }
//
//
//
////        odd length
////        int odd =  2 * palindromeLength(s, i - 1, i + 1) + 1;
////        if(maxLen < odd)
////            maxIndex  = i - odd / 2;
////
////        maxLen = max(maxLen, max(odd, even));
//
//        low = i - 1;
//        high = i + 1;
//
//        while(low >= 0 && high < s.size() && s[low] == s[high]) {
//            low--;
//            high++;
//        }
//        len = high - low - 1;
//
//        if(len > maxLen) {
//            maxLen = len;
//            maxIndex = low + 1;
//        }
//
//    }
//
//    cout << s.substr(maxIndex, maxLen);
//    return maxLen;
//}
//
//
//int longestPalindromeSubstring(string& s) {
//
//    int n = s.size(), maxLen = 0, maxIndex = -1;
//
//    bool c[n][n];
//
//    for(int i = 0; i < n; i++)
//        c[i][i] = true;
//
//    for(int len = 2; len <= n; len++)
//        for(int i = 0, j = i + len - 1; j < n; i++, j++) {
//
//            if(len == 2)
//                c[i][j] = s[i] == s[j];
//            else
//                c[i][j] = (s[i] == s[j]) && c[i + 1][j - 1];
//
//            if(c[i][j] && maxLen != len) {
//                maxLen = len;
//                maxIndex = i;
//            }
//        }
//
//    cout << s.substr(maxIndex, maxLen);
//
//    return maxLen;
//
//}
//
//int findInsertionDP(string& s) {
//
//    int n = s.size();
//    int c[n][n];
//
////    for(int i = 0; i < n; i++)
////        c[i][i] = 0;
//
//    memset(c, 0, sizeof(c));
//    for(int i = n - 1; i >= 0; i--)
//
//        for(int j = i + 1; j < n;  j++) {
//
//            if(s[i] == s[j])
//                c[i][j] = c[i + 1][j - 1];
//            else
//                c[i][j] = 1 + min(c[i + 1][j], c[i][j - 1]);
//        }
//
//    return c[0][n - 1];
//}
//
//int find(string&& s) {
//
//    int i = 0, n = s.size();
//
//    while(!palindrome(s, i, n - 1))
//        i++;
//
//    return i;
//
//}
//
//void countDistinct(int A[], int k, int n)
//{
//    //Your code here
//    int i, j;
//    unordered_map<int, int> valueMap;
//
//    for(i = 0; i < k; i++)
//        valueMap[A[i]] = i;
//
//    cout << valueMap.size() << " ";
//
//    for(i = k, j = 0; i < n; i++, j++) {
//
//        int x = A[j];
//
//        if(valueMap[x] == j)
//            valueMap.erase(x);
//
//        valueMap[A[i]] = i;
//
//        cout << valueMap.size() << " ";
//    }
//
//    cout << endl;
//}
//
//void sortMulipleByFirstOccurrence(int a[], int n) {
//
//    unordered_map<int , int> mymap;
//
//    for(int i = 0; i < n; i++)
//        if(mymap.find(a[i]) == mymap.end())
//            mymap[a[i]] = i;
//
//    sort(a, a + n, [&](int a, int b) -> bool {
//        return mymap[a] < mymap[b];
//    });
//}
//
//int maxLenZeroSumSubarray(int arr[], int n) {
//
//    int sum = 0, maxLen = 0, maxIndex = -1;
//    unordered_map<int, int> mymap;
//
////    to store
//    mymap[0] = -1;
//
//    for(int i = 0; i < n; i++) {
//        sum += arr[i];
//
//        if(mymap.find(sum) == mymap.end())
//            mymap[sum] = i;
//
//        else {
//
//            int len = i - mymap[sum];
//
//            if(len > maxLen) {
//                maxLen = len;
//                maxIndex = mymap[sum] + 1;
//            }
//        }
//    }
//
//    return maxLen;
//}
//
//int equalZeroOneSubarray(int arr[], int n) {
//
//    int sum = 0, maxLen = 0, maxIndex = -1;
//    unordered_map<int, int> mymap;
//
////    to store
//    mymap[0] = -1;
//
//    for(int i = 0; i < n; i++) {
//
//        sum += arr[i] ? 1 : -1;
//
//        if(mymap.find(sum) == mymap.end())
//            mymap[sum] = i;
//
//        else {
//
//            int len = i - mymap[sum];
//
//            if(len > maxLen) {
//                maxLen = len;
//                maxIndex = mymap[sum] + 1;
//            }
//        }
//    }
//
//    return maxLen;
//}
//
//void symmetricPairs(int **a, int m) {
//
//    unordered_map<int, int> mymap;
//
//    for(int i = 0; i < m; i++) {
//
//        int first = a[i][0], second = a[i][1];
//
//        if(mymap.find(second) != mymap.end() && mymap[second] == first)
//            cout << first << " " << second;
//        else
//            mymap[first] = second;
//
//    }
//
//}
//
//void sumPairs(int *a, int n) {
//
//    int sum;
//    unordered_map<int, pair<int,int>> mymap;
//
//    for(int i = 0; i < n; i++)
//        for(int j = i + 1; j< n; j++) {
//            sum = a[i] + a[j];
//
//            if(mymap.find(sum) != mymap.end()) {
//                pair<int, int> p = mymap[sum];
//                if(a[p.first] != a[i] && a[p.second] != a[i])
//                    cout << a[i] << " " << a[j] << " " << a[p.first] << " " << a[p.second] << endl;
//            } else
//                mymap[sum] = make_pair(i, j);
//        }
//}
//
//bool dividePairs(int *a, int n, int k) {
//
//    int freq[k];
//
//    if(n & 1)
//        return false;
//
//    for(int i = 0; i < k; i++)
//        freq[i] = 0;
//
//    for(int i = 0; i < n; i++)
//        freq[a[i] % k]++;
//
//    if(freq[0] % 2)
//        return false;
//
//    if( k % 2 == 0 && freq[k / 2] % 2 == 1)
//        return false;
//
//    int i = 1, j = k - 1;
//    while(i < j) {
//        if(freq[i] != freq[j])
//            return false;
//        i++, j--;
//    }
//
//    return true;
//}
//
//int main() {
//
////    cout << find("aabb");
//    string s = "forgeeksskeegfor";
////    cout << findInsertion(s, 0, s.size() - 1);
////    cout << findInsertionDP(s);
////     longestPalindromeSubstring(s);
////    longestPalindromeSubstringLL(s);
//
////    int a[] = {15, -2, 2, -8, 1, 7, 10, 23};;
////    int n = sizeof(a) / sizeof(a[0]);
////    countDistinct(a, 4, n);
//
////    sortMulipleByFirstOccurrence(a, n);
//
////    for(int i = 0; i < n; i++)
////        cout << a[i] << " ";
//
//
////    cout << maxLenZeroSumSubarray(a, n);
//
////    int a[] =   {1, 0, 0, 0, 1, 0, 1};
////    int n = sizeof(a) / sizeof(a[0]);
//
////    cout << equalZeroOneSubarray(a, n);
//
////    int **arr = new int*[5];
////
////    for(int i = 0; i < 5; i++)
////        arr[i] = new int[2];
////
////    arr[0][0] = 11; arr[0][1] = 20;
////    arr[1][0] = 30; arr[1][1] = 40;
////    arr[2][0] = 5;  arr[2][1] = 10;
////    arr[3][0] = 40;  arr[3][1] = 30;
////    arr[4][0] = 10;  arr[4][1] = 5;
////    symmetricPairs(arr, 5);
//
////    int arr[] = {1, 4, 7, 1, 7, 4};
////    int n  =  sizeof arr / sizeof arr[0];
////    sumPairs(arr, n);
//
//    int arr[] =  {92, 75, 65, 48, 45, 35};
//    int k = 10;
//    int n = sizeof(arr)/sizeof(arr[0]);
//    dividePairs(arr, n, k)? cout << "True": cout << "False";
//    return 0;
//}
