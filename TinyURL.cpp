////
//// Created by jeevan on 5/3/17.
////
//#include <iostream>
//#include <queue>
//#include <unordered_map>
//
//using namespace std;
//
//class TinyUrl {
//
//public:
//    int codeLen;
//    string currCode;
//    string host;
//    unordered_map<string, string> url2code, code2url;
//
//    TinyUrl(int n, string url) {
//        codeLen = n;
//        host = url;
//        currCode = string(codeLen, '0');
//    }
//
//    char nextChar(char c) {
//
//        if(c == '9')
//            return 'a';
//        else if(c == 'z')
//            return 'A';
//
//        return c + 1;
//    }
//
//    void nextCode() {
//
//        int i = codeLen - 1;
//
//        while(i >= 0 && currCode[i] == 'Z')
//            i--;
//
//        if(i < 0) {
//            cout << "Code exhausted";
//            return;
//        }
//
//        currCode[i] = nextChar(currCode[i]);
//        currCode.replace(i + 1, codeLen - i - 1, codeLen - i - 1, '0');
//    }
//
//    void encode(string url) {
//
//        url = url.substr(host.length());
//
//        if(url2code.find(url) != url2code.end()) {
//            cout << "Already coded to " << url2code[url];
//            return;
//        }
//
//        url2code[url] = currCode;
//        code2url[currCode] = url;
//
//        printf("%s coded to %s\n", url.c_str(), currCode.c_str());
//        nextCode();
//    }
//
//    string decode(string code) {
//        code  = code.substr(host.length());
//
//        if(code2url.find(code) == url2code.end())
//            return host;
//
//        return host + code2url[code];
//    }
//};
//
//
//
//int main() {
//
//    string url;
//    TinyUrl t(4, "www.tinyurl.com/");
//
//    int op ;
//
//    while(true) {
//
//        cout << "enter 1 to code, 2 to decode\n";
//        cin >> op;
//
//        if (op == -1)
//            break;
//
//        cout << "enter url\n";
//        cin >> url;
//
//        if(op == 1)
//            t.encode(url);
//        else
//            cout << t.decode(url) << endl;
//    }
//
//    return 0;
//}
