////
//// Created by jeevan on 4/20/17.
////
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Event {
//public:
//    int start, end;
//    string name;
//
//    Event(int a, int b, string s) : start(a), end(b), name(s) {}
//};
//
//bool compare(const Event& e1, const Event& e2) {
//    return e1.start < e2.start;
//}
//
//void findConflicts(vector<Event>& events) {
//
//    int n = events.size();
//    sort(events.begin(), events.end(), compare);
//    vector<string> temp {events[0].name};
//    vector<vector<string>> conflicts;
//
//    int end1 = events[0].end;
//
//    for(int i = 1; i < n; i++) {
//
//        int start2 = events[i].start;
//        int end2 = events[i].end;
//        string name2 = events[i].name;
//
//        if( start2 >= end1 ) {
////            no conflict so reset
//            if(temp.size() > 1)
//                conflicts.push_back(temp);
//
//            temp.clear();
//        }
//
//        temp.push_back(name2);
//        end1 = max(end1, end2);
//    }
//
//    if(temp.size() > 1)
//        conflicts.push_back(temp);
//
//    for(int i = 0; i < conflicts.size(); i++) {
//        for (int j = 0; j < conflicts[i].size(); j++)
//            cout << conflicts[i][j] << " ";
//
//        cout << endl;
//    }
//
//}
//
//
//int main() {
//
//    vector<Event> events { Event(13, 14, "H"), Event(13, 14, "G"), Event(10, 12, "F"),
//                            Event(8, 11, "E"), Event(7, 10, "D"), Event(4, 6, "C"),
//                            Event(3, 5, "B"), Event(1, 2, "A") };
//
//    findConflicts(events);
//
//
//    return 0;
//}
