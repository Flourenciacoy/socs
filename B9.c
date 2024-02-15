#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[11];
    int score;
} student;

int compare(const void *a, const void *b) {
    student *s1 = (student *)a;
    student *s2 = (student *)b;
    if (s1->score != s2->score) {
        return s2->score - s1->score;
    }
    return strcmp(s1->name, s2->name);
}

int find_rank(student *students, int n, char *query) {
    
    qsort(students, n, sizeof(student), compare);
    
    for (int i = 0; i < n; i++) {
        
        if (strcmp(students[i].name, query) == 0) {
            return i + 1;
        }
    }
    
    return -1;
}

int main() {
    
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        
        int n;
        scanf("%d", &n);
        student *students = malloc(n * sizeof(student));
        
        for (int j = 0; j < n; j++) {
            scanf("%s", students[j].name);
            
            char *token = strtok(students[j].name, "#");
            strcpy(students[j].name, token);
            token = strtok(NULL, "#");
            students[j].score = atoi(token);
        }
        
        char query[11];
        scanf("%s", query);
        int rank = find_rank(students, n, query);
        
        printf("Case #%d: %d\n", i + 1, rank);
        free(students);
    }
    return 0;
}
