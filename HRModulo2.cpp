//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <set>
//using namespace std;
//
//long long mod;
//long long arr[100005];
//
//set<long long> f;
//
//int main() {
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    int T;
//    scanf("%d", &T);
//    while (T--) {
//        int n;
//        scanf("%d%lld", &n, &mod);
//        for (int i = 0; i < n; ++i) {
//            scanf("%lld", &arr[i]);
//            arr[i] %= mod;
//            if (i) arr[i] = (arr[i] + arr[i - 1]) % mod;
//        }
//        f.clear();
//        f.insert(0);
//        set<long long>::iterator it;
//        long long ans = 0;
//        for (int i = 0; i < n; ++i) {
//            it = f.begin();
//            if (it != f.end())
//                ans = max(ans, arr[i] - *it);
//            it = f.upper_bound(arr[i]);
//            if (it != f.end())
//                ans = max(ans, (arr[i] - *it + mod) % mod);
//            f.insert(arr[i]);
//        }
//        printf("%lld\n", ans);
//    }
//    return 0;
//}

//
//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <set>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//typedef long long ll;
//
//int t;
//int n;
//ll m;
//ll best;
//set <ll> has;
//
//int main() {
//    scanf("%d", &t);
//    while (t--) {
//        scanf("%d %lld", &n, &m);
//        best = 0; has.clear(); has.insert(0ll);
//        ll cur = 0;
//        for (int i = 0; i < n; i++) {
//            ll val; scanf("%lld", &val);
//            cur = (cur + val) % m;
//            set <ll>::iterator it = has.upper_bound(cur);
//            if (it != has.end()) best = max(best, cur + m - *it);
//            else best = max(best, cur - *has.begin());
//            has.insert(cur);
//        }
//        printf("%lld\n", best);
//    }
//    return 0;
//}
/*
We define the following:

A subarray of an -element array, , is a contiguous subset of 's elements in the inclusive range from some index
 to some index  where .
The sum of an array is the sum of its elements.
Given an -element array of integers, , and an integer, , determine the maximum value of the sum of any of its
 subarrays modulo . This means that you must find the sum of each subarray modulo , then print the maximum
 result of this modulo operation
for any of the  possible subarrays.

Input Format

The first line contains an integer, , denoting the number of queries to perform.
Each query is described over two lines:

The first line contains two space-separated integers describing the respective  (the array length) and
(the right operand for the modulo operations) values for the query.
The second line contains  space-separated integers describing the respective elements of array  for that query.
Constraints

        the sum of  over all test cases
Output Format

For each query, print the maximum value of  on a new line.

Sample Input

1
5 7
3 3 9 9 5
Sample Output

6
Explanation

The subarrays of array  and their respective sums modulo  are ranked in order of length and sum in the
 following list:

and
and






As you can see, the maximum value for  for any subarray is , so we print  on a new line.

*/
