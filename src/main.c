/*******************************************************************************
 * 48430 Fundamentals of C Programming - Assignment 3
 * Group Members: 
 * Date of submission: 
 * 
 * HOW TO BUILD AND RUN:
 * 
 * 

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_menu() {
    printf("\n---Compact Secure Disk---\n");
    printf("1. Encrypt & Compress File\n");
    printf("2. Decrypt & Decompress File\n");
    printf("3. Exit\n");
    printf("Tip: You can batch compress and encrypt your files by using the --batch option followed by your files names as arguments.\n");
}

int main(int argc, char *argv[]) {

    /* Batch processing */
    if(argc > 1 && strcmp(argv[1], "--batch") == 0) {
        int i;
        for(i = 2; i < argc; ++i) {
            /* Process batch of files*/
        }

        printf("Batch processing complete.");

        return 0;
    }

    int choice;
    char filesname[256];

    while(1) {
        print_menu();
        printf("Enter choice: ");

        scanf("%d", &choice);

        if(choice == 3) {
            printf("Closing...\n");
            return 0;
        }
    }
}