#include<iostream>
#include <string>
#include "decrypt.h"
using namespace std;



std::string decryptVigenere(std::string cipherText, std::string keyword)
{
std::string r = "";

char c;
int p = 0, key;



for(int k = 0; k < cipherText.length(); ++k)
{
c = cipherText[k];

if(c >= 'A' && c <= 'Z')
{
key = keyword[p] - 'a';
p = (p + 1) % keyword.length();
c = 'A' + (c - 'A' - key + 26) %26;
}
if(c >= 'a' && c <= 'z')
{
key = keyword[p] - 'a';
p = (p + 1) % keyword.length();
c = 'a' + (c - 'a' - key + 26) %26;
}
r += c;
}
return r;

}
