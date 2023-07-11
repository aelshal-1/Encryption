#include "Application.h"

std::string Application::encrypt(const std::string& data){
    if(cryptography == nullptr)
        cryptography = Create();
    return cryptography->encrypt(data);
}

std::string Application::decrypt(const std::string& data){
    if(cryptography == nullptr)
        cryptography = Create();
    return cryptography->decrypt(data);
}