//bill splitter
#include<iostream>
#include<string>
int main(){
    
    double amount;  //variable to store amount entered by the user
    int people;
    double result;

    //taking the amount from the user
    std::cout<<"\nEnter the total amount:";  
    std::cin>>amount;

    std::cout<<"\nEnter the number of people sharing the bill:";
    std::cin>>people;

    //calculating and printing the result
    result=amount/people;
    std::cout<<"\nThe amount for each person is:"<<result<<std::endl;
    return 0;
}
