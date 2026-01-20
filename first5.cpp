#include <iostream>
#include <cstring> 
using namespace std;

//                            As --------- 19 ( Inheritance )
//                            -------------------------------

// 1. Define a class Game with an array of 5 int variable as instance member to store the score of each of 5 rounds. Provide method to setscore( int round,int score )      //  69 Program
//    Also provide method getScore(int round ).

// class Game {
// private:
//     int score[5];
// public:
//     void setScore(int round, int score) {
//         this->score[round - 1] = score;
//     }

//     int getScore(int round) {
//         return score[round - 1];
//     }
// };

// int main() {
//     Game g;

//     g.setScore(1, 50);
//     g.setScore(2, 60);
//     g.setScore(3, 40);
//     g.setScore(4, 35);
//     g.setScore(5, 20);

//     for (int i=1; i<=5;i++) {
//         cout << "Score of Round " << i
//              << " = " << g.getScore(i) << endl;
//     }

//     return 0;
// }

// 2. In question 1. derive a class GameResult eith an array of 5 types variable to store the result in each round value is 2 for win, 0 for loose and 1 for draw.    // 69 Program
//    Provide methods to set Result and gerResult. Write method to calculate final result of the game.

// class Game {
// private:
//     int score[5];
// public:
//     void setScore(int round, int score) {
//         if (round >= 1 && round <= 5)
//             this->score[round - 1] = score;
//     }

//     int getScore(int round) {
//         if (round >= 1 && round <= 5)
//             return score[round - 1];
//         return 0;
//     }
// };

// class GameResult : public Game {
// private:
//     int result[5];
// public:
//     static const int WIN = 2;
//     static const int DRAW = 1;
//     static const int LOSE = 0;

//     void setResultFromScore(int round) {
//         int s = getScore(round);

//         if (s >= 50)
//             result[round - 1] = WIN;
//         else if (s >= 30)
//             result[round - 1] = DRAW;
//         else
//             result[round - 1] = LOSE;
//     }

//     int getResult(int round) {
//         if (round >= 1 && round <= 5)
//             return result[round - 1];
//         return 0;
//     }

//     void finalResult() {
//         int totalScore = 0;
//         int totalResult = 0;

//         for (int i=1; i<=5; i++) {
//             totalScore += getScore(i);
//             totalResult += getResult(i);
//         }

//         cout << "\nTotal Score = " << totalScore;
//         cout << "\nTotal Result Points = " << totalResult;
//     }
// };

// int main() {
//     GameResult g;
//     int scores[5] = {50, 60, 40, 20, 45};

//     for (int i=1; i<=5; i++) {
//         g.setScore(i, scores[i - 1]);
//         g.setResultFromScore(i);
//     }

//     for (int i=1; i<=5; i++) {
//         cout << "Round " << i
//              << " Score = " << g.getScore(i)
//              << " Result = " << g.getResult(i)
//              << endl;
//     }

//     g.finalResult();

//     return 0;
// }


// 3. Define a class Actor with name age as instance variables and setter, getter as instance methods. Define a class TVactor as derived class of Actor with instance variable to store
//    number of TV projects done or running and define setter, getter. Also define seTVactor() and showTVactor(). Define a class movie doe or running and define setter, getter Also dfine setMoviesActor() and showMovieActor().
//    Derive a class AllScreeActor from TVactor and movieActor. Define a method to setActor() and showData().          // 70 Program

// class Actor {
// private:
//     char name[50];
// public:
//     void setName(char nm[]) {
//         strcpy(name, nm);
//     }

//     char* getName() {
//         return name;
//     }
// };

// class TVactor : public Actor {
// private:
//     int tvProjects;
// public:
//     void setTVactor(int tv) {
//         tvProjects = tv;
//     }

//     int getTVactor() {
//         return tvProjects;
//     }

//     void showTVactor() {
//         cout << "TV Projects: " << tvProjects << endl;
//     }
// };

// class MovieActor : public Actor {
// private:
//     int movieProjects;
// public:
//     void setMovieActor(int mv) {
//         movieProjects = mv;
//     }

//     int getMovieActor() {
//         return movieProjects;
//     }

//     void showMovieActor() {
//         cout << "Movie Projects: " << movieProjects << endl;
//     }
// };

// class AllScreenActor : public TVactor, public MovieActor {
// public:
//     void setActor() {
//         char nm[50]; 
//         int tv, mv;

//         cout << "Enter Actor Name: ";
//         cin >> nm;

//         cout << "Enter number of TV projects: ";
//         cin >> tv;

//         cout << "Enter number of Movie projects: ";
//         cin >> mv;

//         TVactor::setName(nm);
//         setTVactor(tv);
//         setMovieActor(mv);
//     }

//     void showData() {
//         cout << "\nActor Details\n";
//         cout << "Name: " << TVactor::getName() << endl;
//         showTVactor();
//         showMovieActor();
//     }
// };

// int main() {
//     AllScreenActor a;
//     a.setActor();
//     a.showData();
//     return 0;
// }
