#include<iostream>

int main(){
    int count = 98;
    while (count < 200)
    {
        count += 2;
        std::cout << "counter: " << count << "\n";
    }
    
    return 0;
}