#include<iostream>
using namespace std;

struct Point {
	int x;
	int y;
} point;

struct Point2 {
	int x, y;
};
struct Point2 point2;

struct Point3 {
	int x, y;
};
Point3 point3;

int main() {
	point.x = 0;
	cout << point.x << endl;
}