#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "vigenere.h"
#include "caesar.h"
#include "decrypt.h"
using namespace std;
#include "doctest.h"
#include <string>


TEST_CASE("Checks capital letters in cesar cipher:"){

  CHECK(encryptCaesar("HEY",4) == "LIC");
  CHECK(encryptCaesar("YO",4) == "CS");
}

TEST_CASE("checks capital letters in cesar cipher:"){

  CHECK(encryptCaesar("hey",4) == "lic");
  CHECK(encryptCaesar("yo",4) == "cs");

  }


TEST_CASE("checks if Vigenere Cipher works:"){

    CHECK(encryptVigenere("Hello", "cake") == "Jevpq");


    }

TEST_CASE("checks if decryptVigenere  works:"){

        CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");


        }
