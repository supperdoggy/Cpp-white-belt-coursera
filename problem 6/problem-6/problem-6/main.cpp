//
//  main.cpp
//  problem-6
//
//  Created by Maks on 15.07.2020.
//  Copyright © 2020 Maks. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    cin >> a >> b;
    while (a > 0 && b > 0) {
        if (a > b) {
            a %= b;
        }
        else{
            b %= a;
        }
    }
    cout << a+b;
    return 0;
}
