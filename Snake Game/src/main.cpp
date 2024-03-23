#include <iostream>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;

//-------------Properties--------------------------//
enum Direction { Top =1 , Down, Right, Left };
struct Map { int Width, Height, FruitX, FruitY; };
struct Snake { int HeadX, HeadY, Tail_N; Direction Dir; };
struct Player { int Score; bool Lose; };
//-------------------------------------------------//

Map Map1; Snake Snake1; Player Player1;
void Generate_fruit()
{
    srand(time(NULL)); //So that the function rand does not output the same number
    Map1.FruitX = rand() % (Map1.Width - 2) + 1; //random number from 1 to 38 
    Map1.FruitY = rand() % (Map1.Height - 2) + 1; //random number from 1 to 18
}

void Setup()
{
    Map1.Width = 40;
    Map1.Height = 20;
    Generate_fruit();
    //----------------
    Snake1.HeadX = Map1.Width / 2;
    Snake1.HeadY = Map1.Height / 2; // in the middle

    Snake1.Tail_N = 0; // Without length, just a head
    //-------------------
    Player1.Score = 0;
    Player1.Lose = false;
}

void Draw()
{
    system("cls"); // in Linux ---> system("clear");
    for (int i = 0; i < Map1.Height; i++)
    {
        for (int j = 0; j < Map1.Width; j++)
        {
            if (i == 0 || i == Map1.Height - 1) cout << "*"; //in the first and last column
            else if (j == 0 || j == Map1.Width - 1) cout << "*";
            else if (i == Snake1.HeadY && j == Snake1.HeadX) cout << "O";
            else if (i == Map1.FruitY && j == Map1.FruitX) cout << "$";
            else cout << " ";

        }
        cout << endl;

    }
    cout << "Player Score : " << Player1.Score << endl;
}

void input()
{
    if (_kbhit()) // when a key on the keyboard is pressed
    {
        char c = _getch();
        switch (c)
        {
        case 'w': Snake1.Dir = Top; break;
        case 's': Snake1.Dir = Down; break;
        case 'a': Snake1.Dir = Left; break;
        case 'd': Snake1.Dir = Right; break;
        case 'x': exit(0);
        default:
            break;
        }
    }
}

void Move()
{
    switch (Snake1.Dir)
    {
    case Top:Snake1.HeadY--; break;
    case Down:Snake1.HeadY++; break;
    case Right:Snake1.HeadX++; break;
    case Left:Snake1.HeadX--; break;
    }
    if (Snake1.HeadY >= Map1.Height || Snake1.HeadY <= 0 || Snake1.HeadX >= Map1.Width || Snake1.HeadX <= 0)
    {
        Player1.Lose = true;
    }
    //the snake and fruit in one point
    if (Snake1.HeadX == Map1.FruitX && Snake1.HeadY == Map1.FruitY)
    {
        Generate_fruit();
        Player1.Score += 1;
        Snake1.Tail_N++;
    }
}

int main()
{
    Setup();
    while (!Player1.Lose)
    {
        Draw();
        input();
        Move();
        Sleep(50);
    }
    system("pause");
    return 0;
}