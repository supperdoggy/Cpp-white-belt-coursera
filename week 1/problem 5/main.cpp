//
//  main.cpp
//  problem-5
//
//  Created by Maks on 15.07.2020.
//  Copyright © 2020 Maks. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    int quantity = 0;
    for (int i = 0; i<s.length();i++){
        if (s[i] == 'f'){
            quantity++;
        }
        if (quantity == 2){
            cout << i;
            break;
        }
    }
    switch (quantity) {
        case 1:
            cout << -1;
            break;
        case 0:
            cout << -2;
        default:
            break;
    }
    return 0;
}
