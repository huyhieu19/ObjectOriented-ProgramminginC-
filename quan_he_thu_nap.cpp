#include<iostream>
#include<math.h>
using namespace std;

class Point{
    private:
        int x;
        int y;
    public:
        Point(){
            
        }
        Point(int x, int y){
            this->x=x;
            this->y=y;
        }
        void setX(int x){
            this->x=x;
        }
        int getX(){
            return x;
        }
        void setY(int y){
            this->y=y;
        }
        int getY(){
            return y;
        }
};

class Line{
    private:
        Point begin;
        Point end;
    
    public:
        Line(Point begin, Point end){
            this->begin = begin;
            this->end = end;
        }
        
        Line(int x1, int y1, int x2, int y2){
            this->begin = Point(x1, y1);
            this->end = Point(x2, y2);
        }
        
        Point getBegin(){
            return begin;
        }
        
        void setBegin(Point begin){
            this->begin = begin;
        }
        Point getEnd(){
            return end;
        }
        void setEnd(Point end){
            this->end = end;
        }
        
        double getLength(){
            return sqrt(pow(end.getX() - begin.getX(), 2)+pow(end.getY() - begin.getY(),2));
        }
};
int main() {
	Point begin(1, 1);
	Point end(2, 2);
	Line line1(begin, end);
	cout << line1.getLength() << endl;

	Line line2(2, 3, 5, 4);
	cout << line2.getLength() << endl;
	return 0;
}
