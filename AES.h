#pragma once
#include "Cryptography.h"



class AES : public Cryptography{

    struct RoundsKeyObj{
	    unsigned char _roundKes[4][4];
    };

    unsigned char _currentMatrix[4][4];
	RoundsKeyObj RoundsKeys[11];

    int Hex2Dec(char Hex);
	int Sum2Hex(unsigned char Hex1, unsigned char Hex2);

    void Keygenration(unsigned char* Key);


    void AddRoundKey(int RoundNum);
    void SubstituteByte();
    void inverseSubstituteByte();
    void ShiftRows();
    void inverseShiftRows();
    void MixCols();
    void inverseMixCols();
	void Round(int index);
	void InverseRound(int index);
    
public:
    AES();

    std::string encrypt(const std::string& data) override;
    std::string decrypt(const std::string& data) override;
};