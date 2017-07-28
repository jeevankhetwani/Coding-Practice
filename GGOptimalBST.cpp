////
//// Created by jeevan on 3/18/17.
////
//// A naive recursive implementation of optimal binary search tree problem
//#include <iostream>
//#include <stdio.h>
//#include <limits.h>
//
//using namespace std;
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//// A utility function to get sum of array elements freq[i] to freq[j]
//int sum(int freq[], int i, int j);
//
//// A recursive function to calculate cost of optimal binary search tree
//int optCost(int freq[], int i, int j)
//{
//   // Base cases
//   if (j < i)      // If there are no elements in this subarray
//     return 0;
//   if (j == i)     // If there is one element in this subarray
//     return freq[i];
//
//   // Get sum of freq[i], freq[i+1], ... freq[j]
//   int fsum = sum(freq, i, j);
//
//   // Initialize minimum value
//   int min = INT_MAX;
//
//   // One by one consider all elements as root and recursively find cost
//   // of the BST, compare the cost with min and update min if needed
//   for (int r = i; r <= j; ++r)
//   {
//       int cost = optCost(freq, i, r-1) + optCost(freq, r+1, j);
//       if (cost < min)
//          min = cost;
//   }
//
//   // Return minimum value
//   return min + fsum;
//}
//
//// The main function that calculates minimum cost of a Binary Search Tree.
//// It mainly uses optCost() to find the optimal cost.
//int optimalSearchTree(int keys[], int freq[], int n)
//{
//     // Here array keys[] is assumed to be sorted in increasing order.
//     // If keys[] is not sorted, then add code to sort keys, and rearrange
//     // freq[] accordingly.
//     return optCost(freq, 0, n-1);
//}
//
//// A utility function to get sum of array elements freq[i] to freq[j]
//int sum(int freq[], int i, int j)
//{
//    int s = 0;
//    for (int k = i; k <=j; k++)
//       s += freq[k];
//    return s;
//}
//
//int optimalSrchTree(int keys[], int freq[], int n) {
//
//    int cumFreq[n];
//    cumFreq[0] = freq[0];
//
//    fi(i, 1, n -1)
//        cumFreq[i] = cumFreq[i - 1] + freq[i];
//
//    int c[n][n];
//
//    rep(i, n)
//        rep(j, n)
//            c[i][j] = 0;
//
//    rep(i, n)
//        c[i][i] = freq[i];
//
//    fd(i, n - 2, 0) {
//
//        fi(j, i + 1, n - 1) {
//
//            int curr = cumFreq[j] - cumFreq[i - 1];
//
//            int minCost = INT32_MAX;
//
//            fi(k, i, j)
//                minCost = min(minCost, c[i][k - 1] + c[k + 1][j]);
//
//            c[i][j] = minCost + curr;
//        }
//    }
//
//    return c[0][n - 1];
//
//}
//
//// Driver program to test above functions
//int main()
//{
//    int keys[] = {10, 12, 20};
//    int freq[] = {34, 8, 50};
//    int n = sizeof(keys)/sizeof(keys[0]);
//    printf("Cost of Optimal BST is %d\n", optimalSearchTree(keys, freq, n));
//    printf("Cost of Optimal BST is %d ", optimalSrchTree(keys, freq, n));
//    return 0;
//}
