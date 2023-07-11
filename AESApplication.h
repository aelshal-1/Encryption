#pragma once
#include "Application.h"

class AESApplication :public Application{
    public:
        CryptographyPtr Create();
};