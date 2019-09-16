//
//  graphClass.cpp
//  drinks
//
//  Created by Sam McCabe on 3/3/19.
//  Copyright © 2019 Sam McCabe. All rights reserved.
//

#include "graphClass.hpp"
#include <iostream>
#include <set>
#include <vector>


Graph::Graph(int numVertices) {
    this->numVertices = numVertices;
    adjMatrix = new bool*[numVertices];
    for (int i = 0; i < numVertices; i++) {
        adjMatrix[i] = new bool[numVertices];
        for (int j = 0; j < numVertices; j++)
            adjMatrix[i][j] = false;
    }
}

void Graph::addEdge(int i, int j) { adjMatrix[i][j] = true; }

int Graph::getNumVertices() { return numVertices; }

void Graph::toString() {
    for (int i = 0; i < numVertices; i++) {
        std::cout << i << " : ";
        for (int j = 0; j < numVertices; j++) {
            std::cout << adjMatrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int Graph::getNumEdges(int i) {
    int counter = 0;
    for (int j = 0; j < numVertices; j++) {
        if (adjMatrix[i][j]) {
            counter++;
        }
    }
    return counter;
}

 std::vector<int> Graph::edgesInRow(int i) {
    std::vector<int> edges;
    for (int j = 0; j < numVertices; j++) {
        if (adjMatrix[i][j]) {
            edges.push_back(j);
        }
    }
    return edges;
}

bool Graph::isEdge(int i, int j) { return adjMatrix[i][j]; }


