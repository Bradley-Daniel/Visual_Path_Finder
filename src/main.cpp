#include "Grid.h"
#include "GridWindow.h"
#include "Graph.h"



#include "PathAlgorithm.h"
#include "BreadthFirstSearch.h"
#include "RecursiveDivision.h"
#include <iostream>

int main() {
    srandom(time(nullptr));
    int width = 15, height = 10;
    gwindow::GridWindow gridwindow = gwindow::GridWindow();
    gridwindow.get_terminal_size(width, height);
    grid::Grid grid = grid::Grid(width, height);
    graph::Graph graph(&grid);
    graph.construct_Graph(&grid);
    gridwindow.display_Grid(&graph);

    return 0;
}