// this is for finding the convex hull in the points : 
// smallest perimeter enclosing the fence 

#include<iostream>
#include<vector>
using namespace std;

bool sort_x(pair<int, int> i1, pair<int, int> i2)
{
    return (i1.first < i2.first);
}

bool sort_y(pair<int, int> i1, pair<int, int> i2)
{
    return (i1.second < i2.second);
}

// right means up: 1;
// left means down: -1

int position_point_line(pair<int, int> p1, pair<int, int> p2, pair<int, int> point){
    double slope = (p2.second - p1.second)/(p2.first - p1.first);
    
    double intercept = p1.second - (slope*p1.first);

    double value = point.second - slope*point.first - intercept;

    if(value >= 0){
        return 1;       // for right
    }

    return -1;      // for left
}

void FindHull(vector< pair<int, int> > points, vector< pair<int, int> > &fence_pts, int p1_index, int p2_index, int direction){
    if(points.size() == 0){
        return;
    }

    sort(points.begin(), points.end(), sort_y);

    pair<int, int> farthest_point;
    if(direction == -1){
        farthest_point = points[0];
        points.erase(points.begin() + 0);
    }
    else{
        farthest_point = points[points.size() - 1];
        points.erase(points.end());
    }

    fence_pts.insert(fence_pts.begin() +  p1_index + 1, farthest_point);

    vector< pair<int, int> > inside_pts;
    vector< pair<int, int> > left_outside_pts;
    vector< pair<int, int> > right_outside_pts;

    for(int i=0;i<points.size();i++){
        if(position_point_line(farthest_point, fence_pts[p1_index], points[i]) == -direction){
            inside_pts.push_back(points[i]);
        }
        else{
            // farthest point and left point 
            left_outside_pts.push_back(points[i]);
        }
    }

    for(int i=0;i<points.size();i++){
        if(position_point_line(farthest_point, fence_pts[p2_index], points[i]) == -direction){
            inside_pts.push_back(points[i]);
        }
        else{
            // farthest point and left point 
            right_outside_pts.push_back(points[i]);
        }
    }

    // now just make recursion with same direction
    FindHull(left_outside_pts, fence_pts, p1_index, p1_index+1, direction);
    FindHull(left_outside_pts, fence_pts, p1_index+1, p2_index, direction);

    return;
}

vector< pair<int, int> > QuickHull(vector< pair<int, int> > &data, int n){
    vector< pair<int, int> > fence_pts;

    sort(data.begin(), data.end(), sort_x);

    vector< pair<int, int> > left_pts;
    vector< pair<int, int> > right_pts;

    fence_pts.push_back(data[0]);
    fence_pts.push_back(data[n-1]);

    for(int i = 1;i<n-1;i++){
        if(position_point_line(data[0], data[n-1], data[i]) == 1){
            right_pts.push_back(data[i]);
        }
        else{
            left_pts.push_back(data[i]);
        }
    }

    FindHull(left_pts, fence_pts, 0, 1, -1);
    FindHull(right_pts, fence_pts, 0, 1, 1);

    return fence_pts;
}

int main(){
    vector< pair<int, int> > data;
    pair<int, int> p;
    int n = -1;
    cin>>n;

    for(int i=0;i<n;i++){
        int f = -1, e = -1;
        cin>>f>>e;
        p.first = f;
        p.second = e;

        data.push_back(p);
    }

    vector< pair<int, int> > ans = QuickHull(data, n);

    cout<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }

    return 0;
}

// Set of points: 
// -7 8 
// -4 6 
// 2 6
// 6 4 
// 8 6 
// 7 -2 
// 4 -6 
// 8 -7 
// 0 0
// 3 -2
// 6 -10
// 0 -6
// -9 -5
// -8 -2
// -8 0
// -10 3
// -2 2
// -10 4