#include <stdio.h>
#include <windows.h>

int main(void) {
    int an;
    char choice;

    printf("HENRY MATONIS\n");
    printf("11/28/22\n\n");
    printf("RAW TEXT RECORDED IN TEXT.TXT\n");
    printf("TEXT + SUBLEVELS RECORDED IN RESULTS.TXT\n\n");

    char * filename = "results.txt";
    FILE * fp = fopen(filename, "w");

    char * filetest = "text.txt";
    FILE * fptr = fopen(filetest, "w");

    for (;;) {
        choice = getche();
        switch (choice) {
        case 'a':
            printf("\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^6, 6s^2, 4f^14, 5d^10, 6p^6, 7s^2, 5f^1 - 1s^2, 2s^2, 2p^2");
            fprintf(fp, "A\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^6, 6s^2, 4f^14, 5d^10, 6p^6, 7s^2, 5f^1 - 1s^2, 2s^2, 2p^2");
            fprintf(fptr, "a");
            break;
        case 'b':
            printf("\n1s^2, 2s^2, 2p^1");
            fprintf(fp, "B\n1s^2, 2s^2, 2p^1");
            fprintf(fptr, "b");
            break;
        case 'c':
            printf("\n1s^2, 2s^2, 2p^2");
            fprintf(fp, "C\n1s^2, 2s^2, 2p^2");
            fprintf(fptr, "c");
            break;
        case 'd':
            printf("\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10 - 1s^2, 2s^2, 2p^2");
            fprintf(fp, "D\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10 - 1s^2, 2s^2, 2p^2");
            fprintf(fptr, "d");
            break;
        case 'e':
            printf("\n1s^2 - 1s^1");
            fprintf(fp, "E\n1s^2 - 1s^1");
            fprintf(fptr, "e");
            break;
        case 'f':
            printf("\n1s^2, 2s^2, 2p^5");
            fprintf(fp, "F\n1s^2, 2s^2, 2p^5");
            fprintf(fptr, "f");
            break;
        case 'g':
            printf("\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^6, 6s^2, 4f^14, 5d^10 - 1s^1");
            fprintf(fp, "G\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^6, 6s^2, 4f^14, 5d^10 - 1s^1");
            fprintf(fptr, "g");
            break;
        case 'h':
            printf("\n1s^1");
            fprintf(fp, "H\n1s^1");
            fprintf(fptr, "h");
            break;
        case 'i':
            printf("\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^5");
            fprintf(fp, "I\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^5");
            fprintf(fptr, "i");
            break;
        case 'j':
            printf("\nlol");
            fprintf(fp, "j doesnt exist");
            fprintf(fptr, "j");
            break;
        case 'k':
            printf("\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^1");
            fprintf(fp, "K\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^1");
            fprintf(fptr, "k");
            break;
        case 'l':
            printf("\n1s^2, 2s^2, 2p^6, 3s^2, 3p^5 - 1s^2, 2s^2, 2p^2");
            fprintf(fp, "L\n1s^2, 2s^2, 2p^6, 3s^2, 3p^5 - 1s^2, 2s^2, 2p^2");
            fprintf(fptr, "l");
            break;
        case 'm':
            printf("\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^5 - 1s^2, 2s^2, 2p^3");
            fprintf(fp, "M\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^5 - 1s^2, 2s^2, 2p^3");
            fprintf(fptr, "m");
            break;
        case 'n':
            printf("\n1s^2, 2s^2, 2p^3");
            fprintf(fp, "N\n1s^2, 2s^2, 2p^3");
            fprintf(fptr, "n");
            break;
        case 'o':
            printf("\n1s^2, 2s^2, 2p^4");
            fprintf(fp, "O\n1s^2, 2s^2, 2p^4");
            fprintf(fptr, "o");
            break;
        case 'p':
            printf("\n1s^2, 2s^2, 2p^6, 3s^2, 3p^3");
            fprintf(fp, "P\n1s^2, 2s^2, 2p^6, 3s^2, 3p^3");
            fprintf(fptr, "p");
            break;
        case 'q':
            printf("\nlol");
            fprintf(fp, "\nq doesnt exist");
            fprintf(fptr, "q");
            break;
        case 'r':
            printf("\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^5 - 1s^2, 2s^2, 2p^1");
            fprintf(fp, "R\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^5 - 1s^2, 2s^2, 2p^1");
            fprintf(fptr, "r");
            break;
        case 's':
            printf("\n1s^2, 2s^2, 2p^6, 3s^2, 3p^4");
            fprintf(fp, "S\n1s^2, 2s^2, 2p^6, 3s^2, 3p^4");
            fprintf(fptr, "s");
            break;
        case 't':
            printf("\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^6, 6s^2, 4f^14, 5d^10, 6p^6, 7s^2, 5f^2 - 1s^1");
            fprintf(fp, "T\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^6, 6s^2, 4f^14, 5d^10, 6p^6, 7s^2, 5f^2 - 1s^1");
            fprintf(fptr, "t");
            break;
        case 'u':
            printf("\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^1, 3d^10 - 1s^2, 2s^2, 2p^2");
            fprintf(fp, "U\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^1, 3d^10 - 1s^2, 2s^2, 2p^2");
            fprintf(fptr, "u");
            break;
        case 'v':
            printf("\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^3");
            fprintf(fp, "V\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^3");
            fprintf(fptr, "v");
            break;
        case 'w':
            printf("\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^6, 6s^2, 4f^14, 5d^4");
            fprintf(fp, "W\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^6, 6s^2, 4f^14, 5d^4");
            fprintf(fptr, "w");
            break;
        case 'x':
            printf("\nlol");
            fprintf(fp, "x doesnt exist");
            fprintf(fptr, "x");
            break;
        case 'y':
            printf("\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^1");
            fprintf(fp, "Y\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^1");
            fprintf(fptr, "y");
            break;
        case 'z':
            printf("\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10 - 1s^2, 2s^2, 2p^3");
            fprintf(fp, "Z\n1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10 - 1s^2, 2s^2, 2p^3");
            fprintf(fptr, "z");
            break;
        case ' ':
            printf("SPACE");
            fprintf(fptr, " ");
        }
        printf("\n");
        fprintf(fp, "\n");
    }
}
