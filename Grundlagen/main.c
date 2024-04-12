#include <stdio.h>

size_t stringlenght(char * message) {
    register size_t result = 0;
    while(message[result])
        result ++;
    return result;
}

void stringcopy(char * source, char * destination) {
    while(*destination++ = *source++);
}

int main() {

   char buffer[] = "Hallo";
   //buffer[5] = 'x';
   char resultbuffer[100];


    stringcopy(buffer, resultbuffer);

    printf("%s\n", resultbuffer);

    return 0;
}



