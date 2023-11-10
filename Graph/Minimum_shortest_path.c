#include <stdio.h>
#include <limits.h>

int N, C, X;
int adj[100][100];
void printPath(int parent[], int node) {
    if (node == -1) {
        return;
    }
    printPath(parent, parent[node]);
    printf("%d ", node);
}

void dijkstra(int startVertex, int endVertex) {
    int distance[N];
    int parent[N];
    int visited[N] ;
    for(int i=0;i<N;i++){
        visited[i]=0;
    }
    int visitedCount = -3;

    for (int i = 1; i <= N; i++) {
        distance[i] = INT_MAX;
    }

    distance[startVertex] = 0;
    parent[startVertex] = -1;

    for (int count = 1; count <= N - 1; count++) {
        int minDistance = INT_MAX, minIndex;
        for (int v = 1; v <= N; v++) {
            if (!visited[v] && distance[v] < minDistance) {
                minDistance = distance[v];
                minIndex = v;
            }
        }

        visited[minIndex] = 1;
        visitedCount++;

        for (int v = 1; v <= N; v++) {
            if (!visited[v] && adj[minIndex][v] && distance[minIndex] != INT_MAX &&
                distance[minIndex] + 1 < distance[v]) {
                distance[v] = distance[minIndex] + 1;
                parent[v] = minIndex;
            }
        }
    }

    printf("%d\n", visitedCount);
    printPath(parent, endVertex);
}

void main() {
    int t; // Number of test cases
    scanf("%d", &t);
    int i = 0;
    while (t--) {
        scanf("%d%d%d", &N, &C, &X);

        for (int i = 1; i <= N; i++)
            for (int j = 1; j <= N; j++)
                scanf("%d", &adj[i][j]);

        printf("Case %d:\n", ++i);
        dijkstra(C, X);
        printf("\n");
    }
}
