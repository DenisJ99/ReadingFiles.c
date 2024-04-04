#include <stdio.h>

int main()
{
    FILE *pF = fopen("C:\\Users\\djohnso3\\Desktop\\Software\\Visual Studio\\C C++\\.vscode\\sample.txt", "r");
    char buffer[225];

    while(fgets(buffer, 255, pF) != NULL)
    {
        printf("%s", buffer);
    }
    fclose(pF);

    return 0;
}