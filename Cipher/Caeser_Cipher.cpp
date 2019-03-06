#include "Caeser_Cipher.h"
#include <iostream>

void Caeser_Cipher::shift(int n, char &c){
	if(isspace(c)) return;
	if(isupper(c)) c = tolower(c);
	if(abs(n) >= 26){
		n = n%26;
	}
	if(n==0){
		return;
	}

	if(n > 0 && 'z' - c < n){
		int temp = n - ('z'-c);
		c = 'a' + temp-1;
	}
	else if(n < 0 && 'a' - c > n){
		int temp = n - ('a' - c);
		c = 'z' + temp+1;
	}else{
		c += n;
	}
}
	
void Caeser_Cipher::printProcess(char o, char s){
		std::cout<<o<<"--> "<<s<<std::endl;
}

std::string Caeser_Cipher::encrypt(int key, std::string value, bool process){
	for(int i = 0; i < value.length(); i++){
		char temp = value[i];
		shift(key, value[i]);
		if(process)
			printProcess(temp, value[i]);
	}
	return value;
}

std::string Caeser_Cipher::decrypt(int key, std::string value, bool process){
	key = -key;
	for(int i = 0; i < value.length(); i++){
		char temp = value[i];
		shift(key, value[i]);
		if(process)
			printProcess(temp, value[i]);
	}
	return value;
}