#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*Codewars beginner assignment*/

vector<string> test(string original_string){
	
	vector<string> split_string;
	if (original_string.size() % 2 ==0){
		cout << "String is even." << endl;
	} else {
		original_string += "_";
	}
	for (int x=0; x < original_string.size(); ++++x){
		split_string.push_back(original_string.substr(x, 2));
	}
	return split_string; 
}

int main(){
	string user_input = "";
	cout << "Enter your string (No spaces pls): ";
	cin >> user_input;
	vector<string> split_string = test(user_input);
	for (int x = 0; x < split_string.size(); ++x){
		cout << split_string[x] << endl;
	}
}
