#include <stdio.h>
// int main(int argc, char *argv[]) {
int main(int argc, char** argv) {

    printf("Hello World!\n");
  
    printf("Number of Arguments: %d \n", argc);

    for (int i = 0; i < argc; i++) {
        if (i == 0) {     
            printf("Path : %s \n", argv[i]);
        } 
        else {
            printf("argv[%d]: %s \n", i, argv[i]);
        }
    }

    return 0; 
}