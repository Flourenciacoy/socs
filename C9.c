#include <stdio.h>


int find_higher(int mmr, int n, int arr[]) {
  int min = 10000; 
  int index = -1;
  for (int i = 0; i < n; i++) {
    if (arr[i] > mmr && arr[i] < min) { 
      min = arr[i]; 
      index = i; 
    }
  }
  return index;
}

int find_lower(int mmr, int n, int arr[]) {
  int max = 0; 
  int index = -1; 
  for (int i = 0; i < n; i++) {
    if (arr[i] < mmr && arr[i] > max) { 
      max = arr[i]; 
      index = i; 
    }
  }
  return index;
}

int main() {
  int k; 
  scanf("%d", &k);
  for (int t = 1; t <= k; t++) { 
  
    int n; 
    scanf("%d", &n);
    int mmr[n];
    
    for (int i = 0; i < n; i++) {
      scanf("%d", &mmr[i]);
    }
    
    int f; 
    scanf("%d", &f);
    int i = find_higher(f, n, mmr);
    int j = find_lower(f, n, mmr); 
    printf("CASE #%d: ", t); 
    
    int notInside = 1;
    for (int i = 0; i < n; i++) { 
      if(f == mmr[i]) notInside = 0;
    }
    
    if (notInside == 1) { 
      printf("-1 -1\n"); 
    } else if (i == -1) { 
      printf("%d %d\n", mmr[j], f); 
    } else {
      printf("%d %d\n", f, mmr[i]); 
    }
  }
  return 0;
}
