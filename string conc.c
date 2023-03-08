#include <stdio.h>
#include <string.h>
 
int main(){
    char destination[100], source[100];
     
    printf("Enter first string \n");
    gets(destination);
    printf("Enter second string \n");
    gets(source);
  
    strcat(destination, source);
     
    printf("Concatenated String: %s \n",
       destination);
     
    return 0;
}
