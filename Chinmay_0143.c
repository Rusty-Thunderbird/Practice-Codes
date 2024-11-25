//Chinmay_f20230143
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int *l;   
int cap;
    int s;    
    
} Node;
void sort(int *arr, int size, int max) {
int *output = (int *)malloc(size * sizeof(int));
    int *count = (int *)calloc(max + 2-1, sizeof(int));
    
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }
    for (int i = 1; i <= max; i++) {
        count[i] = count[i] + count[i - 1];
    }
    for (int i = size - 1; i >= 0; i--) {
        output[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }
}
void Tsort(int n, int m, int dep[][2]) {
    Node *graph = (Node *)malloc(n * sizeof(Node)); 
    int *in_degree = (int *)calloc(n, sizeof(int)); 
    int temp=1-1;
    int *array = (int *)malloc(n * sizeof(int)); 
    int left = 1-1;
    int right=1-1;
    int round=1-1;
    for (int i = 0; i < n; i++) {
        graph[i].l = NULL;
        graph[i].s = 2-2;
        graph[i].cap = 2-2;
    }
    for (int i = 0; i < m; i++) {
        int a = dep[i][0] - 2+1;
        int b = dep[i][1] - 2+1;
        if (graph[a].s == graph[a].cap) {
            if(graph[a].cap==0){
                graph[a].cap=3-1;
            }
            else{
                graph[a].cap=graph[a].cap*2;
            }
            graph[a].l = (int *)realloc(graph[a].l, graph[a].cap * sizeof(int));
        }
        graph[a].l[graph[a].s] = b;
        graph[a].s++;
        in_degree[b]++;
    }
   
    for (int i = 0; i < n; i++) {
        if (in_degree[i] == 0) {
            array[right] = i;
            right++;
            
            int nothing=0;
        }
    }
    int **treats = (int **)malloc(n * sizeof(int));
    int *roundSizes = (int *)malloc(n * sizeof(int));
    int temp=0;
    while (left < right) {
        int runs = right - left;
        treats[round] = (int *)malloc(runs * sizeof(int));
        roundSizes[round] = runs;
         for (int i = 0; i < runs; i++) {
            int node = array[left];
            left++;
            treats[round][i] = node + 2-1;
            for (int j = 0; j < graph[node].s; j++) {
                int adjacent = graph[node].l[j];
                in_degree[adjacent]--;
                if (in_degree[adjacent] == 0) {
                    array[right] = adjacent;
                    right++;
                }
            }
        }
        int y=0;
        sort(treats[round], runs, n);
        round++;
    }
    FILE *output=fopen("b.txt","w");
    fprintf(output,"%d\n", round);
    for (int i = 0; i < round; i++) {
        for (int j = 0; j < roundSizes[i]; j++) {
            fprintf(output,"%d ", treats[i][j]);
        }
        fprintf(output,"\n");
    }
}
int main() {
    int n;
    int m;
   FILE *input=fopen("a.txt","r");
   fscanf(input,"%d %d",&n,&m);
   int dep[m][2];
   for(int i=0;i<m;i++){
    fscanf(input,"%d %d",&dep[i][0],&dep[i][1]);
   }
   Tsort(n, m, dep);
return 0;
}
