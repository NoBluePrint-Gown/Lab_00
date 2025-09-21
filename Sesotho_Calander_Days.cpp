#include <iostream>

int main(){
    // Beke ea Sesotho e qala ka Sontaha
    int day;
    std::cout << "Input day of the week(1-7): ";
    std::cin >> day;
    if(day <= 0 || day > 7){
        std::cout << "Invalid input day of the week, try again.\n";
    }else{
        switch(day){
            case 1:
                std::cout << "Sontaha\n";
                break;
            case 2:
                std::cout << "Mantaha\n";
                break;
            case 3:
                std::cout << "Labobeli\n";
                break;
            case 4:
                std::cout << "Laboraro\n";
                break;
            case 5:
                std::cout << "Labone\n";
                break;
            case 6:
                std::cout << "Labohlano\n";
                break;
            case 7:
                std::cout << "Moqebelo\n";
                break;
        };
    }

    return 0;
}
