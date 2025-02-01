#include<bits/stdc++.h>
using namespace std;
void mergeArr(vector<int>&arr,int start,int middle,int end)
 {
    int size1=middle-start+1,size2=end-middle;
    vector<int>left(size1),right(size2);
    for(int i=0;i<size1;i++)left[i]=arr[start+i];
    for(int i=0;i<size2;i++)right[i]=arr[middle+1+i];
    int i=0,j=0,k=start;
    while(i<size1&&j<size2){
        if(left[i]<=right[j])arr[k]=left[i],i++;
        else arr[k]=right[j],j++;
        k++;
    }
    while(i<size1)arr[k]=left[i],i++,k++;
    while(j<size2)arr[k]=right[j],j++,k++;
}
void sortArray(vector<int>&arr,int start,int end){
    if(start>=end)return;
    int middle=start+(end-start)/2;
    sortArray(arr,start,middle);
    sortArray(arr,middle+1,end);
    mergeArr(arr,start,middle,end);
}
vector<int>randomArray(int size){
    vector<int>arr(size);
    for(int i=0;i<size;i++)arr[i]=rand()%10000;
    return arr;
}
int main(){
    vector<int>lengths={1000,5000,10000,20000,50000,100000};
    for(int len:lengths){
        vector<int>arr=randomArray(len);
        auto start=chrono::high_resolution_clock::now();
        sortArray(arr,0,len-1);
        auto end=chrono::high_resolution_clock::now();
        chrono::duration<double>time=end-start;
        cout<<"N="<<len<<",Time taken="<<time.count()<<" seconds"<<endl;
    }
    return 0;
}
