#include <iostream>
#include <string>
#include <cstddef>
#include <sstream>
using namespace std;
int main (){
    string str;
    string aux;
    stringstream ss;
    cin>>str;
    ss<<str ;

    while (ss >> aux){
        size_t found = str.rfind(aux);
        
        if(found!=string::npos){
            for(size_t i=0;aux.size();i++){
              aux[i]=toupper(aux[i]);
            }
            cout<<aux<<endl;
          str.replace(found,aux.length(),aux);
          cout << str << '\n';
        }else{}
    
    }
  
}

