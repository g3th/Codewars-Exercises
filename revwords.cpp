#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string reverse_words(string str){
	string spaces = "";
	string store = "";
	string result = "";
	for (int x =0; x != str.size(); ++x){
		store.append(str, x, 1);
		if (str[x] == 32){
			store.pop_back();
			while (str[x] == 32){
				spaces += " ";
				++x;
			}
		reverse(store.begin(),store.end());
		store += spaces;
		result += store;
		store = "";
		spaces = "";
		--x;
		}
	}
	reverse(store.begin(),store.end());
	result += store;
	return result;
}

int main(){
	string user_input = "";
	cout << "Enter string to be reversed: ";
	getline(cin, user_input);
	cout << reverse_words(user_input) << endl;
}
