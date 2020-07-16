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
        if (s.size()>=minLength && IsPalindrom(s)){
                ready.push_back(s);
        }
    }
    return ready;
}

int main(int argc, const char * argv[]) {
    return 0;
}
