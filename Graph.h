#pragma once
#include <iostream>
#define SIZE 10

class Graph
{
public:
	Graph()
	{
		for (size_t i = 0; i < SIZE; ++i)
		{
			for (size_t j = 0; j < SIZE; j++)
			{
				matrix[i][j] = 0;
			}
		}
		vecrtexCount = 0;
	}

	void addVertex(int vnumber);
	void addEdge(int v1, int v2, int weigth);
	void depth(int start);

private:

	void depthInner(int current, bool visited[]);
	bool edgeExists(int v1, int v2);

	int matrix[SIZE][SIZE];

	int vertexes[SIZE];
	int vecrtexCount;
};

