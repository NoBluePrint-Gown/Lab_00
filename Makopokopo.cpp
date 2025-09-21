#include<iostream>

int main(){
    int value, quantity, remainder;
    std::cout << "Input quantity(Liters): ";
    std::cin >> value;
    if(value < 0){
        std::cout << "Invalid input, try agin.\n";
    }else{
        quantity = value/20;
        std::cout << "Number of makopokopo (20L) is " << quantity;
        remainder = quantity*20;
        remainder = value - remainder;
        std::cout << "\nRemaining Liter quantity is " << remainder;
    }
    std::cout << "\n";
    return 0;
}
