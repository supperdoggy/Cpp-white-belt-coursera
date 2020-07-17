//
//  main.cpp
//  problem-3
//
//  Created by Maks on 17.07.2020.
//  Copyright © 2020 Maks. All rights reserved.
//

#include <iostream>
using namespace std;

// tried to use int& first, but it failed the test so nvrmd
void UpdateIfGreater(int first, int& second){
    if (first>second)
        second = first;
}

int main(int argc, const char * argv[]) {
    int a = 4;
    int b = 2;
    UpdateIfGreater(a, b);
    return 0;
}
