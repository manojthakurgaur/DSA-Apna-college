//My solution.
void sum_subarray(int arr[],int n){
    int sum=0;
    int m=n;
    for(int i=0;i<n;i++){
        int l=1;
        for(int j=0;j<m;j++){
            for(int k=i;k<l+i;k++){
                sum=sum+arr[k];
            }
            l=l+1;
        }
        m=m-1;
    }
    cout<<sum;
}
//Solution by apna college
void sum_subarray(int arr[],int n){
    void sum_subarray(int arr[],int n){
    int sum=0;
    for(int i=0; i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum[j]<<endl;
        }
    }
}
}
