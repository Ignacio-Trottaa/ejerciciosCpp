#include<iostream>
using namespace std;

    int main(){
    
        for(int i = 0; i <= 5; i++){
            for(int j = 0; j <= i; j++){
            cout << "\t" ;
        }
        cout << "*" << std::endl;
    }

        for(int i = 0; i < 5; i++){
            for(int j = 5; j > i; j--){
            cout << "\t" ;
        }
        cout << "*" << std::endl;
    }
}