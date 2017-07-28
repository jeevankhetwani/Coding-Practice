////
//// Created by jeevan on 1/16/17.
////
//#include<iostream>
//#include<vector>
//#include <set>
//
//using namespace std;
//class person {
//    int height, width;
//
//public:
//    person() {}
//
//    person(int h, int w) {
//        height = h;
//        width = w;
//    }
//
//    int getHeight() { return height; }
//    int getWidth() { return width; }
//
//    bool isSmaller(person* p) const {
//        return height < p->height && width < p->width;
//    }
//
//    void display() {
//        cout << height << "," << width << " ";
//    }
//};
//
//vector<int> max(vector<person*>& list, vector<int> prefix) {
//
//    int maxSize = 0, maxIndex = -1;
//    vector<int> maxList, tempList;
//
//    set<int> setPrefix (prefix.begin(), prefix.end());
//
//    for (int i = 0; i < list.size(); i++) {
//
//        if (setPrefix.find(i) != setPrefix.end())
//            continue;
//
//        person *p = list[i];
//
//        if ( prefix.empty() || p->isSmaller  ( list[ prefix.back() ] ) ) {
//
//            prefix.push_back(i);
//
//            tempList = max(list, prefix);
//
//            if ( tempList.size() > maxSize ) {
//                maxIndex = i;
//                maxList = tempList;
//                maxSize = maxList.size();
//            }
//
//            prefix.erase(prefix.end() - 1);
//
//        }
//    }
//
//
//    if (maxIndex != -1)
//        maxList.insert(maxList.begin(), maxIndex);
//
//    return maxList;
//}
//
//int main() {
//
//    vector<person*> list ({
//                                  new person(65, 100), new person(70, 150), new person(56, 90), new person(75, 190),
//                                  new person(60, 95), new person(68, 110)
//                          });
//
//    vector<int> order =  max(list, vector<int> ());
//    for (int i = 0; i < order.size(); i++)
//        list[order[i]]->display();
//    return 0;
//}
