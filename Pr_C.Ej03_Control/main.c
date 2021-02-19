#include <stdio.h>

int main() {

    char c;

    printf("select 'q' to exit \n");
    printf("Enter character: \n");

    do{
        c = getchar();
        if("10"!=("%d",c)){ //TODO intento de correcci'on de fallo mediante comparaci'on de c'odigos ascii.
            printf("Character entered: %c\tThe value of this character is %d\n",c,c);
            printf("select 'q' to exit \n");
            printf("Enter character: \n");
        }
    }while(c!='q');

    printf("Bye bye!");

    return 0;

}