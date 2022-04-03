#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <unordered_map>



//WE DEFINE POINT OBJECT AS OUR NEED... IMPORTANT CONCEPT
class Point{
public:
    int x;
    int y;
    Point(){
        
    }
    Point(int x,int y){
        this->x=x;
        this->y=y;
    }
};

class Compare{   //IMP
public:
    bool operator()(const Point p1,const Point p2){
        if (p1.x==p2.x){
            return p1.y<p2.y;
        }
        return p1.x<p2.x;
    }
};

int count_rectangles(vector<Point> points){
    //storing points in sorted way
    set<Point,Compare> s;    //IMP
    for (Point p:points){
        s.insert(p);
    }
    int ans=0;
    for (auto i=s.begin();i!=prev(s.end());i++){
        for (auto j=next(i);j!=s.end();j++){
            //selecting two points
            Point p1=*i;
            Point p2=*j;
            //check if they are diagonals points
            if (p2.x==p1.x or p2.y==p1.y)
            {
                continue;
            }
            //other diagonal points from above points
            Point p3(p2.x,p1.y);
            Point p4(p1.x,p2.y);
            //check if other points are in set
            if(s.find(p3)!=s.end() and s.find(p4)!=s.end()){
                ans++;
            }
        }
    }
    
    return ans/2;//two pairs of same rectangle are counted different times and added to ans
}

/*
 INPUT
 int N;
 cin>>N;
 vector<Point> points;
 int x,y;
 for (int i=0;i<N;i++){
     cin>>x>>y;
     Point p(x,y);
     points.push_back(p);
 }
 cout<<count_rectangles(points);
 -----------
 OUTPUT

 */
