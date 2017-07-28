////
//// Created by jeevan on 3/19/17.
////
//#include <iostream>
//#define ROW 4
//#define COL 5
//
//using namespace std;
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//
//class Submatrix {
//public:
//
//    int row1, row2, col1, col2, sum;
//
//    Submatrix(int r1, int r2, int c1, int c2, int s) : row1(r1), row2(r2),
//    col1(c1), col2(c2), sum(s) {}
//
//    int getSum() { return sum; }
//
//    void display() {
//        printf("(%d, %d) (%d, %d) %d", row1, col1, row2, col2, sum);
//    }
//};
//
//class Range {
//public:
//
//    int start, end, sum;
//
//    Range(int s, int e, int s1) : start(s), end(e), sum(s1) {}
//
//};
//
//Range getMaxSubArray(int a[], int n) {
//
//    int max_so_far = INT32_MIN, max_ending_here = 0,
//       start = 0, end = 0, s=0;
//
//    for (int i=0; i< n; i++ )
//    {
//        max_ending_here += a[i];
//
//        if (max_so_far < max_ending_here)
//        {
//            max_so_far = max_ending_here;
//            start = s;
//            end = i;
//        }
//
//        if (max_ending_here < 0)
//        {
//            max_ending_here = 0;
//            s = i+1;
//        }
//    }
//
//    return Range(start, end, max_so_far);
//}
//
//Submatrix* getMaxSubMat(int a[ROW][COL]) {
//
//    int r = ROW, c = COL;
//
//    Submatrix* best = nullptr;
//
//    fi(rowStart, 0, r - 1) {
//
//        int *partialSum = new int[c];
//
//        fi(rowEnd, rowStart, r - 1) {
//
//            fi(i, 0, c - 1)
//                partialSum[i] += a[rowEnd][i];
//
//            Range bestRange = getMaxSubArray(partialSum, c);
//
//            if( best == nullptr || bestRange.sum > best->getSum() )
//                best = new Submatrix(rowStart, rowEnd, bestRange.start, bestRange.end, bestRange.sum);
//
//        }
//    }
//
//    return best;
//}
//
//int main() {
//
//    int a[ROW][COL] = {{1, 2, -1, -4, -20},
//                       {-8, -3, 4, 2, 1},
//                       {3, 8, 10, 1, 3},
//                       {-4, -1, 1, 7, -6}
//    };
//
//    Submatrix *mat = getMaxSubMat(a);
//    mat->display();
//
//    return 0;
//}