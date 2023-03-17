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