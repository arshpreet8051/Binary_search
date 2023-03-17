#include<bits/stdc++.h>
using namespace std;

// 1 -------> Rectangle
void print_rectangle(int row,int col){
    
    //outer loop for row
    for(int i = 0;i<row;i++){
        //inner loop for col 
        for(int j = 0;j<col;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
}

// 2 --------> Sqaure
void print_square(int x){

    // (row == col) for square
    int row = x;
    int col = x;

    for(int i = 0;i<row;i++){
        for(int j = 0;j<x;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}


// 3------> printing hollow rectangle
void print_hollow_rec(int r,int c){

    for(int i = 0;i<r;i++){
        if(i == 0 or i == r-1){ // if 1st or last row print all stars
            for(int j = 0;j<c;j++){cout<<"* ";}
        }
        else{//print star at start and end and for rest print spaces
            cout<<"* ";
            for(int j = 0;j<c-2;j++){
                cout<<"  ";
            }
            cout<<"* ";
        }

        cout<<endl;
    }
}

// 4 ----> half pyramid
void print_half_pyramid(int row){

    for(int i =0 ;i<row;i++){
        for(int j = 0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// 5 ---> inverted half pyramid
void print_inverted_half_pyramid(int row){

    for(int i = 0;i<row;i++){
        for(int j = 0; j< row-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// 6 -----> numeric half pyramid
void print_numeric_half_pyramid(int row){

    for(int i = 0 ;i < row; i++){
        for(int j = 0;j <= i; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

// 7 ----> inverted numeric half pyramid
void print_inverted_numeric_half_pyramid(int row){

    for(int i = 0;i<row;i++){
        for(int j = 0; j< row-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

// 8 ----> full pyramid
void print_full_pyramid(int n){

    for(int row = 0; row < n; row++){

        // spaces 
        for(int i = 0 ; i < n-row-1;i++){
            cout<<" ";
        }

        // star "*"
        for(int i = 0; i < row+1;i++){
            cout<<"* ";
        }   

        cout<<endl;
    }
}

// 9 ----> inverted full pyramid

void print_inverted_full_pyramid(int n){

    for(int row = 0;row < n;row++){

        //spaces
        for(int i = 0;i<row;i++){
            cout<<" ";
        }

        //star
        for(int i = 0;i<n-row;i++){
            cout<<"* ";
        }

        cout<<endl;
    }
}

// 10 ----> diamond (full pyramid + inverted full pyramid)

void print_diamond(int n){

    print_full_pyramid(n);

    print_inverted_full_pyramid(n);
}

// 11 -----> numeric full pyramid
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

// 12 -----> numeric hollow pyramid
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
    //print_rectangle(3,5);
    //print_square(5);
    //print_hollow_rec(6,10);
    //print_half_pyramid(6);
    //print_inverted_half_pyramid(6);
    // print_numeric_half_pyramid(6);
    // print_inverted_numeric_half_pyramid(6);
    //print_full_pyramid(9);
    //print_inverted_full_pyramid(8);
    // print_diamond(7);
    //print_full_numeric_pyramid(4);
    //print_numeric_hollow_pyramid(4);



    return 0;
}