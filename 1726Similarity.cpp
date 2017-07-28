////
//// Created by jeevan on 1/21/17.
////
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <set>
//
//using namespace std;
//
//class Document {
//    int id;
//    vector<int> list;
//
//public:
//    Document(int i, vector<int> a) {
//        id = i;
//        list = a;
//    }
//
//    int getID() { return id; }
//
//    vector<int> getItems() { return list; }
//
//    int getNumItems() { return list.size(); }
//};
//
//class Similarity {
//    int id1, id2;
//    float val;
//
//public:
//    Similarity(int d1, int d2) {
//        id1 = d1;
//        id2 = d2;
//        val = 0;
//    }
//
//    Similarity(int d1, int d2, float v) {
//        id1 = d1;
//        id2 = d2;
//        val = v;
//    }
//
//    void display() const {
//        cout << id1 << " ~ " << id2 << " = " << val;
//    }
//
//
//    bool operator< (const Similarity& s) const {
//        return ! ( ( id1 == s.id1 && id2 == s.id2 )  || ( id1 == s.id2 && id2 == s.id1 ) );
//    }
//
//
//};
//
//void createDocMap(unordered_map<int, Document*>& docMap, vector<Document*>& list) {
//    for (int i = 0; i < list.size(); i++) {
//        Document *curr = list[i];
//        docMap[curr->getID()] = curr;
//    }
//}
//
//void createElemMap(unordered_map<int, vector<int>*>& elemMap, vector<Document*>& list) {
//
//    for (int i = 0; i < list.size(); i++) {
//
//        Document *curr = list[i];
//        int id = curr->getID();
//        vector<int> elem = curr->getItems();
//
//        for (int j = 0; j < elem.size(); j++) {
//
//            if ( elemMap.find(elem[j]) == elemMap.end() )
//                elemMap[ elem[j] ] = new vector<int>();
//
//            elemMap[ elem[j] ]->push_back(id);
//
//        }
//
//    }
//}
//
//void createDocSimilMap(unordered_map<int, unordered_map<int, int>*>& docSimilMap,
//                       unordered_map<int, vector<int>*>& elemMap) {
//
//    unordered_map<int, vector<int>*>::const_iterator itr = elemMap.begin();
//
//    unordered_map<int, int>* mymap;
//
//    while (itr != elemMap.end() ) {
//
//        vector<int> *list = itr->second;
//
//        for (int i = 0; i < list->size(); i++) {
//
//            int currDoc = list->at(i);
//
//            if ( docSimilMap.find(currDoc) == docSimilMap.end())
//                docSimilMap[currDoc] = new unordered_map<int, int>;
//
//            mymap = docSimilMap[currDoc];
//
//            for (int j = 0; j < list->size(); j++) {
//
//                if (i == j)
//                    continue;
//
//                int similDoc = list->at(j);
//
//                if ( mymap->find(similDoc) == mymap->end() )
//                    (*mymap) [similDoc] = 1;
//                else
//                    (*mymap) [similDoc] += 1;
//            }
//
//        }
//
//        itr++;
//    }
//}
//
//float calcSimil(int size1, int size2, int interCnt) {
//
//    int unionCnt = size1 + size2 - interCnt;
//
//    return (float) interCnt / unionCnt;
//}
//
//void calcSimilSet(set<Similarity>& similSet, unordered_map<int, Document*>& docMap,
//                  unordered_map<int, unordered_map<int, int>*> docSimilMap) {
//
//    unordered_map<int, unordered_map<int, int>*>::const_iterator itr1 = docSimilMap.begin();
//
//    while( itr1 != docSimilMap.end() ) {
//
//        int currDoc = itr1->first;
//
//        unordered_map<int, int> *similDocs = itr1->second;
//
//        unordered_map<int, int>::const_iterator itr2 = similDocs->begin();
//
//        while ( itr2 != similDocs->end() ) {
//
//            int nextDoc = itr2->first;
//            int common = itr2->second;
//
//            if ( similSet.find(Similarity(currDoc, nextDoc)) == similSet.end()) {
//                float simil = calcSimil(docMap[currDoc]->getNumItems(), docMap[nextDoc]->getNumItems(), common);
//                similSet.insert(Similarity(currDoc, nextDoc, simil));
//            }
//
//            itr2++;
//        }
//
//        itr1++;
//    }
//
//}
//
//set<Similarity> find(vector<Document*>& list) {
//
//    unordered_map<int, Document*> docMap;
//    unordered_map<int, vector<int>*> elemMap;
//    unordered_map<int, unordered_map<int, int>*> docSimilMap;
//    set<Similarity> similSet;
//
//    createDocMap(docMap, list);
//    createElemMap(elemMap, list);
//    createDocSimilMap(docSimilMap, elemMap);
//
//    calcSimilSet(similSet, docMap, docSimilMap);
//
//    set<Similarity>::const_iterator itr = similSet.begin();
//
//    while ( itr != similSet.end() ) {
//        itr->display();
//        cout << endl;
//        itr++;
//    }
//
//
//    return similSet;
//}
//
//int main() {
//
//    Document *d1 = new Document(13, vector<int> {14, 15, 100, 9, 3});
//    Document *d2 = new Document(16, vector<int> {32, 1, 9, 3, 5});
//    Document *d3 = new Document(19, vector<int> {15, 29, 2, 6, 8, 7});
//    Document *d4 = new Document(24, vector<int> {7, 10});
//
//    vector<Document*> list {d1, d2, d3, d4};
//    find(list);
//    return 0;
//}
