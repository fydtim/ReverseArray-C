#include <stdio.h>
#include <string.h>
#define MAX_BUFFER_SIZE 100
#define TRUE 1
#define FALSE !TRUE

int reverse_array(int size, char * buffer, char * output)
{
    int count = 0;

    if(size > 0)
    {
    for (count = 0; count < size; count++)
        {
            output[count] = buffer[size - count - 1];
        }
        output[size] = '\0';
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

void main()
{
    char input_buffer[MAX_BUFFER_SIZE], output_buffer[MAX_BUFFER_SIZE];
    int count = 0, buffer_length;

    printf("Enter a string of characters to reverse.\n");
    printf("For example: 12345. Up to 100 characters.\n");
    fflush(stdout);

    if(fgets(input_buffer, MAX_BUFFER_SIZE, stdin) == NULL)
    {
        printf("Noting entered, BYE!\n");
        return;
    }

    buffer_length = strlen(input_buffer) - 1;
    if (input_buffer[buffer_length] == '\n')
        input_buffer[buffer_length] = '\0';
    printf("You entered:\n%s\n", input_buffer);
    fflush(stdout);

    if (reverse_array(buffer_length, input_buffer, output_buffer) == FALSE)
        printf("Error reversing array\n");
    else
        printf("Your string has been reversed:\n%s\nBYE!\n", output_buffer);
}
