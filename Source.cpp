#include <iostream>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	const int SIZE = 5;
	int mas[SIZE];
	int sum=0;
	string stoka1;
	srand(time(0));
	for (int i = 0; i < SIZE; i++) {
		mas[i] = rand() % 21;
		sum += mas[i];
		cout << mas[i] << " ";
	}
	ifstream in;
	in.open("testGit.txt");
	in >> stoka1;
	int i = 0;
	while(getline(in, stoka1)){
		mas[i] = stoi(stoka1);
		i++;
	}
	in.close();
	ofstream out;
	out.open("testGit.txt");
	out.close();
	return 0;
}