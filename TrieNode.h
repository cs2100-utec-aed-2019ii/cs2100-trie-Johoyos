#include <map>
#include <iostream>
#include <string>
#define CHAR_SIZE 128
class TrieNode{
public:
    bool is_node;
    std::map<char,TrieNode*> children;
    int altura;

    TrieNode(){
        this->is_node = false;
		this->altura=0;
    }    
    void insert(std::string palabra){
      TrieNode* curr = this;
      for (int i = 0; i < palabra.length(); i++){
            if (curr->children[palabra[i]] == nullptr){
                curr->children[palabra[i]] = new TrieNode();
			}              
            (curr->altura)++ ; 
            curr = curr->children[palabra[i]];
        }
        curr->is_node = true;
    }
    
    void load(std::string cadena){
    }
    void stopwords(){
    }

    double sumaponder(){
      TrieNode* curr = this;
      //contar cantidad de palabras
      for (auto it=curr->children.begin(); it!=curr->children.end(); ++it){
        //std::cout << it->first << " => " << it->second << '\n';
      }
	  //contar altura de cada letra

    }
	void print(){
		TrieNode* curr= this;
		std::string cad = "";
		for (auto it = curr->children.begin(); it!=curr->children.end();++it){
			cad = cad+ it->first;
			printResto(cad,it->second);
			cad = "";
		}
	}
	void printResto(std::string cad, TrieNode* ptr){
		if (ptr->is_node == true){
			std::cout<<cad<<std::endl;
		}
		if (ptr->children.size()==0){
			return ; //no hay mas palabras
		}
		std::string cadaux = cad;

		for (auto it=ptr->children.begin(); it!= ptr->children.end(); ++it){
			cadaux = cadaux + it->first;
			printResto(cadaux,it->second);
			cadaux = cad;
		}

	}
	

};

