//
//  main.cpp
//  problem-4
//
//  Created by Maks on 14.07.2020.
//  Copyright © 2020 Maks. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    float a, b, c;
    cin >> a >> b >> c;
    // Ax² + Bx + C = 0
    
    // if a != 0 then its regular sqr
    if (a!=0){
        float D = pow(b, 2) - 4 * a * c;
        if (D>0){
            float x[2];
            x[0] = (-(b) + sqrt(D)) / (2*a);
            x[1] = (-(b) - sqrt(D)) / (2*a);
            cout << x[0] << " " << x[1];
        }
        else if (D==0){
            float x = -b/(2*a);
            cout << x;
        }
    }
    // if a==0 then its regular linear
    else if (a==0 && b!=0){
        if (c==0){
            cout << 0;
        }
        else{
            float x = -c/b;
            cout << x;
        }
    
    }
    // if a==b==c==0 then its just 0
    else if (a==0 && b==0 && c==0){
        cout << 0;
    }
    
    return 0;
}
