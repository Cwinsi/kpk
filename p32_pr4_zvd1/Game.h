#ifndef P32_PR4_ZVD1_GAMEAREA_H
#define P32_PR4_ZVD1_GAMEAREA_H


class Game {
private:
    int size;
    int **area;
    int playersCount;
    int currentPlayer;
    int lineLength;

    void writeArea();
    void turn();
    bool updateAreaCell(char x, int y);
    bool checkWinOrNightly();
    bool checkLine(int origin[], int x, int y);
public:
    Game(int size, int lineLength, int playersCount);
    ~Game();
    void start();
};


#endif //P32_PR4_ZVD1_GAMEAREA_H
