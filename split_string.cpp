#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> solution(const string &s)
{   string add_to;
    add_to.assign(s);
    vector<string> split_string;
    if (s.size() % 2 ==0){
      cout << "String is even." << endl;
    } else {
       add_to += "_";
      }
    for (int x=0; x < add_to.size(); ++++x){
      split_string.push_back(add_to.substr(x, 2));
    }
    return split_string;
}

int main(){
	string user_input = "";
	cout << "Enter your string (No spaces pls): ";
	cin >> user_input;
	vector<string> split_string = solution(user_input);
	for (int x = 0; x < split_string.size(); ++x){
		cout << split_string[x] << endl;
	}
}
