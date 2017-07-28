//#include <map>
//#include <set>
//#include <list>
//#include <cmath>
//#include <ctime>
//#include <deque>
//#include <queue>
//#include <stack>
//#include <string>
//#include <bitset>
//#include <cstdio>
//#include <limits>
//#include <vector>
//#include <climits>
//#include <cstring>
//#include <cstdlib>
//#include <fstream>
//#include <numeric>
//#include <sstream>
//#include <iostream>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//
//
//int main(){
//    int q;
//    cin >> q;
//    for(int a0 = 0; a0 < q; a0++){
//        int n;
//        cin >> n;
//        vector< vector<int> > M(n,vector<int>(n));
//        long long totalIn[101]={0},totalOf[100]={0};
//        for(int M_i = 0;M_i < n;M_i++){
//            for(int M_j = 0;M_j < n;M_j++){
//                cin >> M[M_i][M_j];
//                totalIn[M_i]+=M[M_i][M_j];
//                totalOf[M_j]+=M[M_i][M_j];
//            }
//        }
//        sort(totalIn,totalIn+100);
//        sort(totalOf,totalOf+100);
//        int i;
//        for(i=0;i<100;i++)
//        {
//            if(totalIn[i]!=totalOf[i])
//                break;
//        }
//        if(i==100)
//            cout<<"Possible"<<endl;
//        else
//            cout<<"Impossible"<<endl;
//        // your code goes here
//    }
//    return 0;
//}
