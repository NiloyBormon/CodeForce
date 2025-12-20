#include <iostream>
#include <string>
#include <vector>
int main(){
    int n ;
    std::cin>> n;
    std::vector<std::string> wordArr ;
    for(int i =0;i<n;i++){
        std::string temp;
        std::cin >> temp;
        wordArr.push_back(temp);
    }
    std::vector<std::string> outputArr;
    for(int i =0;i<n;i++){
        std::string word = wordArr.at(i);
        char fLetter, lLetter;
        int bLength;
        if(word.length() > 10){
            fLetter = word[0];
            lLetter = word[word.length()-1];
            bLength = word.length()-2;
            std::string result = std::string(1,fLetter) + std::to_string(bLength) + std::string(1,lLetter); 
            outputArr.push_back(result);
        }
        else{
            outputArr.push_back(word);
        }
    }
    for(int i=0;i<n;i++){
        std::cout << outputArr.at(i);
        std::cout << std::endl;
    }
}