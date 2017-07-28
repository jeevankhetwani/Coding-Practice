////
//// Created by jeevan on 2/15/17.
////
////#include <iostream>
////#include <vector>
////#include <algorithm>
////
////#define rep(i, n) for(int i = 0; i < n; i++)
////#define fi(i, a, b) for(int i = a; i <= b; i++)
////
////using namespace std;
////
////class city {
////
////public:
////    int lat, longt, height, points;
////
////    city() {}
////    city(int l, int lt, int h, int p) : lat(l), longt(lt), height(h), points(p)  {}
////
////    bool operator<( const city& c) const {
////        return height < c.height;
////    }
////};
////
////int n, x, y;
////city cities[200005];
////
////bool check(int last, int curr) {
////
////    if(last == -1)
////        return true;
////
////    return ( abs(cities[last].lat - cities[curr].lat) <= x &&
////            abs(cities[last].longt - cities[curr].longt) <= y ) ;
////}
////int main() {
//
////    int l, lt, h, p;
////
////    cin >> n >> x >> y;
////
////    rep(i, n) {
////        cin >> l >> lt >> h >> p;
////        cities[i] = city(l, lt, h, p);
////    }
////
////    sort(cities, cities + n);
////
////    unsigned long sum = 0, mymax = 0;
////
////    int last = -1;
////
////    rep(i, n) {
////
////        if (sum + cities[i].points >= 0 && check(last, i)) {
////            sum += cities[i].points;
////            last = i;
////
////            if( sum > mymax )
////                mymax = sum;
////        } else {
////            sum = 0;
////            last = -1;
////        }
////    }
////
////    cout << mymax;
////    cout << sizeof(int) << " " << sizeof(long int) << " " << sizeof(long long int) << sizeof(ssize_t) << endl;
////    cout << sizeof(float) << " "<< sizeof(double) << " " << sizeof(long double);
////    return 0;
////}
//
//#include <sys/socket.h>
//#include <arpa/inet.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//#include <zconf.h>
//#include <signal.h>
//
//void error(char *msg) {
//    fprintf(stderr, "%s: %s\n", msg, strerror(errno));
//    exit(1);
//}
//
//int open_listener_socket() {
//
//    int l = socket(PF_INET, SOCK_STREAM, 0);
//
//    if(l == -1)
//        error("Cant open socket");
//
//    return l;
//}
//
//void bind_to_port(int socket, int port) {
//
//    struct sockaddr_in name;
//    name.sin_family = PF_INET;
//    name.sin_port = (in_port_t)htons(port);
//    name.sin_addr.s_addr = htonl(INADDR_ANY);
//
//    int resuse = 1;
//    if(setsockopt(socket, SOL_SOCKET, SO_REUSEADDR, (char *) &resuse, sizeof(int)) == -1)
//        error("cant set resuse option");
//
//    int c = bind(socket, (struct sockaddr *) &name, sizeof(name));
//
//    if(c == -1)
//        error("cant bind to socket");
//
//    if(listen(socket, 10) == -1)
//        error("Cant listen");
//}
//
//int say(int socket, char *s) {
//
//
//    int result = send(socket, s, strlen(s), 0);
//
//    if(result == -1)
//        error("cant send");
//
//    return result;
//}
//
//int listener_d;
//
//void handle_shutdown(int signal) {
//
//    if(listener_d)
//        close(listener_d);
//
//    fprintf(stderr, "Bye!\n");
//    exit(0);
//}
//
//int read_in(int socket, char *buf, int len) {
//
//    char *s = buf;
//    int slen = len;
//
//    int c = recv(socket, s, slen, 0);
//
//    while( (c > 0) && (s[c-1] != '\n')) {
//        s += c;
//        slen -= c;
//        c = recv(socket, s, slen, 0);
//    }
//
//    if( c < 0)
//        return c;
//    else if(c == 0)
//        buf[0] = '\0';
//    else
//        s[c-1] = '\0';
//    return len - slen;
//}
//
//int main(int argc, char *argv[]) {
//
////    if(catch_signal(SIGINT, handle_shutdown) == -1)
////        error("cant set handler");
//
//    listener_d = open_listener_socket();
//    bind_to_port(listener_d, 30000);
//
//    struct sockaddr_storage client_addr;
//    unsigned int address_size = sizeof(client_addr);
//
//    puts("waiting for connection");
//    char buf[255];
//    while(1) {
//        int connect_d = accept(listener_d, (struct sockaddr *) &client_addr, &address_size);
//
//        if (connect_d == -1)
//            error("cant open secondary socket");
//
//        if(say(connect_d, "Internet Knock-Knock\r\n") != -1) {
//            read_in(connect_d, buf, sizeof(buf));
//
//            if(strncasecmp("Who's there?", buf, 12))
//                say(connect_d, "You shud say 'Who's there?'!");
//            else {
//                if(say(connect_d, "Oscar\r\n") != -1) {
//                    read_in(connect_d, buf, sizeof(buf));
//
//                    if(strncasecmp("Oscar Who?", buf, 10))
//                        say(connect_d, "you shud say 'Who Oscar?\r\n");
//                    else
//                        say(connect_d, "Popot\r\n");
//                }
//            }
//        }
//        close(connect_d);
//    }
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
