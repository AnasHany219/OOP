#include<bits/stdc++.h>
using namespace std;

int main(){
    try{
        int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        int index;
        cin >> index;
        if(index < 0)   
            throw "Error, Negative index."; // Goto catch which has char
        if(index >= 10) 
            throw index;                    // Goto catch which has int
        for(int i = 0; i <= index; i++)
            cout << arr[i] << " ";          // if 0 <= index <= 9, it will print the first indexes number
    }                                       // Must write catch after try and Nothing separates them
    catch(const char * str){                // without const: terminate called after throwing an instance of 'char const*'
        cout << "Exception: " << str;
    }
    catch(int i){
        cout << "Exception: index " << i << " out of range.";
    }
    /*
    ----------First Output-----------
    -5
    Exception: Error, Negative index.
    ----------Second Output----------
    5
    0 1 2 3 4 5
    ----------Third Output-----------
    15
    Exception: index 15 out of range.
    */
    return 0;
}
