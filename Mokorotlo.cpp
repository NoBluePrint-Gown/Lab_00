#include<iostream>

int main(){
    int number;
    std::cout << "Input height(n): ";
    std::cin >> number;
    if(number < 0){
        std::cout << "Invalid input, try again.\n";
    }else{
        for(int i=0; i < number; i++){
            std::cout << "\n";
            for(int j=0; j < number; j++){
                if(j < (number - i - 1)){
                    std::cout << " ";
                }else{
                    std::cout << "* ";
                }
                // std::cout << dist << std::endl;
            }
        }
    }
    return 0;
}
