////
//// Created by jeevan on 4/18/17.
////
//#include<iostream>
//#include <vector>
//#include <fstream>
//using namespace std;
//
//vector<string*> wordlist, possiblewords;
//
//void load_words(string filename) {
//
//    string line;
//    ifstream myfile (filename);
//
//    if (myfile.is_open())
//    {
//        while ( getline (myfile, line) )
//        {
//            wordlist.push_back(new string(line));
//        }
//        myfile.close();
//    }
//
//    else cout << "Unable to open file";
//}
//
//void init_game(string file) {
//
//    load_words(file);
//
//    possiblewords = wordlist;
//}
//
//string get_guess() {
//
//    if(possiblewords.empty())
//        return "";
//
//    string guess = *possiblewords[0];
//    possiblewords.erase(possiblewords.begin());
//
//    return guess;
//}
//
//int common_count(string word, string guess) {
//
//    int count = 0;
//
//    for(int i = 0; i < guess.size(); i++) {
//        int index = word.find(guess[i]);
//
//        if(index != string::npos) {
//            word[index] = '*';
//            count++;
//        }
//    }
//
//    return count;
//}
//
//void process_common_last(string guess, int num) {
//
//    for(vector<string*>::iterator itr = possiblewords.begin(); itr != possiblewords.end(); itr++)
//
//        if(common_count(**itr, guess) != num)
//            possiblewords.erase(itr);
//
//}
//
//void play_game() {
//
//    int count;
//    init_game("words.txt");
//
//    for(int i = 1; ; i++) {
//
//        string guess = get_guess();
//
//        if(guess == "") {
//            puts("empty list\n");
//            break;
//        }
//
//        printf("%d guess (words rem: %d) : %s\nEnter count: ", i, possiblewords.size(), guess.c_str());
//        scanf("%d", &count);
//
//        if(count == 6) {
//            puts("\nI win!");
//            break;
//        }
//
//        process_common_last(guess, count);
//    }
//}
//
//int  main() {
//
//    play_game();
//    return 0;
//}
