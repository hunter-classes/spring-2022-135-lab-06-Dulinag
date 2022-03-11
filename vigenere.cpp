#include<iostream>
#include "vigenere.h"
#include "caesar.h"
#include<string>
using namespace std;

std::string encryptVigenere(std::string plaintext, std::string keyword)
{
string r = "";

char c;
int p = 0, key;

for(int k = 0; k < plaintext.length(); ++k)
{
c = plaintext[k];

if(c >= 'A' && c <= 'Z')
{
key = keyword[p] - 'a';
p = (p + 1) % keyword.length();
c = 'A' + (c - 'A' + key + 26) %26;
}
if(c >= 'a' && c <= 'z')
{
key = keyword[p] - 'a';
p = (p + 1) % keyword.length();
c = 'a' + (c - 'a' + key + 26) %26;
}
r += c;
}
return r;

}
