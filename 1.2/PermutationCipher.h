#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class PermutationCipher
{
private:
    int k;
public:
    PermutationCipher()=delete;
    PermutationCipher(int a);
    wstring CoderPermutationCipher(PermutationCipher w, wstring& s);
    wstring DecoderPermutationCipher(PermutationCipher w, wstring& s);
};
