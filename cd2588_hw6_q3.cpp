#include <iostream>
#include <vector>
using namespace std;

int countVar(const vector <int> &v, int num);
int nextLowest(const vector <int> &v, int min);
int main() {
	vector <int> gradesList;
	int grade;

	cin >> grade;
	while (grade >= 0) {
		gradesList.push_back(grade);
		cin >> grade;
	}
	int current = gradesList[0], currentCount=0, maxVal=gradesList[0];
	for (unsigned int i = 0; i < gradesList.size(); i++) {
		if (gradesList[i] < current)
			current = gradesList[i];
		if (gradesList[i] > maxVal)
			maxVal = gradesList[i];
	}
	currentCount = countVar(gradesList, current);
	cout << "Number of " << current << "'s: " << currentCount << endl;
	int lastVal = current;
	while (current < maxVal) {
		current = nextLowest(gradesList, lastVal);
		currentCount = countVar(gradesList, current);
		cout << "Number of " << current << "'s: " << currentCount << endl;
        lastVal = current;
	}

	return 0;
}
int countVar(const vector <int> &v, int num) {
	int count = 0;
	for (unsigned int i = 0; i < v.size(); i++) {
		if (v[i] == num)
			count++;
	}
	return count;
}
int nextLowest(const vector <int> &v, int min) {
    int lowest;
	if (v[0] > min)
		lowest = v[0];
	else
		lowest = v[1];

	for (unsigned int i = 0; i < v.size(); i++) {
		if ((v[i] > min) && (v[i] < lowest))
			lowest = v[i];
	}
	return lowest;
}

