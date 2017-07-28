////
//// Created by jeevan on 2/5/17.
////
//#include <iostream>
//#include <vector>
//
//#define rep(i, n) for(int i = 0; i < n; i++)
//#define fi(i, a, b) for(int i = a; i <= b; i++)
//#define fd(i, a, b) for(int i = a; i >= b; i--)
//typedef unsigned long int ul;
//using namespace std;
//
//int m, n;
//ul r;
//vector<vector<ul>> mat;
//
//void rotate(int level) {
//
//    vector<ul> temp, temp1;
//    fi(i, level, n - level - 1)
//        temp.push_back(mat[level][i]);
//
//    fi(i, level + 1, m - level - 2)
//        temp.push_back(mat[i][n - level - 1]);
//
//    fd(i, n - level - 1, level)
//        temp.push_back(mat[m - level - 1][i]);
//
//    fd(i, m - level - 2, level + 1)
//        temp.push_back(mat[i][level]);
//
//    int r1 = r % temp.size();
//
//    if (r1) {
//        temp1.resize(r1);
//        temp1.insert(temp1.begin(), temp.begin(), temp.begin() + r1);
//        temp.erase(temp.begin(), temp.begin() + r1);
//        temp.reserve(temp.size() + r1);
//        temp.insert(temp.end(), temp1.begin(), temp1.end());
//    }
//
//    int j = 0;
//    fi(i, level, n - level - 1)
//        mat[level][i] = temp[j++];
//
//    fi(i, level +1, m - level - 2)
//        mat[i][n - level - 1] = temp[j++];
//
//    fd(i, n - level - 1, level)
//        mat[m - level - 1][i] = temp[j++];
//
//    fd(i, m - level - 2, level + 1)
//        mat[i][level] = temp[j++];
//
//}
//
//int main() {
//
//    cin >> m >> n >> r;
//
//    mat.resize(m);
//    mat.assign(m, vector<ul> (n));
//
//    rep(i, m)
//        rep(j, n)
//            cin >> mat[i][j];
//
//    int t = min(m,n) / 2;
//
//    rep(i, t)
//        rotate(i);
//
//    rep(i, m) {
//        rep(j, n) cout << mat[i][j] << " ";
//        cout << endl;
//    }
//
//
//    return 0;
//}