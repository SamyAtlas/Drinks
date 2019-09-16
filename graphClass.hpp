//
//  graphClass.hpp
//  drinks
//
//  Created by Sam McCabe on 3/3/19.
//  Copyright © 2019 Sam McCabe. All rights reserved.
//

#ifndef graphClass_hpp
#define graphClass_hpp

#include <stdio.h>
#include <iostream>
#include <set>
#include "recipes.hpp"


class Graph {
public:
    Graph(int numVertices);
    void addEdge(int i, int j);
    int getNumVertices();
    void toString();
    int getNumEdges(int i);
    std::vector<int> edgesInRow(int i);
    bool isEdge(int i, int j);
    
private:
    int numVertices;
    bool** adjMatrix;
};


#endif /* graphClass_hpp */
