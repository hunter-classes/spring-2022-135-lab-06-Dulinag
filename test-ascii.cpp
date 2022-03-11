
#include <iostream>
#include <string>
using namespace std;

int main() {
 char c;
 string str = "";
 int h;
 cout << "Enter a character: ";
 getline(cin, str);
 int j = str.length();
 for (int i = 0; i <= j; i++){
  c = str[i];
 cout << "ASCII Value of " << c << " is " << int(c)<<endl;
}
 return 0;
}
