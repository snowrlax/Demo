#include<stdio.h>
int f (int n){
    int ans = 0;
    for(int i = 1; i < n; i++){
        if (i < n/2){
            ans -= i;
        }else{
            ans += i;
            return ans;
        }
              
    }
    return ans;  
}
int main(){
    // int i = 4, *j, **k;
    // j = &i;
    // k = &j;
    // printf("%d%d%d",*j, **k, *(*k));


    // int arr[10][10][10];
    // arr[5][5][5] = 23;
    // printf("%d",arr[5][5][5]);
    // return 0;

    // printf("%d", f(10));

    static int x;
    // x = 12;
    // ++x;
    printf("%d",x);
    return 0;

}