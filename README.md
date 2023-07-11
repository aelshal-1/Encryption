# Encryption

This is an open Source C++ Project that help Developers to Encrypt/Decrypt JSON Data using AES .

## Features
* Encrypt
* Decrypt


## How To Use


```C++
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
```

here is the result
``` text
{"RESULT":{"RESPONSE_CODE":"00","RESPONSE_TEXT":"Approved","AUTH_CODE":"123456","RRN":"123456789012"},"CARD_INFO":{"PAN":"514437******9123","EXP":"**/**","HOLDER_NAME":"AHMED ELSHAL","ISSUER_NAME":"MASTERCARD"},"TRX_INFO":{"AMOUNT":"1000","TRX_SOURCE":"CTLS","PIN_MODE":"1","INVOICE_NUM":"000001","STAN":"000001","BATCH_NUM":"000001","EMV_INFO":{"APP_NAME":"VISA DEBIT","AID":"A000000041010","TVR":"0000048000","TSI":"E800","CVM_RESULT":"420300"},"DCC":{"DCC_TRX":"true","EXCHANGE_RATE":"117.48250","MARGIN":"5.25%","OTHER_CODE":"0840","OTHER_SYMBOLE":"USD","OTHER_AMOUNT":"10"},"EPP":{"EPP_TRX":"true","CAMPAIGN_NAME":"12A","PLAN":"12"}},"Terminal_Info":{"TID":"22930010","MID":"229301"}}
```