////
//// Created by jeevan on 4/16/17.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//string findNextWord(vector<string>& words, string input){
//
//    int index = -1;
//
//    for(int i = 0; i < words.size(); i++)
//        if( words[i].compare(input) > 0 && (index == -1 || words[i].compare(words[index]) <  0) )
//            index = i;
//
//    if(index == -1)
//        return "not";
//
//    return words[index];
//}
//
//
//int main() {
//
//
//    vector<string> words = {"Cat", "dog", "cow", "donkey", "zebra", "monkey"};
//    string input = "dog";
//    cout << findNextWord(words, input);
//    return 0;
//}
//
