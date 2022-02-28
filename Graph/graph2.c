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

