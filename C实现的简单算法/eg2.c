#include <stdio.h>
    int main()
    {
      int a[100],i,j,t,n;
        scanf("%d",&n);  //����һ����n����ʾ��������n����
        for(i=1;i<=n;i++)  //ѭ������n����������a��
            scanf("%d",&a[i]);
        //ð������ĺ��Ĳ���
        for(i=1;i<=n-1;i++) //n��������ֻ�ý���n-1��
        {
            for(j=1;j<=n-i;j++) //�ӵ�1λ��ʼ�Ƚ�ֱ�����һ����δ��λ��������һ��Ϊʲô��n-i�Ϳ����ˡ�
            {
                if(a[j]<a[j+1]) //�Ƚϴ�С������
                {  t=a[j]; a[j]=a[j+1]; a[j+1]=t;  }
            }
        }
        for(i=1;i<=n;i++)  //������
            printf("%d ",a[i]);
        getchar();getchar();
        return 0;
    }
