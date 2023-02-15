// we sort on basis of x-coordiantes
// first we are finding the smallest distance from right and left half: d = min(dl, dr)
// Now we have to calculate or determine that whether there is distance smaller than d we calculated between the points of left and right half
// So we draw a region of d both on left and right half and we can say no points will lie outside this region with distance smaller than d

// Now we make a grid of squares with d/2 sizes in that region and we can say that at most one point will lie inside one box: d: min_distance and diagonal of square is d/root(2) which is less than d 

// Now we sort on basis of y-coordiantes and find distance of each point from 15 other points. Why? see image uploaded here


#include<iostream>
#include<math.h>
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

double Closest_Pair(vector< pair<int, int> > data, int n, int start, int end){
    int size = end-start+1;

    if(size == 1){
        return INT_MAX;
    }
    if(size == 2){
        return sqrt(pow(data[start].first - data[end].first, 2) + pow(data[start].second - data[end].second, 2));
    }

    int mid = start + (end-start)/2;
    double d = min(Closest_Pair(data, n, start, mid), Closest_Pair(data, n, mid+1, end));

    // midpoint is data[mid]
    // calculate region d on both sides

    // building new vector for region d and sorting on basis of y-coordiantes
    vector< pair<int, int> > data_y;
    pair<int, int> p;
    for (int i = 0; i < size; i++){
        if (abs(data[mid].first - data[i+start].first) < d){
            p = data[i+start];
            data_y.push_back(p);
        }
    }

    sort(data_y.begin(), data_y.end(), sort_y);

    int m = data_y.size();
    // checking for 15 points only
    for(int i=0;i<m;i++){
        int temp = min(15, m-i-1);
        for(int j=i+1;j<temp;j++){
            int index = start + j;

            double distance = sqrt(pow(data[start+i].first - data[index].first, 2) + pow(data[start+i].second - data[index].second, 2));
            d = min(d, distance);
        }
    }

    return d;
}

int main(){
    int n = -1;
    cin>>n;

    vector< pair<int, int> > data;
    pair<int, int> p;
    for(int i=0;i<n;i++){
        data.push_back(p);
        int f = -1, e = -1;
        cin>>f>>e;
        data[i].first = f;
        data[i].second = e;
    }

    sort(data.begin(), data.end(), sort_x);

    // for(int i=0;i<n;i++){
    //     cout<<data[i].first<<" "<<data[i].second<<endl;
    // }

    cout<<Closest_Pair(data, n, 0, n-1)<<endl;
    return 0;
}