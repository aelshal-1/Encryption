#pragma once
#include "Cryptography.h"
#include <memory>

using CryptographyPtr = std::unique_ptr<Cryptography>;

class Application{
    CryptographyPtr cryptography;
    public:
    std::string encrypt(const std::string& data);
    std::string decrypt(const std::string& data);
    
    virtual CryptographyPtr Create(){return nullptr;}
};
