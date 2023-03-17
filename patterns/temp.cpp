#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_hollow_rec(int row,int col){

    for(int i = 0;i<row;i++){

        //first ya last row
        if(i == 0 or i== row-1){
            for(int j = 0;j<col;j++){
                cout<<"* ";
            }
        }
        else{
            //remaing rows
            cout<<"* ";
            for(int j = 0;j<col-2;j++){
                cout<<"  ";
            }
            cout<<"* ";
        }

        cout<<endl;
    }
}
void print_half_pyramid(int row){

    for(int i = 0 ;i < row; i++){
        for(int j = 0;j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print_numeric_half_pyramid(int row){

    for(int i = 0 ;i < row; i++){
        for(int j = 0;j <= i; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}


void print_inverted_half_pyramid(int row){

    for(int i = 0;i<row;i++){
        for(int j = 0; j< row-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

void full_pyramid(int row){

    int x = 1;
    int y = row;
    int z =0;
while(y--){
    for(int i = 0;i<row-x;i++){
        cout<<"  ";
    }
    if(x==1){cout<<"* ";}
    else{
        for(int i = 0;i<x+z;i++){
        cout<<"* ";
    }
    }
    cout<<endl;
    x++;
    z++;
    }
}

void print_inverted_full_pyramid(int n){

    for(int row = 0; row < n; row++){

        // space
        for(int i = 0;i<row;i++){
            cout<<" ";
        }

        //star
        for(int i = 0; i<n-row;i++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print_full_numeric_pyramid(int n){


    for(int row = 0;row<n;row++){

        //spaces
            for(int i = 0;i<n-row-1;i++){
                cout<<" ";
            }
        //numbers
            int start = row+1;
            for(int i = 0;i <=row;i++){
                cout<<start++;
            }
        //reverse counting

            int x = 2*row;
            for(int i = 0;i<row;i++){
                cout<<x++;
            }

        cout<<endl;
    }
}

void print_numeric_hollow_pyramid(int n){

    for(int row = 0; row<n ; row++){

        //spaces
        for(int i = 0;i<n-row-1;i++){
            cout<<" ";
        }

        // numbers and spaces
        int start = 1;
        for(int i = 0;i<2*row+1;i++){

            if(row==0 or row == n-1){
                
                if(i%2==0){
                    cout<<start;
                    start++;
                }
                else{
                    cout<<" ";
                }
            }
            else{

                if(i==0){cout<<1;}
                else if(i==2*row){cout<<row+1;}
                else{cout<<" ";}
            }
        }
        cout<<endl;
        
        
    }
}
int main(){



    // print_hollow_rec(3,5);
    //print_half_pyramid(6);
    //print_inverted_half_pyramid(6);
    //print_numeric_half_pyramid(6);
    //full_pyramid(6);
    // print_inverted_full_pyramid(6);
    // print_full_numeric_pyramid(4);
    //print_numeric_hollow_pyramid(5);
    //int a = 5;
    //cout<<++a * ++a<<endl;
   


}