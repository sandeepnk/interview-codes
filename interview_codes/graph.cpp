#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Edge{
	
	int src;
	int dst;
};

class Graph{
	
	int V;
	int E;
	struct Edge* edges; 

public: 
	Graph(int V, int E){
		this->V = V;
		this->E = E;
		edges = (struct Edge*)malloc(E*sizeof(struct Edge));
	}
	void addEdge(int i,int src,int dst){

		edges[i].src = src;
		edges[i].dst = dst;	
	}
	void printEdges(){
		for(int i=0;i<E;i++){
			cout<<"Edge "<<i << ":"<<edges[i].src <<","<<edges[i].dst;
		}
	}
	
};

int main(){

	Graph* g = (Graph *)new Graph(3,3);
	g->addEdge(0,0,1);
	g->addEdge(1,1,2);
	g->addEdge(2,2,0);

	g->printEdges();
}

