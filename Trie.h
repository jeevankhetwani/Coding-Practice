//
// Created by jeevan on 1/10/17.
//

#ifndef TEST1_TRIE_H
#define TEST1_TRIE_H

#include<unordered_map>
#include<string>
#include<vector>

class TrieNode {

    char data;
    std::unordered_map<char, TrieNode*> children;
    bool terminates;

public:
    TrieNode() {}

    TrieNode(char ch) {
        data = ch;
    }

    char getData() {
        return data;
    }

    void addWord(std::string s) {

        if (s.empty())
            return;

        char firstChar = s[0];

        TrieNode* child = getChild(firstChar);

        if (child == nullptr) {
            child = new TrieNode(firstChar);
            children[firstChar] = child;
        }

        if (s.size() == 1)
            child->setTerminates(true);
        else
            child->addWord(s.substr(1));
    }

    void setTerminates(bool val) {
        terminates = val;
    }

    bool isTerminate() {
        return terminates;
    }

    TrieNode* getChild(char ch) {
        return children[ch];
    }

    std::unordered_map<char, TrieNode*>::const_iterator getBegin() {
        return children.begin();
    }

    std::unordered_map<char, TrieNode*>::const_iterator getEnd() {
        return children.end();
    }

};

class Trie {
    TrieNode* root;

public:
    Trie(std::vector<std::string> words) {
        root = new TrieNode();
        for (std::string word: words)
            root->addWord(word);
    }

    int match(std::string prefix, int k) {

        int matchedIndex = -1;
        TrieNode* curr = root;

        for(int i = k; i < prefix.size(); i++) {
            curr = curr->getChild(prefix[i]);

            if(curr == nullptr)
                break;

            if ( curr->isTerminate() )
                matchedIndex = i;

        }

        if (matchedIndex != -1)
            return matchedIndex - k + 1;

        return -1;

    }

    std::vector<int> firstPrefixWord(std::string s) {
        TrieNode* curr = root;
        std::vector<int> indices;

        for(int i = 0; i < s.size(); i++) {
            curr = curr->getChild(s[i]);

            if(curr == nullptr)
                break;

            if (curr->isTerminate())
                indices.push_back(i);
        }

        return indices;

    }

    bool contains(std::string prefix, bool exact = false) {
        TrieNode* curr = root;

        for(int i = 0; i < prefix.size(); i++) {
            curr = curr->getChild(prefix[i]);

            if(curr == nullptr)
                return false;
        }

        return !exact || curr->isTerminate();
    }

    TrieNode* getRoot() {
        return root;
    }

};

#endif //TEST1_TRIE_H
