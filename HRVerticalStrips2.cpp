//#include<cstdio>
//#include<algorithm>
//using namespace std;
//double C[60][60],F[60];int a[60],n;
//int main()
//{
//    F[0]=1;
//    for(int i=1;i<=50;i++)
//        F[i]=F[i-1]*i;
//    for(int i=0;i<=50;C[i][0]=1,i++)
//        for(int j=1;j<=i;j++)
//            C[i][j]= C[i-1][j] + C[i-1][j-1];
//
//    int _;
//    scanf("%d",&_);
//    while(_--)
//    {
//        scanf("%d",&n);
//        for(int i=1;i<=n;i++)scanf("%d",a+i);
//        double S=0;
//        for(int i=1;i<=n;i++)
//        {
//            int m=-1;
//            for(int j=1;j<=n;j++)
//                m+=a[j]>=a[i];
//            double T=0;
//            for(int j=1;j<=n;j++)
//                for(int k=0;k<=m;k++)
//                    if(k<=j-1&&m-k<=n-j)
//                        T += C[m][k] * C[j-1][k]* F[k]*C[n-j][m-k] * F[m-k]* F[n-m-1] * j / (k+1);
//            S+=T;
//        }
//        printf("%.2lf\n",S/F[n]);
//    }
//    return 0;
//}