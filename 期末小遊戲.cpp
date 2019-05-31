#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
int x;     // 設定輸入
int y;     // 設定密碼 
int low=1,high=500;     // 設定密碼範圍：1到500 
int i=0;     // 設定計數器 
srand(time(NULL));     // 給一個時間虛數，否則密碼隨機值會相同 
y=rand()%high+low;     // 密碼隨機範圍為最高值與最低值之間 
do{     // 用 do 迴圈 
cout << "請輸入 " << low << " ～ " << high << " 的數 ==> ";
cin >> x;
if (x>high || x<low){     // 設定輸入值必須在最高值與最低值之間 
cout << "輸入範圍錯誤!" << endl; 
continue;
}
i++;     // 計數器 
if (x==y){
cout << "答對囉!發財發財發大財!" << endl;
break;
} else if (i==10) {     // 設定答題次數最多10次 
cout << "超過答題次數，請下次再來!" << endl;
cout << "正確答案為 " << y << endl;     // 告知正確答案
break;
} else {
cout << "不對喔!剩餘答題次數: " << 10-i << " 次" << endl; 
(x>y)?high=x-1:low=x+1;     // 三元運算 
}
} while (x!=y);
system("pause");
return 0;
}
