//
// Created by mahammad on 8/21/17.
//

#ifndef DB_IMP_SEMINAR_ALGRAPH_H
#define DB_IMP_SEMINAR_ALGRAPH_H

#include <list>
#include <vector>

// Adjacency list implementation of Graph
class ALGraph{
    int v, e;
    std::list<int>* edges;
    std::list<int>* weights;

public:
    ALGraph(int v, int e) : v(v), e(e){
        edges = new std::list<int>[v + 2];
        weights = new std::list<int>[v + 2];
        for(int i = 0; i <= v; ++i)
            edges[i].clear(), weights[i].clear();
    }

    void add_edge(int from, std::vector<int>& to, std::vector<int>& w);

    void add_edge(int from, int to, int weight = 0);

    void finished();

    std::list<int>::iterator begin(int cur_vertex);

    std::list<int>::iterator end(int cur_vertex);

    std::list<int>::iterator begin_weights(int cur_vertex);
};


#endif //DB_IMP_SEMINAR_ALGRAPH_H
