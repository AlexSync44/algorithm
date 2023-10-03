#include "Graph.h"

void Graph::addVertex(int vnumber)
{
	vertexes[vecrtexCount++] = vnumber;
}

void Graph::addEdge(int v1, int v2, int weigth)
{
	matrix[v1][v2] = weigth;
	matrix[v2][v1] = weigth;
}

void Graph::depth(int start)
{
	bool visited[SIZE];

	for (size_t i = 0; i < SIZE; ++i)
	{
		visited[i] = false;
	}

	depthInner(start, visited);
}

void Graph::depthInner(int current, bool visited[])
{
	std::cout << 'V' << current << " ->";
	visited[current] = true;

	for (size_t i = 0; i < SIZE; ++i)
	{
		if (edgeExists(current, i) && !visited[i])
		{
			depthInner(i, visited);
		}
	}
}

bool Graph::edgeExists(int v1, int v2)
{
	return matrix[v1][v2];
}