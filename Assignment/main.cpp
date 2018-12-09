#include <iostream>
#include "Stacktype.cpp"

using namespace std;

void CheckSum(int *List,int sum);
//void CheckSum2(int *List,int sum);


int main()
{
    int aList[5] = {1,3,9,4,2};
    int sum = 13;

    CheckSum(aList,sum);
    //CheckSum2(aList,sum);

}

void CheckSum(int *List,int sum){
    Stacktype<int>S1;
    bool found = false;
    //Stacktype<int>S2;
    int val1,val2;
    int x = sizeof(List);
    for(int i=0 ; i<x ; i++){
        S1.Push(List[i]);
        //S2.Push(List[x-1-i]);
    }
    while(!found && !S1.isEmpty()){
        for(int i=0 ; i<x ; i++){
            if(((List[i] + S1.Top()) == sum) && (List[i] != S1.Top())){
                val1 = List[i];
                val2 = S1.Top();
                found = true;
                break;
            }
            else{
                found = false;
            }
        }S1.Pop();
    }

    if(found){
        cout << "Exists: " << val1 << " & " << val2 << endl;
    }
    else{
        cout << "Not Exists" << endl;
    }

}
