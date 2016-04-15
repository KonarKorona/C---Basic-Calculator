#include <iostream>
#include <string>
#include <sstream>

int addition(){
	std::cout << "Addition" << std::endl;
	std::string addstr;
	double a, b;
	
	std::cout << "Enter first number: ";
	getline(std::cin,addstr);
	std::stringstream(addstr) >> a;
	
	std::cout << "Enter second number: ";
	getline(std::cin,addstr);
	std::stringstream(addstr) >> b;
	
	double r = a+b;
	
	std::cout << r << std::endl;
	system("pause");
	return 0;
}

int subtraction(){
	std::cout << "Subtraction" << std::endl;
	std::string substr;
	double a, b;
	
	std::cout << "Enter first number: ";
	getline(std::cin,substr);
	std::stringstream(substr) >> a;
	
	std::cout << "Enter second number: ";
	getline(std::cin,substr);
	std::stringstream(substr) >> b;
	
	double r = a-b;
	
	std::cout << r << std::endl;
	system("pause");
	return 0;
}

int multiplication(){
	std::cout << "Multiplication" << std::endl;
	std::string multstr;
	double a, b;
	
	std::cout << "Enter first number: ";
	getline(std::cin,multstr);
	std::stringstream(multstr) >> a;
	
	std::cout << "Enter second number: ";
	getline(std::cin,multstr);
	std::stringstream(multstr) >> b;
	
	double r = a*b;
	
	std::cout << r << std::endl;
	system("pause");
	return 0;
}

int division(){
	std::cout << "Division" << std::endl;
	std::string divstr;
	double a, b;
	
	std::cout << "Enter first number: ";
	getline(std::cin,divstr);
	std::stringstream(divstr) >> a;
	
	std::cout << "Enter second number: ";
	getline(std::cin,divstr);
	std::stringstream(divstr) >> b;
	
	double r = a/b;
	
	std::cout << r << std::endl;
	system("pause");
	return 0;
}

int main(int argc, char** argv) {
	std::string man;
	int app;
	std::cout << "What operation would you like to do? " << "(add, sub, mult, div)";
	getline(std::cin,man);
	
	if (man == "add"){
		app = 1;
	}else if(man == "sub"){
		app = 2;
	}else if(man == "mult"){
		app = 3;
	}else if(man == "div"){
		app = 4;
	}else{
		app = 0;
	}
	
	
	switch(app){
		case 1:
			addition();
			break;
		case 2:
			subtraction();
			break;
		case 3:
			multiplication();
			break;
		case 4:
			division();
			break;
		default:
			std::cout << "ending...";
			system("pause");
			return 0;
	}
	
	
	return 0;
}
