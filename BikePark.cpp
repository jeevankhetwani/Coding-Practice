////
//// Created by jeevan on 3/27/17.
////
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//#include <unordered_set>
//
//using namespace std;
//
// /* int solution(vector<int> &A) {
//    // write your code in C++14 (g++ 6.2.0)
//
//    sort(A.begin(), A.end());
//
//    int curr, maxDist = 0, n = A.size();
//
//    if(A[0] == A[n - 1])
//        return 0;
//
//    for(int i = 0; i < n - 1 && A[i] != A[n - 1];  i++) {
//
//        curr = A[i + 1] - A[i];
//
//        if(curr > maxDist)
//            maxDist = curr;
//
//    }
//
//    return maxDist / 2;
//
//}*/
//
//int solution(vector<int> &A) {
//    // write your code in C++14 (g++ 6.2.0)
//
//     int n = A.size();
//     unordered_set<int> locs;
//     unordered_map<int,int> visited;
//
//     for(int i = 0; i < n; i++)
//         locs.insert(A[i]);
//
//     int numLocs = locs.size(), minDays = n;
//     int start = 0, j, currDays;
//
//     for(int i = 0; i < n; i++) {
//
//         if(visited.find(A[i]) == visited.end())
//             visited[A[i]] = 1;
//         else
//             visited[A[i]] += 1;
//
//         if(visited.size() == numLocs) {
//
//             j = start;
//
//             while(visited[A[j]] != 1) {
//                 visited[A[j]] -= 1;
//                 j++;
//             }
//
//             start = j;
//             currDays = i - j + 1;
//
//             minDays = min(minDays, currDays);
//
//         }
//     }
//
//     return minDays;
//}