#include <iostream>

int main(){
    int value;
    std::cout << "Input number of cattle: ";
    std::cin >> value;
    if(value < 0){
        std::cout << "Invalid input try again.\n";
    }else{
        if(value < 10){
            std::cout << "Not Enough for Lobola.\n";
        }else if(value < 20){
            std::cout << "Small herd.\n";
        }else{
            std::cout << "Wealthy cattle owner.\n";
        }
    }
    return 0;
}
