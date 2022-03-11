#include <iostream>
#include "vigenere.h"
#include "caesar.h"
using namespace std;
#include <string>

char shiftChar(char c, int rshift){

if(c >= 'A'&& c <= 'Z'){

  c = 'A' + (c - 'A' + rshift +26)%26;
}

if(c >= 'a'&& c <= 'z'){

  c = 'a' + (c - 'a' + rshift +26)%26;

}

  return c;
}






std::string encryptCaesar(std::string plaintext, int rshift){
  string r ="";
  char c;

  for (int i = 0; i < plaintext.length(); i++){

    r += shiftChar(plaintext[i], rshift);
  }

return r;


}
