#include<stdio.h>
void Insert(int a[],int v);
void Delete(int a[],int v);
void Modify(int a[],int v);
void Query(int a[],int v);
void Output(int a[]);
void select(int a[],int sel,int v);
int n=0;
int  main ()
{
	int i,j,a[100],sel,v;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("[1]Insert\n");
	printf("[2]Delete\n");
	printf("[3]Modify\n");
	printf("[4]Query\n");
	printf("[Other option]End\n");
	
	while(1)
	{
		scanf("%d",&sel);
		printf("input\n");
		scanf("%d",&v);
		select(a,sel,v);
		printf("\n");
	}
	return 0;
}
void select(int a[],int sel,int v)
{
	switch(sel)
	{
		case 1:Insert(a,v);break;
		case 2:Delete(a,v);break;
		case 3:Modify(a,v);break;
		case 4:Query(a,v);break;
		default :printf("End");break;
	}
}
void Output(int a[])
{
	int i,j;
	

	for(i=0;i<n;i++)
	{
		if(i==0)
		printf("%d",a[i]);
		else
		printf("%d",a[i]);
	}
}
void Insert(int a[],int v)
{
	int i,j;
	for(i=0;i<n;i++)//��λ�ҵ����������λ�� 
	{
		if(v<a[i])
		break;
	}
	for(j=n-1;j>=i;j--)//�����ڳ���λ������� 
	a[j+1]=a[j];

	a[i]=v;
	n++;//�����е�Ԫ��������1��
	Output(a); 
}
void Delete(int a[],int v)
{
	int i,flag=-1;//flagΪ�������-1��ʾδ�ҵ��������ʾ�ҵ���
	for(i=0;i<n;i++)//����Ѱ�� 
	{
		if(v==a[i])
		{
			flag=i;//�ҵ������ 
			break;
		}
	}
	
		if(flag==-1)//û�ҵ�
		{
			printf("Not Found");
			 
		}
		else
		{
			for(i=flag;i<n-1;i++)//��ǰ�ƶ�һλ,ִ��ɾ������ 
			a[i]=a[i+1];
		 } 
		
	 
	 n--;
	 Output(a); 
}
void Modify(int a[],int v)
{
	int i,j,flag=-1;
	for(i=0;i<n;i++)
	 {
	 	if(v==a[i])
	 	{
	 		printf("change to:");
	 		scanf("%d",&j);
	 		a[i]=j;
	 		flag=1;
		 }
	 }
	 if(flag==-1)
	 printf("Not Found");
	 else
	Output(a);
	
}

void Query(int a[],int v)//���ַ���ѯ 
{
	int mid,left=0,right=n-1;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(v==a[mid])
		{
			printf("The index:%d",mid);
			return;
		}
		else if(v<a[mid])
		right=mid-1;
		else
		left=mid+1;
	}
	printf("Not Found");
}






