#include <iostream>
#include <string>
#include <string.h>
#include <cstddef>
#include <sstream>
using namespace std;
int main (){
    string str;
    string aux;
    stringstream ss;
    size_t found;
    getline(cin,str);
    ss<<str ;
     
    while(ss>>aux){

        found = str.find(aux);
        if(found!=string::npos && aux.size()>1){
            for(size_t i=0;i<aux.size();i++){
                aux[i]=toupper(aux[i]);
            }
            str.replace(found,aux.size(),aux);
        }
    }    
    cout << str << endl;
}

