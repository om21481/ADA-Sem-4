#include<iostream>
#include<vector>
#include<stack>
// #include<bits/stdc++.h>
using namespace std;

void Stable_marriage(int n, vector< vector<int> > men_preference, vector< vector<int> > women_preference, vector<int> &ans){
    // storing last indices of men
    vector<int> men_index;
    
    for(int i=0;i<n;i++){
        men_index.push_back(-1);
    }

    // pushing free men
    stack<int> free_men;
    // stores men index and women position in men's preference list 

    for(int i=0;i<n;i++){
        free_men.push(i);
    }

    while(!free_men.empty()){
        int element = free_men.top();
        int index = men_index[element];
        free_men.pop();

        for(int i=index+1 ;i<n;i++){
            // men is i and women is women 
            int women = men_preference[element][i];

            if(ans[women] == -1){
                // women is free
                men_index[element] = i;
                ans[women] = element;

                break;
            }
            else{
                // check for men if swapping is possible
                bool swapping_done = false;

                for(int j=0;j<n;j++){
                    if(women_preference[women][j] == ans[women]){
                        break;
                    }
                    else if(women_preference[women][j] == element){
                        // now swapping can hapen
                        free_men.push(ans[women]);
                        ans[women] = element;
                        swapping_done = true;
                        break;
                    }
                }

                if(swapping_done){
                    break;
                }
            }
        }
    }

    return;

}

int main(){
    vector< vector<int> > men_preference;
    vector< vector<int> > women_preference;

    int n = -1;
    cin>>n;

    vector<int> temp;
    // for men preference
    for(int i=0;i<n;i++){
        men_preference.push_back(temp);
        for(int j=0;j<n;j++){
            int element = -1;
            cin>>element;

            men_preference[i].push_back(element);
        }
    }

    // for women preference
    for(int i=0;i<n;i++){
        women_preference.push_back(temp);
        for(int j=0;j<n;j++){
            int element = -1;
            cin>>element;

            women_preference[i].push_back(element);
        }
    }

    vector<int> ans;
    for(int i=0;i<n;i++){
        ans.push_back(-1);
    }

    Stable_marriage(n, men_preference, women_preference, ans);

    cout<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<i<<" -> "<<ans[i]<<endl;
    }

    return 0;
}

// This is the testcase verified.
// 3
// 1 0 2
// 1 2 0
// 2 1 0
// 1 2 0
// 2 0 1
// 1 2 0
