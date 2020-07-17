//
//  main.cpp
//  problem-4
//
//  Created by Maks on 17.07.2020.
//  Copyright © 2020 Maks. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
void MoveStrings(vector<string>& source, vector<string>& destination){
    for (auto s: source){
        destination.push_back(s);
    }
    source.clear();
}

int main(int argc, const char * argv[]) {
    return 0;
}
