#include<stdio.h>

int queue[20], front=-1, rear=-1;
int graph[10][10], visited[10], n;

void bfs(int start)
{
    int i;
    queue[++rear] = start;
    visited[start] = 1;

    while(front != rear)
    {
        start = queue[++front];
        printf("%d ", start);

        for(i=0;i<n;i++)
        {
            if(graph[start][i]==1 && visited[i]==0)
            {
                queue[++rear]=i;
                visited[i]=1;
            }
        }
    }
}

int main()
{
    int i,j,start;

    printf("Enter number of nodes: ");
    scanf("%d",&n);

    printf("Enter adjacency matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&graph[i][j]);

    printf("Enter starting node: ");
    scanf("%d",&start);

    bfs(start);

    return 0;
}
