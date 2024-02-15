#include <stdio.h>
#include <string.h>

struct Students
{  
    char number[105];
    char name[105];
}rec[1005];

int main()
{
    FILE *fp = fopen("testdata.in", "r");
    int n,m;
    char temp[105];
    int count=0;
    int i,j,k;
    fscanf(fp,"%d\n",&n);  
    
    for(i=0; i<n; i++)
	{
        fscanf(fp,"%s %s\n",rec[i].number, rec[i].name);  
    }
    
    fscanf(fp,"%d\n",&m);
    
	for(i=0; i<m; i++)
	{
		fscanf(fp,"%s\n",temp);
        
        int count=0;
        for(int j=0; j<n; j++){
            if(strcmp(temp, rec[j].number)==0)
			{
                count=1;
                printf("Case #%d: %s\n", i+1, rec[j].name); 
                break; 
            }
        }
        
        if(count==0)
		{  
            printf("Case #%d: N/A\n", i+1);
        }
    }
    
    fclose(fp);
    return 0;
}
