#include <iostream>
using namespace std;
//selection sorting
void sorting_array ( int arr[],int n);
//bubble sort
void bubble_sort();
// insetion sort !!problem
void insertionSort(int arr[], int n) ;
// merge sorting
void merge_sorting_2sub_arr(int arr[],int n);
int main()
{
int arr[]={1,5,8,3,69,4};
sorting_array ( arr,6);

int z;
    for (z = 0; z < n; z++){
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
//selection sorting
void sorting_array ( int arr[],int n){
 for (int i=0;i<n-1;i++){
    int minm=i;
    for (int j=i+1;j<n;j++){
        if (arr[j]<arr[minm])
            minm=j;
    }

int temp =arr[i];
arr[i]=arr[minm];
arr[minm]=temp;
 }


//dubble sort
void bubble_sort(){
int i, j,temp;
   int a[10] = {10,2,0,14,43,25,18,1,5,45};

for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;

      }
   }

}
cout <<"Sorted Element List ...\n";
for(i = 0; i<10; i++) {
   cout <<a[i]<<"\t";
}

}
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
int z;
    for (z = 0; z < n; z++){
        cout << arr[i] << " ";
    cout << endl;
}

}

// merge sorting
void merge_sorting_2sub_arr(int arr[],int n){
  int n1=n/2;
  int n2=n/2;
  int l[n1];
  int r[n2];
  int i,j;
  for (i=0;i<n1;i++){

    l[i]=arr[i];
  }
for (j=n1;j<n;j++){
    r[j]=arr[j];
}
sorting_array ( l,n1);
sorting_array ( r,n2);
i=0;j=0;int k=1;
while (i < n1 && j < n2)
    {
        if (l[i] <= r[j])
        {
            arr[k] = l[i];
            i++;
        }
        else
        {
            arr[k] = r[j];
            j++;
        }
        k++;
    }
 while (i < n1)
    {
        arr[k] = l[i];
        i++;
        k++;
    }


while (j < n2)
    {
        arr[k] = r[j];
        j++;
        k++;}

int z;
    for (z = 0; z < n; z++){
        cout << arr[i] << " ";
    cout << endl;}

}




