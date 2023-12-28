#include <iostream>

int getNumber(const int number){
    
    return number % 10 + (number / 10 % 10);
    
}

int sumOddNumbers(const std::string cardNumber){
    
    int sum = 0;
    
    for (int i = cardNumber.size() -1; i >= 0; i-=2){
        sum += getNumber(cardNumber[i] - '0') ;
    }
    
    return sum;

}

int sumEvenNumbers(const std::string cardNumber){
    
    int sum = 0;
    
    for (int i = cardNumber.size() -2; i >= 0; i-=2){
        sum += getNumber((cardNumber[i] - '0') * 2);
    }
    
    return sum;
}

int main(){
    
    std::string cardNumber;
    int result = 0;
    
    std::cout << "Enter a credit card number to check: ";
    std::cin >> cardNumber;
    
    result = sumOddNumbers(cardNumber) + sumEvenNumbers(cardNumber);
    
    if (result % 10 == 0){
        
        std::cout << cardNumber << " is valid." << std::endl;
    }
    else{
        std::cout << cardNumber << " is not valid." << std::endl;
    }
    
    
    return 0;
}
