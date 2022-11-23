#include <map>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

map<char, unsigned> count(const string& str){

	set<char> unique_string;
	vector<char> single_character;
	map<char, unsigned> count;
	int counter =0;
	int recurrence = 0;

	for (int x=0; x < str.size(); ++x){
		unique_string.insert(str[x]);
	}

	for (char x:unique_string){
		single_character.push_back(x);
	}
	while (counter < str.size()){
		for (int x=0; x<str.size(); ++x){
			if (single_character[counter] == str[x]){
				++recurrence;
			}
		}
		//cout << single_character[counter] << ":"<<recurrence<<endl;
		if (recurrence != 0){
			count.insert({single_character[counter], recurrence});
		}		
		++counter;
		recurrence = 0;
	}
	return count;
}

int main(){
	for (auto x:count("cedadabfe")){
		cout << x.first << ":" << x.second << endl;
	}
}


/* 
strager's:

void count(const string& str){
	map<char, unsigned> counts;
	for (char c : str) {
		counts[c] += 1;
	}
	for (auto& [c, count] : counts) {
		cout << c << ":" << count << '\n';
	}
}

*/
