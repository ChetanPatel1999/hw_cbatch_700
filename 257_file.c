// fgetc():- its read single char from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("facto.txt", "r");
    printf("pointer pos = %d\n", ftell(ptr));// its return current position of pointer
    fseek(ptr, 30, SEEK_SET); // its set pointer position insdie file.
    printf("pointer pos = %d\n", ftell(ptr));
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    printf("pointer pos = %d\n", ftell(ptr));
    // rewind(ptr);// its set pointer position at begining of file
    //    fseek(ptr,0,SEEK_SET);
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(ptr);
}