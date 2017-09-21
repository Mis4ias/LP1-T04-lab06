// istringstream::str
#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::istringstream
using namespace std;

int main () {
 	string s ="abc abc cba cba";
	string x;
	stringstream ss;
	ss<<s ;

	while(ss >> x){
		cout << x<< endl;


	}
 
  return 0;
}