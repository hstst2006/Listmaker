#include <stdio.h>

int main() {
    FILE* input = fopen("input.txt", "r");
    FILE* output = fopen("output.txt", "w");
    char newline;
    char ignore;
    printf("Press enter without typing a character to skip\n");
    printf("Enter character to replace with newline");
    scanf("%c", &newline);
    fflush(stdin);
    printf("Enter character to ignore");
    scanf("%c", &ignore);
    fflush(stdin);

    int symbol;

    while(!feof(input)){
        symbol = fgetc(input);
        if (symbol == newline){
            fputc('\n', output);
        }
        else if(symbol == ignore){}
        else {
            fputc(symbol, output);
        }
    }
    fclose(input);
    fclose(output);
    return 0;
}
