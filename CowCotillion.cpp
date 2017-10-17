//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;
bool illegal[1000];

int main()
{
    char c;
    int n, num, bull;
    int i, j;
    
    cin >> n;
    for(i=0;i<n;i++){
        bull=0;
        cin >> num;
        for(j=0;j<num;j++){
            cin >> c;
            if(c=='>')
                bull++;
            else
                bull--;
            if(bull<0)
                illegal[i]=true;
        }
        if(bull!=0)
            illegal[i]=true;
    }
    
    for(i=0;i<n;i++){
        if(illegal[i]){
            cout << "illegal" << endl;
            continue;
        }
        cout << "legal" << endl;
    }
    
    return 0;
}
