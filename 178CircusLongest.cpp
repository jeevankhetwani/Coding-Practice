////
//// Created by jeevan on 1/16/17.
////
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//
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
//    int getHeight() const { return height; }
//    int getWidth() const { return width; }
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
//struct {
//    bool operator() (const person* a, const person* b) {
//        return a->getHeight() < b->getHeight();
//    }
//} compare;
//
//vector<int> findLongest(vector<person*>& list) {
//    vector<int> len (list.size());
//    vector<int> parent (list.size());
//
//    for (int i = 0; i < list.size(); i++) {
//        len[i] = 0;
//        parent[i] = -1;
//    }
//
//    len[0] = 1;
//    int maxLen, maxIndex;
//
//    for (int i = 1; i < list.size(); i++) {
//
//        maxLen = 0;
//        maxIndex = -1;
//
//        for (int j = i - 1; j >= 0; j--) {
//
//            if ( list[i]->getWidth() > list[j]->getWidth() ) {
//
//                if (maxLen < len[j]) {
//                    maxLen = len[j];
//                    maxIndex = j;
//                }
//            }
//        }
//
//        parent[i] = maxIndex;
//        len[i] = maxLen + 1;
//
//    }
//
//    maxIndex = 0;
//
//    for (int i = 1; i < len.size(); i++) {
//        if (len[i] > len[maxIndex] )
//            maxIndex = i;
//    }
//
//    vector<int> indices;
//
//    while ( maxIndex != -1 ) {
//        indices.insert(indices.begin(), maxIndex);
//        maxIndex = parent[maxIndex];
//    }
//
//    return indices;
//
//}
//
//int main() {
//    vector<person*> list ({
//                                  new person(65, 100), new person(70, 150), new person(56, 90), new person(75, 190),
//                                  new person(60, 95), new person(68, 110)
//                          });
//
//    sort(list.begin(), list.end(), compare);
////    for (int i = 0; i < list.size(); i++)
////        list[i]->display();
//
//
//    vector<int> indices = findLongest(list);
//
//    for (int i = 0;i < indices.size(); i++)
//        list[indices[i]]->display();
//
//    return 0;
//}
//
