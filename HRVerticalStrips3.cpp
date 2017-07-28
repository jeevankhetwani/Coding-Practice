////
//// Created by jeevan on 2/7/17.
////
///* Enter your code here. Read input from STDIN. Print output to STDOUT */
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//    cout << fixed << setprecision (2);
//    int ntest;
//    cin >> ntest;
//    for (int ctest = 0; ctest < ntest; ctest++)
//    {
//        int n;
//        int len[60];
//        int nmore[60];
//        cin >> n;
//        for (int i = 0; i < n; i++)
//            cin >> len[i];
//        for (int i = 0; i < n; i++)
//        {
//            nmore[i] = -1;
//            for (int j = 0; j < n; j++)
//                if (len[j] >= len[i])
//                    nmore[i]++;
//            //cout << nmore[i] << "\n";
//        }
//        double total = 0.0;
//        double prob[60];
//        for (int i = 1; i <= n; i++)
//            for (int j = 0; j < n; j++)
//            {
//                for (int k = 0; k <= n; k++)
//                    prob[k] = 0;
//                double cur = 0.0;
//                for (int k = i - 1; k >= 1; k--)
//                {
//                    //if (i == n)
//                    //cout << cur << " " << ((double) nmore[i]) / ((double) (n - i + k)) << "\n";
//                    prob[k] = (1 - cur) * ((double) nmore[j]) / ((double) (n - i + k));
//                    cur += prob[k];
//                }
//                prob[0] = 1 - cur;
//                for (int k = 0; k < n; k++)
//                    total += prob[k] * (i - k);
//                //cout << total << "\n";
//            }
//        cout << total / n << "\n";
//    }
//    //system ("Pause");
//    return 0;
//}
//
