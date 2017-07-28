////
//// Created by jeevan on 2/9/17.
////
//#include <iostream>
//#include <cstring>
//
//typedef unsigned long ul;
//#define rep(i, n) for(int i = 0; i < n; i++)
//
//using namespace std;
//
//int coins[100], m, n;
//
//ul check(int n)
//{
//    // table[i] will be storing the number of solutions for
//    // value i. We need n+1 rows as the table is consturcted
//    // in bottom up manner using the base case (n = 0)
//    ul table[n+1];
//
//    // Initialize all table values as 0
//    memset(table, 0, sizeof(table));
//
//    // Base case (If given value is 0)
//    table[0] = 1l;
//
//    // Pick all coins one by one and update the table[] values
//    // after the index greater than or equal to the value of the
//    // picked coin
//    for(int i=0; i<m; i++)
//        for(int j=coins[i]; j<=n; j++)
//            table[j] += table[j-coins[i]];
//
//    return table[n];
//}
//
//int main() {
//
//    cin >> n >> m;
//
//    rep(i, m)
//        cin >> coins[i];
//
//    cout << check(n);
//}
