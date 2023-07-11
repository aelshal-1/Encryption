#pragma once
#include <string>
class Cryptography{

public:
    virtual std::string encrypt(const std::string& data) = 0;
    virtual std::string decrypt(const std::string& data) = 0;
};