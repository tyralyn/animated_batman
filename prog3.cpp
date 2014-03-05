#include<iostream>
#include<sstream>
#include<string>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "sequenceAlign.h"
#define MAX_SIZE 500000
using namespace std;

string parse (string filename) {
	ifstream i(filename.c_str());
	if (i) {
		std::string s;
		i>>s;
		return s; }
	return "";
}

int main(int argc, char* argv[]) {
	string file1=argv[2], file2=argv[4];
	string current;
	double m(2), c(-.5), d(1.0);
	for (int i = 5; i<10; i+=2){
		if (argc>=i+1) {
			current=argv[i];
			if (current=="-c")
				c=atof(argv[i+1]);
			else if (current=="-m")
				m=atof(argv[i+1]);
			else if (current=="-d")
				d=atof(argv[i+1]);
		}
		else
			break;
	}
	sequenceAlign* s = new sequenceAlign(m, c, d);
	s->putSequences(parse(file1), parse(file2));
	s->printSequences();
}
  /*string line;
  getline(cin, line);
  int numItems = atoi(line.c_str());
  scene* myScene = new scene(numItems);
  for (int i=0; i<numItems; i++) {
    getline(cin, line);
    parse(line, myScene);
  }
  myScene->setup();
  //myScene->checkTest(0, numItems-1);
  // Scene->divideAndConquer();
  myScene->closestPointsBruteForce();
  myScene->testSetup();
   myScene->divideAndConquer();*/


