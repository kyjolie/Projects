#include <iostream>
#include <string>
using namespace std;


int palindrome(string word, int x=1) {
    
	if ((word.at(0)==word.at(word.length()-1))&&(word.length()>2)) {
		
	string newWord=word.substr(1,word.length()-2);
	if (newWord.length()>2) {
	    return x +palindrome(word.substr(1,word.length()-2),x);
	}
	else {
	    return x ;
	}}
    else {
        return 0;
    }
}
;



int main() {
	string word;
	getline(cin, word);

	int wordLen=word.length()/2;
	
	if (word.length()%2==0) {
	    wordLen=wordLen-1;
	}

	int mid=palindrome(word);

	if (mid==wordLen) {
	    cout << "Is a palindrome." << endl;}
	else {
	    cout << "Not a palindrome." << endl;
	}
};

