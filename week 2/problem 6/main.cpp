//
//  main.cpp
//  problem-5
//
//  Created by Maks on 17.07.2020.
//  Copyright © 2020 Maks. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Reversed(const vector<int>& v){
    auto newv = v;
    reverse(newv.begin(),newv.end());
    return newv;
}

int main(int argc, const char * argv[]) {
    return 0;
}
