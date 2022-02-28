//Graph use the adjacency matrix
#define MAXV 100
//the max-num of vertices
#define INF 32767

typedef struct 
{
    int No;//the No. of vertices
    int Value;//can be insteaded of other information
}VertexType;//The struct to express the vertices
typedef struct 
{
    int edges[MAXV][MAXV];
    int n, e;//the num of vertices and edge
    VertexType vex[MAXV];//to store vertices information
}MatGraph;

