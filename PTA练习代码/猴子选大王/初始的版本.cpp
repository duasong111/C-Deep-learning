#include <iostream>
using namespace std;
#define N 1001
int arr[N] = { 0 };
int main()
{
    int n, k, m;//严格遵守题
    int cnt=0,b=0; //cnt是出局 ，b是标记
    cin >> n >> k >> m;
  
   while(cnt!=n){ //终止条件
       if(k>(n-1)) k=0; //标记位置，也说明其长度不止一个
      if(arr[k]==0) b++; //把循环过得给过掉
       while(b==m){ //如果说到了那个标记的数字
           cnt++;
           b=0;
           arr[k]=1;
       }
       k++;
   }
    for(int i=0;i<=n;i++){//将其不是的都排除掉
        if(arr[i]==0)
             cout<<i-1<<"";
    }
   // cout<<k-1<<"";
    return 0;
}
