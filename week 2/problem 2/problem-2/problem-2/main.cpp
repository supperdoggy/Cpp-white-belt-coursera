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

string lower(string s){
    string newS = "";
    for (auto c: s){
        newS += tolower(c);
    }
    return newS;
}

void print(vector<string> s){
    for (auto c: s){
        cout << c << ", ";
    }
}

vector<string> PalindromFilter(vector<string> words, int minLength){
    vector<string> ready;
    for (auto s: words){
        if (s.size()>=minLength){
            s = lower(s);
            int h = s.size() - 1;
            int l = 0;
            bool palindrome = true;
            while (h > l)
            {
                if (s[l++] != s[h--]){
                    palindrome = false;
                    break;
                }
            }
            if (palindrome) {
                ready.push_back(s);
            }
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
