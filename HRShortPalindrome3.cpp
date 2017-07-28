////
//// Created by jeevan on 1/29/17.
////
//#define BUFSIZE 1000000
//char buf[BUFSIZE];
//int Tests, cnum;
//// #define USEWIN
//#define MANYTESTS 0
//// #define LINEBYLINE
//
//// Eryx's new template for I/O contests, May 3, 2015
//
//#include <algorithm>
//#include <string>
//#include <stdio.h>
//using namespace std;
//
//typedef long long ll;
//
//#define Size(x) (int(x.size()))
//
//string getLine() {
//  string s;
//  while(!feof(stdin)) {
//    char c = fgetc(stdin);
//    if(c <= 0) continue;
//    if(c == 13) continue;
//    if(c == 10) return s;
//    s += c;
//    }
//  return s;
//  }
//
//int scanerr;
//
//int getNum() {
//#ifdef LINEBYLINE
//  string s = getLine();
//  return atoi(s.c_str());
//#else
//  int i;
//  scanerr = scanf("%d", &i);
//  return i;
//#endif
//  }
//
//string getStr() {
//#ifdef LINEBYLINE
//  return getStr();
//#else
//  scanerr = scanf("%s", buf);
//  return buf;
//#endif
//  }
//
//#define TDEF template<int P>
//#define modarP modar<P>
//
//TDEF struct modar {
//  int content;
//
//  modar(int _c) { content = _c % P; if(content<0) content += P; }
//  modar(ll _c) { content = _c % P; if(content<0) content += P; }
//  modar() {}
//  int asInt() { return content; }
//  };
//
//TDEF modarP operator == (modarP x, modarP y) { return x.content == y.content; }
//TDEF modarP operator != (modarP x, modarP y) { return x.content != y.content; }
//
//#define F(P, d) \
//  TDEF modarP& operator P##= (modarP& x, modarP y) { d; return x; } \
//  TDEF modarP& operator P##= (modarP& x, int y) { return x P##= modarP(y); } \
//  TDEF modarP& operator P##= (modarP& x, ll  y) { return x P##= modarP(y); } \
//  TDEF modarP operator P (modarP x, modarP y) { return x P##= y; } \
//  F0(P)
//
//#define F0(P) \
//  TDEF modarP operator P (modarP x, int y) { return x P modarP(y); } \
//  TDEF modarP operator P (modarP x, ll y) { return x P modarP(y); }
//
//F(+, ll tmp = x.content + ll(y.content); x.content = tmp>=P ? tmp-P : tmp;)
//F(-, ll tmp = x.content - ll(y.content); x.content = tmp<0 ? tmp+P : tmp;)
//F(*, ll tmp = x.content * ll(y.content); x.content = tmp % P;)
//F(/, x *= power(y, P-2);)
//
//F0(==) F0(!=)
//#undef F
//#undef F0
//
//// ERROR ==/!= are not bools! check in text.cpp
//
//TDEF modarP power(modarP x, int q) {
//  modarP one(1);
//  while(true) {
//    if(q&1) one *= x;
//    q >>= 1;
//    if(!q) return one;
//    x *= x;
//    }
//  }
//
//#line 10 "work.cpp"
//
///// ----
//
//
////Eryx
//
//// !FDI
//
//// states:
//// [not counted]
//
//#define P 1000000007
//
//modarP seenfirst[30];
//modarP seenboth[30][30];
//modarP seenthree[30][30];
//
//void solveCase() {
//  string S = getStr();
//  modarP result;
//
//  for(char cc: S) {
//    int c = cc - 'a';
//
//    for(int x=0; x<26; x++)
//      result += seenthree[c][x];
//    for(int x=0; x<26; x++)
//      seenthree[x][c] += seenboth[x][c];
//    for(int x=0; x<26; x++)
//      seenboth[x][c] += seenfirst[x];
//    seenfirst[c] += 1;
//    }
//
//  printf("%d\n", result.asInt());
//  }
//
//#define P 1000000007
//
//int main() {
//
//  if(!MANYTESTS) Tests = 1;
//  else Tests = getNum();
//
//  for(cnum=1; cnum<=Tests; cnum++)
//    solveCase();
//
//  // finish
//  return 0;
//  }
//
//// This solution includes hidden routines to solve test cases in separate
//// processes in order to make it faster. I will update them to run on a
//// cluster if I get one ;)
//
