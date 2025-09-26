#include <string>
#include <iostream>
#include "hello.h"

int main(){
	myproject::sayHello("world");
	while (1){
		std::string s;
		std::cin >> s;
		std::cout << myproject::sayHello(s);
	}
	return 0;
}
