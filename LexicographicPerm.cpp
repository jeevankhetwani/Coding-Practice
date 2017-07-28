////
//// Created by jeevan on 2/28/17.
////
//#include <iostream>
//using namespace std;
//
//void swap(char *a,char *b)
//{
//    if( *a == *b )
//        return;
//    *a^=*b;
//    *b^=*a;
//    *a^=*b;
//}
//void rev(string& s,int l,int r)
//{
//    while(l<r)
//        swap(&s[l++],&s[r--]);
//}
//
//int bsearch (string& s,int l,int r,int key)
//{
//    int index;
//    while(l<=r)
//    {
//        int mid = l+(r-l)/2;
//        if(s[mid]<=key)
//            r=mid-1;
//        else
//        {
//            l=mid+1;
//                index = mid;
//        }
//    }
//return index;
//}
//
//bool nextpermutation(string& s)
//{
//    int len = s.length(), i=len-2;
//    while(i>=0 && s[i]>=s[i+1])
//       --i;
//    if(i<0)
//        return false;
//    else
//    {
//        int index=bsearch(s,i+1,len-1,s[i]);
//        swap(&s[i],&s[index]);
//        rev(s,i+1,len-1);
//        return true;
//    }
//}
//int main ()
//{
////    method 1 using stl
////    string s = "tba";
////    bool val = next_permutation(s.begin(), s.end());
////
////    if(val)
////        cout << s;
////    else
////        cout << "Not possible";
////
////
//
//    string s = "bktsjb";
//    bool val = nextpermutation(s);
//    if (val == false)
//        cout << "No Word Possible" << endl;
//    else
//        cout << s << endl;
//    return 0;
//}
//// This code is contributed by Mysterious Mind
