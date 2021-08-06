#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>


bool is_unique_o2(std::string input)
{
    for (int i = 0; i < input.length(); i++) {
        for (int j = 0; j < input.length(); j++) {
            if (input[i] == input[j] && i != j){
                return false;
            }
            
        }
        
    }
    return true;
}

bool is_unique_o1(std::string input){
    if (input.length() > 128) return false;

    bool char_set[128] = { 0 };

    for (int i = 0; i < input.length(); i++){
        int val = input.at(i);
        
        if (char_set[val]){
            return false;
        }

        char_set[val] = true;
    }
    return true;
}

int main(){
    
    std::string str = "abcdefa";

    std::cout << is_unique_o1(str) << std::endl;

    std::cout << is_unique_o2(str) << std::endl;
}