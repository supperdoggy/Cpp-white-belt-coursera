//
//  main.cpp
//  problem-2
//
//  Created by Maks on 16.07.2020.
//  Copyright © 2020 Maks. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<string> s){
    for (auto c: s){
        cout << c << ", ";
    }
}

bool IsPalindrom(string s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

vector<string> PalindromFilter(vector<string> words, int minLength){
    vector<string> ready;
    for (auto s: words){
        if (s.size()>=minLength){
            if (IsPalindrom(s))
                ready.push_back(s);
        }
    }
    if (ready.size()>0)
        return ready;
    else
        return words;
}

int main(int argc, const char * argv[]) {
    vector<string> s = {"HELLO", "code", "aba", "weew", "bro"};
    print(PalindromFilter(s, 2));
    return 0;
}
