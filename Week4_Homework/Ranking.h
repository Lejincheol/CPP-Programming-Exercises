#include <cstdio>

struct PlayInfo {
	char name[200];
	int nMove;
	double tElapsed;
};
extern void loadRanking(const char* falename);
extern void storeRanking(const char* falename);
extern void printRanking();
extern int addRanking(int nMove, double tElap);