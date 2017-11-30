//
//  main.cpp
//  WhileLoopCustom C++
//
//  Created by Eun Jae Lee on 30/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    int x = 0;
    int y;
    
    cout<<"Enter the number to print: \n";
    cin>> y;
    
    while (x<=y) {
        cout<< x<<"\n";
        x++;
    }
}
