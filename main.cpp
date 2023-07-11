#include <iostream>
#include "AESApplication.h"
#include <fstream>
int main(){

    std::string PT="";
    std::ifstream file("../data.txt");
    if(file.is_open()){
        std::string line;
        while(std::getline(file,line)){
            PT += line;
        }
        file.close();
    }
    AESApplication app;

    std::string CT = app.encrypt(PT);
    //std::cout << CT <<std::endl;
    std::cout << app.decrypt(CT) <<std::endl;
    return 0;
}