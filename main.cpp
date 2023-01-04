#include <iostream>
#include "graph.h"

using namespace std;

int main()
{
    Graph G;
    createList_1301213215(G);

    //Menambahkan node A, B, C dan D
    addNode_1301213215(G,newNode_1301213215('A'));
    addNode_1301213215(G,newNode_1301213215('B'));
    addNode_1301213215(G,newNode_1301213215('C'));
    addNode_1301213215(G,newNode_1301213215('D'));

    // tambahkan edge pada graph seperti Gambar 1
    //Edge A
    addEdge_1301213215(G,'A','C');
    addEdge_1301213215(G,'A','D');
    addEdge_1301213215(G,'A','B');
    //Edge B
    addEdge_1301213215(G,'B','A');
    addEdge_1301213215(G,'B','D');
    //Edge C
    addEdge_1301213215(G,'C','A');
    //Edge D
    addEdge_1301213215(G,'D','B');
    addEdge_1301213215(G,'D','A');
    // tampilkan graph seperti Gambar 3
    printGraph_1301213215(G);
    return 0;
}
