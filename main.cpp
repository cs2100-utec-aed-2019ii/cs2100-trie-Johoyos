#include <iostream>
#include <unistd.h>
#include <string>
#include "TrieNode.h"
int main(){
    TrieNode tries;
    std::string cadena;
	//std::cin>>cadena;
	tries.insert("hola");
	tries.insert("habla");
	tries.insert("en");
	tries.insert("enojado");
	tries.insert("enano");
	
//	tries.load(cadena);
//  tries.stopwords();
	tries.print();
    return 0;
}
