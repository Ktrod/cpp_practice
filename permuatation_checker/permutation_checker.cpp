#include <iostream>

bool is_permuation(std::string word1, std::string word2){
    if (word1.length() != word2.length()) return false;

    int word1_val = 0;
    int word2_val = 0;

    for (int i = 0; i < word1.length(); i++){
        word1_val += (int)word1[i];
        word2_val += (int)word2[i];
    }

    std::cout << word1_val << std::endl;
    std::cout << word2_val << std::endl;

    return word1_val == word2_val;
}

int main() {
    
    std::string word1 = "beansqwf";
    std::string word2 = "befqwfqb";

    std::cout << is_permuation(word1, word2) << std::endl;
}