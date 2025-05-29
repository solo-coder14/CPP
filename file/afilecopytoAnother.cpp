#include <iostream>
#include <fstream>
 
using namespace std;
int main()
{
    // open file in read mode to read it's content
    FILE* file = fopen("file.txt", "r");
   
    // open file in append mode to append read content
    FILE* file2 = fopen("file5.txt", "w");
    if (file2 == NULL) {
        cout << "file not found";
    }
    else if (file == NULL) {
        cout << "file not found";
    }
   
    // Read contents from file
    char ch = fgetc(file);
    while (ch != EOF) {
       
        // print read content from file in file2
        fprintf(file2, "%c", ch);
        ch = fgetc(file);
    }
    fclose(file);
    fclose(file2);
   
    // open file 2 again in read mode to read the content
    FILE* file3 = fopen("file5.txt", "r");
   
    // Read contents from file
    char ch2 = fgetc(file3);
    while (ch2 != EOF) {
       
        // print read content from file
        printf("%c", ch2);
        ch2 = fgetc(file3);
    }
    fclose(file3);
}