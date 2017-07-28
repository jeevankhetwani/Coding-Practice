////
//// Created by jeevan on 1/2/17.
////
//#include<iostream>
//#include<unordered_map>
//#include<string>
//
//using namespace std;
//
//int countEval(string exp, int val, unordered_map<string, int>* map) {
//    int cnt = 0;
//    string left, right;
//
//    if (exp.size() == 1)
//        return exp == to_string(val);
//
//    if (map->find(to_string(val) + exp) != map->end())
//        return (*map)[to_string(val) + exp];
//
//
//    for(int i = 1; i < exp.size(); i += 2) {
//        left = exp.substr(0, i);
//        right = exp.substr(i+1);
//
//        if (val)
//            switch (exp[i]) {
//                case '&':
//                    cnt += countEval(left, true, map) * countEval(right, true, map);
//                    break;
//
//                case '|':
//                    cnt += countEval(left, false, map) * countEval(right, true, map)
//                          + countEval(left, true, map) * countEval(right, false, map)
//                          + countEval(left, true, map) * countEval(right, true, map);
//                    break;
//
//                case '^':
//                    cnt += countEval(left, false, map) * countEval(right, true, map) +
//                          countEval(left, true, map) * countEval(right, false, map);
//                    break;
//            }
//        else
//            switch (exp[i]) {
//                case '&':
//                    cnt += countEval(left, false, map) * countEval(right, true, map)
//                          + countEval(left, true, map) * countEval(right, false, map)
//                          + countEval(left, false, map) * countEval(right, false, map);
//                    break;
//
//                case '|':
//                    cnt += countEval(left, false, map) * countEval(right, false, map);
//                    break;
//
//                case '^':
//                    cnt += countEval(left, false, map) * countEval(right, false, map) +
//                          countEval(left, true, map) * countEval(right, true, map);
//                    break;
//            }
//
//    }
//
//    (*map)[to_string(val) + exp] = cnt;
//    return cnt;
//}
//
//
//
//int countEval(string exp, int val){
//    unordered_map<string, int> map;
//    return countEval(exp, val, &map);
//
//}
//
//
//int main() {
//
//    cout << countEval("0&0&0&1^0&0&0&1|0", false);
//    return 0;
//}
//
