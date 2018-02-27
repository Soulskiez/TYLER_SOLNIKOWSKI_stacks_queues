#include <iostream>
#include <string>
#include "../include/functions.h"



int main(int argc, char** argv){
	std::cout << "Enter code to see if it is optimized" << std::endl;
	std::string code;
	std::cin >> code;
	if(balancedSymbols(code)){
	std::cout << "Balanced!" << std:: endl;
	}
	else{
	std::cout << "Unbalanced!" << std:: endl;
	}
}
