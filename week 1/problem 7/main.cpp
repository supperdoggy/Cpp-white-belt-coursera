//
//  main.cpp
//  problem-7
//
//  Created by Maks on 15.07.2020.
//  Copyright © 2020 Maks. All rights reserved.
//

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    int num;
    cin >> num;
    vector<int> b;
    
    for (int i=0; num>0; i++) {
        b.push_back(num%2);
        num /= 2;
    }
    
    reverse(begin(b), end(b));
    
    for (auto n : b){
        cout << n;
    }
    return 0;
}
