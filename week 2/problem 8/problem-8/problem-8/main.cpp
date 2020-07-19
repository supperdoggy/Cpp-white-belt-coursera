//
//  main.cpp
//  problem-8
//
//  Created by Maks on 19.07.2020.
//  Copyright © 2020 Maks. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void come(vector<string>& v, int k){
    int c = v.size() + k;
    v.resize(c, "c");
    
}

void worry(vector<string>& v, int k){
    v[k] = "w";
}

void quiet(vector<string>& v, int k){
    v[k] = "c";
}

int worryCount(const vector<string>& v){
    int amount = 0;
    for (auto c: v){
        if (c == "w")
            amount++;
    }
    return amount;
}

int main(int argc, const char * argv[]) {
    // getting amount of commands
    int commandsAmount;
    cin >> commandsAmount;
    
    vector<string> people;
    
    // w - worry
    // c - calm
    
    for (int i = 0; i<commandsAmount; i++){
        string command;
        int k;
        cin >> command;
        
        if (command == "WORRY_COUNT"){
            cout << worryCount(people) << endl;
        }
        
        else if (command == "COME"){
            cin >> k;
            come(people, k);
        }
        
        else if (command == "WORRY"){
            cin >> k;
            worry(people, k);
        }
        
        else if (command == "QUIET"){
            cin >> k;
            quiet(people, k);
        }
            
    }
    
    return 0;
}
