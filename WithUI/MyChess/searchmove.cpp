#include "define.h"
#include "createmoves.h"
#include "makemove.h"
#include "evaluate.h"
#include "searchmove.h"

point mkdecision(int plyer, int depth) // computer decision
{
    point comnxtpt = minimax(plyer, depth); // get optimal point, comnxtpt means computer next point
    bool movsuc = makeMove(comnxtpt, plyer);
    comnxtpt.point_type = plyer;
    return comnxtpt;
}

point minimax(int plyer, int depth) {
    int best = MIN;
    vector<point> apts = createMoves(); // available points
    vector<point> bestpts;              // best points
    for (int i = 0; i < apts.size(); i++) {
        point tpt;                      // trial point
        tpt.get(apts[i].x, apts[i].y, 0);
        chessBoard[tpt.x][tpt.y] = plyer;
        int v = search_min(plyer, tpt, depth - 1, INT_MAX, INT_MIN);
        if (v == best) {
            bestpts.push_back(tpt);
        }
        if (v > best) {
            best = v;
            bestpts.clear();
            bestpts.push_back(tpt);
        }
        chessBoard[tpt.x][tpt.y] = 0;
    }
    point bestpt;
    bestpt.get(-1, -1, 0);
    if (bestpts.size() > 0) {
        bestpt = bestpts[0];
    }
    return bestpt;
}

int search_min(int plyer, point pt, int depth, int alpha, int beta) {
    int v = evaluate(pt);
    if (depth <= 0 || gameover(pt)) {
        return v;
    }
    int best = INT_MAX;
    vector<point> apts = createMoves();
    for (int i = 0; i < apts.size(); i++) {
        point tpt;
        tpt.get(apts[i].x, apts[i].y, 0);
        chessBoard[tpt.x][tpt.y] = plyer;
        int v = search_max(plyer, tpt, depth - 1, best < alpha ? best : alpha, beta);
        chessBoard[tpt.x][tpt.y] = 0;

        if (v < best)
            best = v;
        if (v < beta)
            break;
    }
    return best;
}

int search_max(int plyer, point pt, int depth, int alpha, int beta) {
    int v = evaluate(pt);
    if (depth <= 0 || gameover(pt)) {
        return v;
    }
    int best = INT_MIN;
    vector<point> apts = createMoves();
    for (int i = 0; i < apts.size(); i++) {
        point tpt;
        tpt.get(apts[i].x, apts[i].y, 0);
        chessBoard[tpt.x][tpt.y] = plyer;
        int v = search_min(plyer, tpt, depth - 1, alpha, best > beta ? best : beta);
        chessBoard[tpt.x][tpt.y] = 0;
        if (v > best)
            best = v;
        if (v > alpha)
            break;
    }
    return best;
}
