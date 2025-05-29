#include <iostream>
#include <fstream>

using namespace std;

int main(){
    FILE* file=fopen("firstfileprogram.txt","r");
    char ch=fgetc(file);

    while (ch != EOF){
        printf("%c", ch);
        ch = fgetc(file);
    }
    fclose(file);

    
    return 0;
}