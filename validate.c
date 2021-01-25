#include "definitions.h"

int squareOnBoard(const int square) {
    return filesBoard[square] == OFFBOARD ? FALSE : TRUE;
}

int boardSideValid(const int boardSide) {
    return (boardSide == WHITE || boardSide == BLACK) ? TRUE : FALSE;
}

int fileRankValid(const int fileRank) {
    return (fileRank >= 0 && fileRank <= 7) ? TRUE : FALSE;
}

int pieceValidateEmpty(const int piece) {
    return (piece >= EMPTY_SQR && piece <= blackKing) ? TRUE : FALSE;
}

int pieceValidate(const int piece) {
    return (piece >= whitePwn && piece <= blackKing) ? TRUE : FALSE;
}