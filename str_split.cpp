#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split (const std::string& str){
	std::vector<std::string> rec;
	std::string tmp;
	int s = str.size();

	for(int i = 0; i < s; ++i){
		while(str[i] != ' ' && str[i] != '\0'){
			tmp.push_back(str[i]);
			++i;
		}
		rec.push_back(tmp);
		tmp.clear();
	}
	return rec;
} 


int main(){
	std::vector<std::string> a = split("hellO oouur dgfg");
	int s = a.size();
	
	for(int i = 0; i < s; ++i){
		std::cout << a[i] << std::endl; 
	}
	return 0;
}
