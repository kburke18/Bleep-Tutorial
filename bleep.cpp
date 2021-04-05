#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

int main() {
  string word = "broccoli";
  string text = "eat the broccoli nom nom broccoli";
  bleep(word, text);
  cout << text << "\n";
}
