////
//// Created by jeevan on 1/27/17.
////
//#include <iostream>
//#include <unordered_map>
//#include <vector>
//
//using namespace std;
//
//class Track {
//
//public:
//    unsigned long c1, c2;
//
//    Track(unsigned long c1, unsigned long c2) : c1(c1), c2(c2) {}
//
//    void set(unsigned long c1, unsigned long c2) {
//        this->c1 = c1;
//        this->c2 = c2;
//    }
//
//    unsigned long getLen() {
//        return c2 - c1 + 1;
//    }
//};
//
//
//bool overlap(Track* t1, Track* t2) {
//
//    if ( t1->c2 < t2->c1 || t2->c2 < t1->c1 )
//        return false;
//
//    return true;
//}
//
//void addTrack( unordered_map<int, vector<Track*>*>& mymap, unsigned long r, unsigned long c1, unsigned long c2 ) {
//
//    if ( mymap.find(r) == mymap.end()) {
//        mymap[r] = new vector<Track *> {new Track(c1, c2)};
//        return;
//    }
//
//    Track* newTrack = new Track(c1, c2);
//    vector<Track*>* tracks = mymap[r];
//
//    vector<Track*>::iterator itr = tracks->begin();
//
//    while(itr != tracks->end()) {
//
//        Track* curr = *itr;
//
//        if (overlap(curr, newTrack)) {
//            newTrack->set(min(curr->c1, newTrack->c1), max(curr->c2, newTrack->c2));
//            itr = tracks->erase(itr);
//        } else
//            itr++;
//    }
//
//    tracks->push_back(newTrack);
//}
//
//
//unsigned long getTracksLen(unordered_map<int, vector<Track*>*>& mymap) {
//
//    unsigned long sum = 0;
//    unordered_map<int, vector<Track*>*>::const_iterator itr1 = mymap.begin();
//
//    while( itr1 != mymap.end() ) {
//
//        vector<Track*>* tracks = itr1->second;
//
//        vector<Track*>::const_iterator itr2 = tracks->begin();
//
//        while ( itr2 != tracks->end()) {
//
//            sum += (*itr2) -> getLen();
//            itr2++;
//        }
//
//        itr1++;
//    }
//
//    return sum;
//}
//
//unsigned long getNum(unsigned long m, unsigned long n, int k) {
//
//    unsigned long r, c1, c2;
//    unordered_map<int, vector<Track*>*> mymap;
//
//    for (int i = 0; i < k; i++) {
//        cin >> r >> c1 >> c2;
//        addTrack(mymap, r - 1, c1 - 1, c2 - 1);
//    }
//
//    unsigned long trackLen = getTracksLen(mymap);
//
//    return m * n - trackLen;
//}
//
//int main() {
//
//    unsigned long m, n;
//    int k;
//
//    cin >> m >> n >> k;
//    cout << getNum(m, n, k);
//
//
//    return 0;
//}
//
//
