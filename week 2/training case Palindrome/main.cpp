//
//  main.cpp
//  test-case
//
//  Created by Maks on 17.07.2020.
//  Copyright © 2020 Maks. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

bool IsPalindrom(string s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    cout << IsPalindrom(s);
    
    return 0;
}
