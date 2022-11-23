#include <vector>
#include <iostream>
using namespace std;

int find_even_index (const vector <int> numbers) {	
	vector<int> r;
	vector<int> l;
	int size_of_vector = size(numbers);
	int index = 0;
	int x = index+1;
	int sum = 0;
	while (index < size_of_vector){
		while (x < size_of_vector){
			sum += numbers[x];
			++x;
		}
		r.push_back(sum);
		++index;
		x = index+1;
		sum =0;
	}
	x = 0;
	index = 0;
	while (index < size_of_vector){
		while (x != index){
			sum += numbers[x];
			++x;
		}
		l.push_back(sum);
		++index;
		x = 0;
		sum =0;
	}
	cout << "The given array's ";
	char parentheses_or_comma = 40;
	for (int x=0; x < size_of_vector; ++x){
		if (x<1){
			parentheses_or_comma = 40;
		} else {
			parentheses_or_comma = 44;
			}	
		cout << parentheses_or_comma << numbers[x];
	}
	cout << ") results: " << endl;
	cout << "---------------------------"<<endl;

	int final_result = 0;
	for (int x=0; x < size_of_vector; ++x){
		cout << "Index: " << x << endl;
		cout << "Right: " << r[x] << " : Left : "<< l[x] << endl;
		cout << "--------------------------"<< endl;
		}
	for (int x=0; x < size_of_vector; ++x){
		if (r[x] == l[x]){
			final_result = x;
			cout << "\nMatched Integer: " << final_result << endl;
			break;
		}
		final_result= -1;
	}
	if (final_result == -1){
		cout << "No Match (returned -1)" << endl;
	}
	cout << "\n";
	return final_result;
}

int main(){
	find_even_index({-1,-2,-3,-4,-3,-2,-1});
}


/*   
sum += numbers[index+1] (right)

		20 		10 		-80 	10 		10 		15		35
			   sum ----------------------------------> -0
						sum -------------------------> -10
sum += numbers[index-1] (left)

		20 		10 		-80 	10 		10 		15		35
	<- sum(0)
	    <---- sum(20)
		<------------- sum(30)
*/
