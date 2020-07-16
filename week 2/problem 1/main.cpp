//
//  main.cpp
//  problem-1
//
//  Created by Maks on 16.07.2020.
//  Copyright © 2020 Maks. All rights reserved.
//

#include <iostream>
using namespace std;

int Factorial(int x){
    int result = 1;
    if (x >= 2){
        for (x;x!=1;x--){
            result *= x;
        }
        return result;
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    int x;
    cin >> x;
    cout << Factorial(x);
    return 0;
}
