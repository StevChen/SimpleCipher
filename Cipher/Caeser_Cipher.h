#include <string>

/*
The header file for Caeser_Cipher. 
==================================
The Caeser_Cipher only contained two very basic encrypt and decrypt public method. 
function "encrypt" to encrypt the plaintext and return the ciphertext
function "decrypt" to decrypt the ciphertext and return the plaintett


Private Members:

shift(int, char&) <- shift the character by a integer
printProcess	  <- output the process in stdout
===================================
*/

class Caeser_Cipher{
private:
	static void shift(int, char&);
	static void printProcess(char, char);
public:
	static std::string encrypt(int, std::string, bool process = false);
	static std::string decrypt(int, std::string, bool process = false);
};

class Permutation_Cipher{
private:
public:
	static std::string encrypt(int, std::string, bool process = false);
	static std::string decrypt(int, std::string, bool process = false);
};