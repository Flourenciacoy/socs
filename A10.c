#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct dict {
    char srt[255];
    char norm[255];
};

int main() 
{
    FILE *fp = fopen("testdata.in", "r");
    int n;
    fscanf(fp, "%d\n", &n);
    struct dict dicts[n + 1]; 
    for (int i = 0; i < n; i++)
        fscanf(fp, "%[^#]#%[^\n]\n", dicts[i].srt, dicts[i].norm);

    int tc;
    fscanf(fp, "%d\n", &tc);
    for (int q = 1; q <= tc; q++) 
	{
        char arr[255];
        fscanf(fp, "%[^\n]\n", arr);
        char sub[255][55];

        int index = 0;
        int j = 0;

        for (int i = 0; i <= strlen(arr); i++) 
		{
            if (arr[i] == ' ' || arr[i] == '\0') 
			{
                sub[index][j] = '\0';
                index++;
                j = 0;
            } else
                sub[index][j++] = arr[i];
        }
        printf("Case #%d:\n", q);
        for (int i = 0; i < index; i++) 
		{
            bool isValid = false;
            int idx;
            for (int j = 0; j < n; j++) 
			{
                if (strcmp(sub[i], dicts[j].srt) == 0) 
				{
                    isValid = true;
                    idx = j;
                    break;
                }
            }
            if (isValid)
                printf("%s", dicts[idx].norm);
            else
                printf("%s", sub[i]);

            if (i < index - 1)
                printf(" ");
        }
        puts("");
    }
    fclose(fp);
    return 0;
}

