#include<iostream>

int main(){
    int count = 98;
    
    do{
        count += 2;
        std::cout << "counter: " << count << "\n";
    }while(count < 200);

    return 0;
}