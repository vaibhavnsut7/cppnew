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

int count_triangles(vector<Point> points){
    unordered_map<int,int> xx;
    unordered_map<int,int> yy;
    
    for (auto p:points){
        xx[p.x]++;
        yy[p.y]++;
    }
    
    int ans=0;
    for (auto p:points){
        ans+=(xx[p.x]-1)*(yy[p.y]-1);
    }
    
    return ans;
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
 cout<<count_triangles(points);
 -----------
 OUTPUT

 */
