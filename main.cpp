#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
using namespace std;





  int main(){


  cout << "ciphertext: "<< encryptCaesar("joe", 5)<< endl;
  cout <<"encryptVigenere: " << encryptVigenere("Hello World","cake") << endl;
  cout << "decryptVigenere: " << decryptVigenere("Jevpq, Wyvnd!", "cake") << endl;




  return 0;
}
