#include "graph.h"

void createList_1301213215(Graph &G){
    first(G) = NULL;
}
adrNode newNode_1301213215(char x){
    adrNode p = new Node;
    p->info = x;
    p->child = NULL;
    p->next = NULL;
    return p;
}
void addNode_1301213215(Graph &G, adrNode p){
    if (first(G) == NULL){
        first(G) = p;
    }else{
        adrNode bantu;
        bantu = first(G);
        while (bantu->next != NULL){
            bantu = bantu->next;
        }
        bantu->next = p;
    }
}
adrNode findNode_1301213215(Graph G, char x){
    if (first(G) == NULL){
        return NULL;
    }else{
        adrNode bantu;
        bantu = first(G);
        while (bantu != NULL){
            if(bantu->info == x){
                return bantu;
            }
            bantu = bantu->next;
        }
        return NULL;
    }
}
void addEdge_1301213215(Graph &G, char x, char y){
    if(findNode_1301213215(G,x) == NULL){
        cout << "Data Parents Tidak ada"<<endl;
    }else{
        if (findNode_1301213215(G,x)->child == NULL){
            findNode_1301213215(G,x)->child = newNode_1301213215(y);
        }else{
            adrNode bantu;
            bantu = findNode_1301213215(G,x)->child;
            while (bantu->next != NULL){
                bantu = bantu->next;
            }
            bantu->next = newNode_1301213215(y);
        }
    }
}

bool isConnected_1301213215(Graph G, char x, char y){
    if(findNode_1301213215(G,x) == NULL){
        cout << "Data Parents Tidak ada"<<endl;
        return false;
    }else{
        adrNode CekAnak;
        CekAnak = findNode_1301213215(G,x)->child;

        while(CekAnak!= NULL){
            if(CekAnak->info == y){
                return true;
            }
            CekAnak = CekAnak->next;
        }
        return false;
    }
}
void printGraph_1301213215(Graph G){
    if (first(G) == NULL){
        cout << "Tidak ada Data"<<endl;
    }else{
        adrNode bantu;
        bantu = first(G);
        while(bantu != NULL){
            cout << " node " << bantu->info <<":";
            adrNode bantu_Anak = bantu->child;
            while(bantu_Anak != NULL){
                cout<<" - "<<bantu_Anak->info;
                bantu_Anak = bantu_Anak->next;
            }
            cout<<endl;
            bantu = bantu->next;
        }
    }
}
