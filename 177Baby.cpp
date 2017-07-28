////
//// Created by jeevan on 1/16/17.
////
//#include<iostream>
//#include<unordered_map>
//#include<string>
//#include<vector>
//#include <set>
//
//using namespace std;
//
//class synonyms {
//    unordered_map<string, set<string>*> mymap;
//
//public:
//    synonyms(unordered_map<string, string> pairs) {
//        set<string> *set1, *set2;
//        unordered_map<string, string>::const_iterator itr = pairs.begin();
//
//        while ( itr != pairs.end() ) {
//
//            if ( mymap.find(itr->first) == mymap.end() && mymap.find(itr->second) == mymap.end() ) {
//
//                set<string>* newSet  = new set<string> ( {itr->first, itr->second} );
//                mymap[itr->first] = mymap[itr->second] = newSet;
//
//            } else if ( mymap.find(itr->first) == mymap.end() && mymap.find(itr->second) != mymap.end() ) {
//                set1 = mymap[itr->second];
//                set1->insert(itr->first);
//                mymap[itr->first] = set1;
//            } else if ( mymap.find(itr->first) != mymap.end() && mymap.find(itr->second) == mymap.end() ) {
//                set1 = mymap[itr->first];
//                set1->insert(itr->second);
//                mymap[itr->second] = set1;
//            } else {
//                set1 = mymap[itr->first];
//                set2 = mymap[itr->second];
//                set1->insert(set2->begin(), set2->end());
//
//                set<string>::const_iterator itr2 = set2->begin();
//
//                while ( itr2 != set2->end() ) {
//                    mymap[*itr2] = set1;
//                    itr2++;
//                }
//            }
//            itr++;
//        }
//
//    }
//
//    unordered_map<string, int> count(unordered_map<string, int>& freq ) {
//        unordered_map<string, int> newFreq;
//        bool flag;
//
//        unordered_map<string, int>::const_iterator itr = freq.begin();
//
//        while ( itr != freq.end() ) {
//
//            if ( mymap.find(itr->first) == mymap.end() )
//                newFreq[itr->first] = itr->second;
//            else {
//                flag = true;
//                set<string> *temp = mymap[itr->first];
//                set<string>::const_iterator itr2 = temp->begin();
//
//                while ( itr2 != temp->end() ) {
//                    if ( newFreq.find(*itr2) != newFreq.end() ) {
//                        newFreq[*itr2] += itr->second;
//                        flag = false;
//                        break;
//                    }
//                    itr2++;
//                }
//
//                if (flag)
//                    newFreq[itr->first] = itr->second;
//
//            }
//            itr++;
//        }
//
//        return newFreq;
//    };
//
//};
//
//int main() {
//
//    unordered_map<string, string> syn ({
//                                               {"Jonathon", "John"}, {"Jon", "Johnny"}, {"Johnny", "John"},
//                                               {"Karl", "Carrie"}, {"Carleton", "Carlton"}
//                                       });
//
//
//    unordered_map<string, int> freq ({
//                                             {"John", 10}, {"Jon", 3}, {"Davis", 2}, {"Karl", 3},
//                                             {"Johnny", 11}, {"Carlton", 8}, {"Carleton", 2},
//                                             {"Jonathon", 2}, {"Carrie", 5}
//                                     });
//
//    synonyms synm (syn);
//    unordered_map<string, int> newFreq = synm.count(freq);
//    unordered_map<string, int>::iterator itr = newFreq.begin();
//
//    while ( itr != newFreq.end() ) {
//        cout << itr->first << " " << itr->second;
//        cout << endl;
//        itr++;
//    }
//
//    return 0;
//}
