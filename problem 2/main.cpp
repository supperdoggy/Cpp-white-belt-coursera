//
//  main.cpp
//  test
//
//  Created by Maks on 13.07.2020.
//  Copyright © 2020 Maks. All rights reserved.
//
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string strs[3];
    std::cin >> strs[0] >> strs[1] >> strs[2];
    std::cout << std::min({ strs[0], strs[1], strs[2] });
    return 0;
}
