//
// Created by Bradley Daniel on 3/7/23.
//

#ifndef VISUAL_PATH_FINDER_RECURSIVEDIVISION_H
#define VISUAL_PATH_FINDER_RECURSIVEDIVISION_H

#include "Grid.h"

enum Orientation { Vertical, Horizontal };

class RecursiveDivision {
private:
    Grid::GridData* m_grid;
public:
    static void build_maze(Grid::GridData* grid, bool& is_running);

private:
    explicit RecursiveDivision(Grid::GridData* grid);

    void divide(gLib::Coord begin, int width, int height, int isHorizontal);

    static void draw_Wall(Grid::GridData* grid, gLib::Coord wall_begin, int wall_length, int isHorizontal);

    static int choose_Orientation(int width, int height);

    static void randomize_Start(Grid::GridData *grid);

    static void randomize_Destination(Grid::GridData *grid);

    gLib::Coord randomize_Wall(gLib::Coord begin, int width, int height, int isHorizontal);
};


#endif //VISUAL_PATH_FINDER_RECURSIVEDIVISION_H