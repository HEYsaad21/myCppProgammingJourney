#include<iostream>
using namespace std;

void show(int arr[],int n){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int traverse(int arr[],int idx,int size){
    if(idx<0||idx>=size){
        return -7777777;

    }
else{
    return arr[idx];
}
    

}

void reverse(int arr[],int size){
    int i=0,j=size-1;

    while(i<=j){
        swap(arr[i++],arr[j--]);
    }
}






int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int *arr= new int[n];
    cout<<"Enter the elements: ";


    for(int i=0;i<n;i++){
        cin>>arr[i];


    }



    while(1){
        
        int ch;
        cout<<"1.show array\n2.Traverse by index\n3.Reverse array and print\n4.quit\n\nEnter your choice: "<<endl;
        cin>>ch;

        switch(ch){
            case 1:
            cout<<"Current array: ";
            show(arr,n);

            break;
            case 2:
            int idx;
            cout<<"Enter the index: ";
            cin>>idx;

if(traverse(arr,idx,n)==-7777777){
    cout<<"Element at that index is not found ! \n";


}
else{
    cout<<"Element at that index is: "<< traverse(arr,idx,n)<<endl;

}
            

            break;
            case 3:

            reverse(arr,n);
            cout<<"Reversed array: ";
            show(arr,n);

            break;
            case 4:
            return 0;

            break;

            default:

            cout<<"Invalid input";
        }

        

        
    }

}