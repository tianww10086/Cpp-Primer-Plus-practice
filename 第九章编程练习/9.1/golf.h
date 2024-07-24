//Golf.h
#ifndef GOLF_H_
#define GOLF_H_

const int len = 40; //内部静态变量
struct golf {
	char fullname[len];
	int handicap;
};

void setgolf(golf& g, const char* name, int hc);
int setgolf(golf&);
void handicap(golf& g, int hc);
void showgolf(const golf& g);

#endif // !GOLF_H_
