#include <iostream>
#include <cstring>
using namespace std;

float input(char *p);

float input(char *p) 
{
	printf(p);
	float result;
	cin>>result;
   return result; 
}

int main()
{
float x1,y1,x2,y2,k,b,b2,x3,y3,f1,xh,xl,yh,yl,bh,bl,f2;
printf("a");
printf("��һ�������ҵ���Ƭ������Ȼ���ܲ�֪����Щ����ʲô��\n\n");
printf("x��������ţ�y����������ֵ\n\n");
printf("�������ֱ�ߣ�����׼��L\n\n");
x1 = float(input("������x1="));
y1 = float(input("\n������y1="));
x2 = float(input("\n������x2="));
y2 = float(input("\n������y2="));
if (x1 == x2 and y1 == y2)
    printf("\n������������ͬ�ĵ�\n");
if (x1==x2)
    {
	printf("ֱ��б�ʲ�����\n\n");
    printf("��õĻ�׼��LΪx=%f\n\n",x1);
	}
else
	{
  	k = (y1 - y2) / (x1 - x2);
    b = y1 - k*x1 ;
    printf("\n\n��õĻ�׼��LΪ y = %f x + %f\n\n' ",k,b);
	}
printf(" ��ƽ����L'�������������ƽ���ߵĵ�\n\n");
x3 = float(input("\n������x3="));
y3 = float(input("\n������y3="));
b2 = y3 - k*x3;
f1 = (b - b2)*1000;
printf("\n��õ�ƽ����L��Ϊy=%f x + %f\n\n" , k,b2);
printf("ֱ�߶����Ϊ %f um \n\n", f1);

printf("����һ�����ƽ�жȡ����������ƽ���ߵĵ����������㣬hΪ�ߣ�lΪ��\n\n");
xh = float(input("������xh="));
yh = float(input("\n������yh="));
xl = float(input("\n������xl="));
yl = float(input("\n������yl="));
bh = yh - k*xh;
bl = yl - k*xl;
f2 = 1000*(bh - bl);
printf("\n��õ�ƽ����L1��Ϊy=%f x + %f\n\n" ,k,bh);
printf("��õ�ƽ����L2��Ϊy=%f x + %f\n\n" ,k,bl);
printf("ƽ�ж����Ϊ %f um",f2);
printf("\n�չ��ؼ�o(*������*)��");
cin.get(); 
}

