////
//// Created by jeevan on 3/25/17.
////
//#include<bits/stdc++.h>
//using namespace std;
//int find(int *a,int n)
//{
//	int i=0,j=n-1;
//	queue<pair<int ,int > > q;
//	q.push(make_pair(i,j));
//	map<pair<int ,int >,int  > mp;
//	while(!q.empty())
//	{
//		int u = q.front().first;
//		int v = q.front().second;
//		q.pop();
//		if(a[v]>a[u])
//		{
//			return v-u;
//		}
//
//		if(v-u>0)
//		{
//			if(mp[make_pair(u+1,v)]==0)
//			{
//				mp[make_pair(u+1,v)]=1;
//				q.push(make_pair(u+1,v));
//			}
//			if(mp[make_pair(u,v-1)]==0)
//			{
//				mp[make_pair(u,v-1)]=1;
//				q.push(make_pair(u,v-1));
//			}
//		}
//		else
//		return 0;
//	}
//	return 0;
//}
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		int n,i,j;
//		cin>>n;
//		int a[n];
//		for(i=0;i<n;i++)
//		{
//			cin>>a[i];
//		}
//		cout<<find(a,n)<<"\n";
//	}
//}
