//Luis Ignacio Acosta Zamora A01411895
/*
 * Write a program that counts the number of words of any given string.
 */

#include <stdio.h>
#include <string.h>

//This function goes through all the string and count how many spaces and enters.
void numberOfWords(char string[]) {

    int count = 0;

    for (int i = 0; i <= strlen(string); i++) {
        if (string[i] == ' ' || string[i] == '\n') {
            count++;
        }
    }
    printf("You wrote a total of %d words.", count);
}

int main() {
    //Create a string with a fix number of characters.
    char string[1000];

    //Request the user a string and save it using the fgets function to avoid errors.
    printf("Please write anything:\n");
    fgets(string, sizeof(string), stdin);

    numberOfWords(string);

    return 0;
}