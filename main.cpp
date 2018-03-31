//
//  main.cpp
//  Csection
//
//  Created by James Baker on 3/21/18.
//  Copyright © 2018 James Baker. All rights reserved.
//


#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class evangeline{
public:
    void emmanuel();
};
void evangeline::emmanuel(){
    std::cout<<"public health";
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int x;
    int y;
    int z;
    std::cout << "Hello, World!\n";
    std::cout << argc << "\n";
    //getline(std::cin, y);
    std::cout << "y is "<< y << "\n" << argc << (x=30<<1)<< "\n";
    //getline(std::cin, z);
    std::cout << " z is "<< z <<"\n";
    for(int h=0;h!=100;h++){
        cout << h;
    }
    evangeline e;
    
    e.emmanuel();
    return 0;
}
