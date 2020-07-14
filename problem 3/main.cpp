//
//  main.cpp
//  problem-3
//
//  Created by Maks on 14.07.2020.
//  Copyright © 2020 Maks. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int nums[2];
    cin >> nums[0] >> nums[1];
    if (nums[1]==0){
        cout << "Impossible";
    }
    else{
        cout << nums[0]/nums[1];
    }
    
    return 0;
}
