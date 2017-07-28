//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//int main() {
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    int t,n,i,j,a[100000],maxC,maxD,temp,max;
//    cin>>t;
//    while(t--) {
//        cin>>n;
//        for(i=0;i<n;i++)
//            cin>>a[i];
//        maxC=0;
//        maxD=0;
//        temp=0;
//        max=a[0];
//        for(i=0;i<n;i++) {
//            if(max<a[i])
//                max=a[i];
//            if(a[i]>0)
//                maxD+=a[i];
//            temp+=a[i];
//            if(temp<0)
//                temp=0;
//            else if(temp>maxC)
//                maxC=temp;
//        }
//        if(maxD==0)
//            cout<<max<<" "<<max<<endl;
//        else
//            cout<<maxC<<" "<<maxD<<endl;
//    }
//    return 0;
//}
