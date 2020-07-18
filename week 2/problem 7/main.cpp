//
//  main.cpp
//  proble-7
//
//  Created by Maks on 18.07.2020.
//  Copyright © 2020 Maks. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>

void inputVector(std::vector<int>& temp){
    for (int& d : temp) {
        std::cin >> d;
    }
}

std::vector<int> getDaysWithHigherAVGtemp(const std::vector<int>& temp){
    std::vector<int> days;
    auto avrg = accumulate(temp.begin(),temp.end(),0)/temp.size();
    for (int i = 0;i<temp.size();i++){
        if (temp[i] > avrg)
            days.push_back(i);
    }
    return days;
}

void print(const std::vector<int>& days){
    std::cout << days.size() << std::endl;
    for (auto d: days) {
        std::cout << d << " ";
    }
}

int main(int argc, const char * argv[]){
    int k;
    std::cin >> k;
    
    std::vector<int> temp(k);
    
    inputVector(temp);
    
    auto days = getDaysWithHigherAVGtemp(temp);
    print(days);
    
    return 0;
}
