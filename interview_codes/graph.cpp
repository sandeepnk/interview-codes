/*
 * graph.cpp
 *
 *  Created on: 31-Jan-2017
 *      Author: sandeep
 */

#include<iostream>

struct Edge{

	int src;
	int dst;
};

class Graph{

	int V,E;
	Edge *edge;
public:
	//Edge *edge;

	Graph(int V, int E){
		this->V = V;
		this->E = E;
		edge = (Edge*) new Edge[E];
	}
	void addEdge(int,int);
	void printEdges();
};

void Graph::addEdge(int src,int dst){

	static int i=0;
	edge[i].src = src;
	edge[i].dst = dst;
	i++;

}

void Graph::printEdges(){

	std::cout<<"Edge0:"<<edge[0].src <<", "<<edge[0].dst<<std::endl;
	std::cout<<"Edge1:"<<edge[1].src <<", "<<edge[1].dst<<std::endl;
	std::cout<<"Edge2:"<<edge[2].src <<", "<<edge[2].dst<<std::endl;

}

int main(){

	Graph* g = (Graph*) new Graph(3,3);
	g->addEdge(0,1);
	g->addEdge(1,2);
	g->addEdge(2,0);
	g->printEdges();


}


