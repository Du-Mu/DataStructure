#include <stdio.h>

#define INC 32767
#define MAXV 100
typedef struct ANode
{
    int adjvex;             //the adjacent point number of the edge
    struct ANode *nextarc;  //the pointer to the next edge
    int weigh;              //the weigh of every nodes
}ArcNode;                   //edge nodes
typedef struct
{
    int value;              //the other information 
    ArcNode *firstarc;      //point to the first edge nodes
}VNode;                     //header type
typedef struct 
{
    VNode adijist[MAXV];    //the header array
    int n, e;               //the num of vertices and edges
}AdjGraph;                  //the entire Graph

void CreateAdj(AdjGraph *G, int A[MAXV][MAXV], int n, int e)
{//creat a graph
    int j;
    ArcNode *p;
    G = (AdjGraph *)malloc(sizeof(AdjGraph));
    
    for (int i = 0 ; i < n ; i++)
        (G->adijist[i].firstarc) = NULL;

    for (int i = 0 ; i < n ; i++)
        for (int j = n-1 ; j >= 0 ; j--)
            if (A[i][j]!=0 && A[i][j]!=INC)
            {
                p = (ArcNode *)malloc(sizeof(ArcNode));
                p->adjvex = j;
                p->weigh = A[i][j];
                p->nextarc = G->adijist[i].firstarc;
                G->adijist[i].firstarc = p;
            }

    G->n = n;
    G->e = e;
}
void DispAdj(AdjGraph *G)
{//output the adjacency lisy
    ArcNode *p;
    for (int i = 0 ; i < G->n ; i++)
    {
        p = G->adijist[i].firstarc;
        print("%3d:",i);
        while (p!=NULL)
        {
            printf("%3d[%d]", p->adjvex, p->weigh);
            p = p->nextarc;
        }
        printf("^\n");
    }
}
 