#include <stdio.h>
#define INFINITY 9999
#define MAX 10

void Dijkstra(int Graph[MAX][MAX], int n, int start);

void Dijkstra(int Graph[MAX][MAX], int n, int start) {
    int cost[MAX][MAX], distance[MAX], pred[MAX];
    int visited[MAX], count, minDistance, nextNode, i, j;

    // Creating cost matrix
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (Graph[i][j] == 0)
                cost[i][j] = INFINITY;
            else
                cost[i][j] = Graph[i][j];

    for (i = 0; i < n; i++) {
        distance[i] = cost[start][i];
        pred[i] = start;
        visited[i] = 0;
    }

    distance[start] = 0;
    visited[start] = 1;
    count = 1;

    while (count < n - 1) {
        minDistance = INFINITY;

        for (i = 0; i < n; i++)
            if (distance[i] < minDistance && !visited[i]) {
                minDistance = distance[i];
                nextNode = i;
            }

        visited[nextNode] = 1;
        for (i = 0; i < n; i++)
            if (!visited[i])
                if (minDistance + cost[nextNode][i] < distance[i]) {
                    distance[i] = minDistance + cost[nextNode][i];
                    pred[i] = nextNode;
                }
        count++;
    }

    // Printing the distance
    for (i = 0; i < n; i++)
        if (i != start) {
            printf("\nDistance from source to %d: %d", i, distance[i]);
        }
}
int main() {
    int Graph[MAX][MAX], n, s;
    printf("Enter how many vertex : ");
    scanf("%d",&n);

    printf("Enter adjacency matrix :\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            scanf("%d",&Graph[i][j]);
        }
    printf("Enter starting vertex : ");
    scanf("%d",&s);
    Dijkstra(Graph, n, s);

    return 0;
}