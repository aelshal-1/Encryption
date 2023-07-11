#include "AESApplication.h"
#include "AES.h"
CryptographyPtr AESApplication::Create(){
    return std::make_unique<AES>();
}