int firstRowSpace=(2*n)-2;
    for(int row=0;row<n;row++){
        //numb
        for(int col=0;col<row;col++){
            cout<<col+1;
        }
        //space
        for(int col=0;col<firstRowSpace;col++){
            cout<<" ";
        }
        firstRowSpace=firstRowSpace-2;
        //numb
        for(int col=row;col>0;col--){
            cout<<col;
        }
        cout<<endl;
    }