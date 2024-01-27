#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split (std::string str){
	std::vector<std::string> rec;
	std::string tmp;
	int s = str.size();
	int i = 0;

	while(i < s){
		if(str[i] != ' '){
			tmp.push_back(str[i]);
		}else{
			rec.push_back(tmp);
			tmp.clear();
		}
	++i;
	}
	return rec;
} 


int main(){
	std::srting hell;
	std::cin >> hell;
	std::vector<string> a = split(hell);
	int s = a.size();
	for(int i = 0; i < s; ++i){
		std::cout << a[i] << std::endl; 
	}
	return 0;
}
