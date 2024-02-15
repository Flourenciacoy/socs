#include <stdio.h>
#include <string.h>

struct dataSiswa{
	char nama[101];
	int absen;
};

int main(){
	
	int testCase;
	scanf("%d", &testCase);
	int i,j,k;
	for(i = 0; i < testCase; i++){
		int n;
		scanf("%d", &n);
		struct dataSiswa siswa[n], temp;
		for(j = 0; j < n; j++){
			scanf(" %[^#]s", siswa[j].nama);
			getchar();
			scanf("%d", &siswa[j].absen);
		}		
		
		for(j = 0; j < n-1; j++){
			for(k = j+1; k < n; k++){
				if(siswa[j].absen < siswa[k].absen){
					temp = siswa[j];
					siswa[j] = siswa[k];
					siswa[k] = temp;					
					
				}
				else if(siswa[j].absen == siswa[k].absen){
					if(strcmp(siswa[j].nama,siswa[k].nama) > 0){
							temp = siswa[j];
							siswa[j] = siswa[k];
							siswa[k] = temp;		
						}
					}
				}
			}
						
		printf("Case #%d:\n", i+1);
		for(j = 0; j < n; j++){
				printf("%s - %d\n", siswa[j].nama, siswa[j].absen);
			}
		}
}
