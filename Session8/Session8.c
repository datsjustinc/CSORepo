#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    for (int i = 1; i < 10; i++)
    {
        write(1, &i, sizeof(i));
    }

    exit(0);
}


