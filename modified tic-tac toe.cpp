#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"\n";
    cout<<"                                               MODIFIED TIC-TAC-TOE\n";
    cout<<"                                              ----------------------\n\n";
    cout<<"RULES:\n";
    cout<<"There are 3 boards initially. Both players, turn by turn, make a 'X' mark on any unfilled cell of any board.\n";
    cout<<"Whenever a line is formed (horizontal/vertical/diagonal) on a particular board, that board is removed from playing area and the game continues in the remaining boards.\n";
    cout<<"When only one board remains,and a player makes a line on that board, he LOSES.\n\n";
    cout<<"LET THE GAME BEGIN !!!\n\n\n\n";
int count=3;
char arr1[3][3],arr2[3][3],arr3[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        arr1[i][j]='_';
        arr2[i][j]='_';
        arr3[i][j]='_';
    }
}
int b,r,c;
bool check1=1,check2=1,check3=1;
int move=1;
int count1=0;
while(count!=0){
        if(move==1){
            cout<<"player1 make a move: \n\n";
            move=0;
        }
        else {
            cout<<"player2 make a move: \n\n";
            move=1;
        }
    if(check1){
        cout<<1<<"\n";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<arr1[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    if(check2){
        cout<<2<<"\n";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<arr2[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    if(check3){
        cout<<3<<"\n";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<arr3[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }

    cout<<"select available board no. (from 1-3):";
    cin>>b;
    cout<<"select row no. (from 1-3):";
    cin>>r;
    r--;
    cout<<"select column no. (from 1-3):";
    cin>>c;
    c--;
    count1++;
    if(b==1){
        arr1[r][c]='X';
        if((arr1[0][0]=='X'&&arr1[0][1]=='X'&&arr1[0][2]=='X') || (arr1[1][0]=='X'&&arr1[1][1]=='X'&&arr1[1][2]=='X') || (arr1[2][0]=='X'&&arr1[2][1]=='X'&&arr1[2][2]=='X') ||
           (arr1[0][0]=='X'&&arr1[1][0]=='X'&&arr1[2][0]=='X') || (arr1[0][1]=='X'&&arr1[1][1]=='X'&&arr1[2][1]=='X') || (arr1[0][2]=='X'&&arr1[1][2]=='X'&&arr1[2][2]=='X') ||
           (arr1[0][0]=='X'&&arr1[1][1]=='X'&&arr1[2][2]=='X') || (arr1[0][2]=='X'&&arr1[1][1]=='X'&&arr1[2][0]=='X')){
            check1=0;
            count--;
           }
    }
    else if(b==2){
        arr2[r][c]='X';
        if((arr2[0][0]=='X'&&arr2[0][1]=='X'&&arr2[0][2]=='X') || (arr2[1][0]=='X'&&arr2[1][1]=='X'&&arr2[1][2]=='X') || (arr2[2][0]=='X'&&arr2[2][1]=='X'&&arr2[2][2]=='X') ||
           (arr2[0][0]=='X'&&arr2[1][0]=='X'&&arr2[2][0]=='X') || (arr2[0][1]=='X'&&arr2[1][1]=='X'&&arr2[2][1]=='X') || (arr2[0][2]=='X'&&arr2[1][2]=='X'&&arr2[2][2]=='X') ||
           (arr2[0][0]=='X'&&arr2[1][1]=='X'&&arr2[2][2]=='X') || (arr2[0][2]=='X'&&arr2[1][1]=='X'&&arr2[2][0]=='X')){
            check2=0;
            count--;
           }
    }
    else{
        arr3[r][c]='X';
        if((arr3[0][0]=='X'&&arr3[0][1]=='X'&&arr3[0][2]=='X') || (arr3[1][0]=='X'&&arr3[1][1]=='X'&&arr3[1][2]=='X') || (arr3[2][0]=='X'&&arr3[2][1]=='X'&&arr3[2][2]=='X') ||
           (arr3[0][0]=='X'&&arr3[1][0]=='X'&&arr3[2][0]=='X') || (arr3[0][1]=='X'&&arr3[1][1]=='X'&&arr3[2][1]=='X') || (arr3[0][2]=='X'&&arr3[1][2]=='X'&&arr3[2][2]=='X') ||
           (arr3[0][0]=='X'&&arr3[1][1]=='X'&&arr3[2][2]=='X') || (arr3[0][2]=='X'&&arr3[1][1]=='X'&&arr3[2][0]=='X')){
            check3=0;
            count--;
           }
    }
    cout<<"\n\n\n";
}
cout<<endl;
if(count1%2==0){
    cout<<"player1 Wins ";
}
else{
    cout<<"player2 Wins ";
}
return 0;
}
