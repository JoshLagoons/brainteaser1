#include <iostream>

int main()
{
    int a, number, digit, reverse=0;
    std::cout<<"Einput a positive number:";
    std::cin>>number;
    a = number;
    do
    {
       digit = number % 10;
       reverse = (reverse*10) + digit;
       number = number / 10;
    } while (number != 0);
    std::cout<<"The reverse number is: " << reverse << std::endl;
    if (a==reverse)
    {
        std::cout<< "The number is a palindrome.";

    }
    else
    {
        std::cout<< "The number is not a palindrome.";
    }
    return 0;
    
};
