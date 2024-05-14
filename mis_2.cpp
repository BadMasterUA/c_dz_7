#include<iostream>

int main(){
   int a[10][10];
   for(int x = 0; x < 10; x++){
     for(int j = 0; j < 10; j++){
        a[x][j] = 0;
     }
   }

   //вывод, не знаю нужен ли он для этого дз
   for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
   return 0;
}