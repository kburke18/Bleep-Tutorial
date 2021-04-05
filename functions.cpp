#include <string>
#include "functions.hpp"

using namespace std;

void bleep(string word, string &text) {
  // delimit by space
  int index = 0;
  string curr_word = "";
  while (index <= text.size()) {
    if (text[index] == ' ' || index + 1 > text.size()) {
      // check if word matches the word
      if (curr_word == word) {
        // replace curr_word with * in text
        for (int i = 0; i < word.size(); i++) {
          text[index - i - 1] = '*';
        }
      }
      // reset curr_word
      curr_word = "";
    } else {
      curr_word += text[index];
    }
    index++;
  }
}
