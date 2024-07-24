#include<iostream>
#include"golf.h"

int main() {
	golf gar[5];
	int i = 0;
	while (i < 5&& setgolf(gar[i]) ) {
		i++;
	}

	//输出;
	for (int j = 0; j < i; j++) {
		showgolf(gar[j]);
	}
}
