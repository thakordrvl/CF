#include<bits/stdc++.h>
using namespace std;
int main(){

    int v[5][5];

    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin>>v[i][j];

    int student[5];
    int happiness=0;

    for(int i=1;i<=5;i++){        
        for(int j=i;j<=5;j++){

            if(2j-2<5){

                student[2j-2] += v[2j-2][2j-1];
                student[2j-1] += v[2j-1][2j-2];
            }
            
        }
    }

    for(int i=0;i<5;i++)
        happiness+=student[i];

    cout<<happiness;



    return 0;
}