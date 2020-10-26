#include "eugene_test.h"

int main()
{
    FILE *fp;
    char filename[40]  ;
    int i,j ;
    float da[6][10] = {0} ;
    printf("filename : ");
    gets(filename);
    fp=fopen("as.csv","r");
    fseek(fp, 5L, SEEK_SET);   // 从文件第二行开始读取
    for(i = 0 ;i < 6 ; i++)
    {
        for(j = 0 ;j < 10 ; j++)
		{
			fscanf(fp,"%f",&da[i][j]);
			fseek(fp, 1L, SEEK_CUR);   /*fp指针从当前位置向后移动*/
		}
    }       
	for(i = 0 ;i < 6 ; i++)
    {
        printf("%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t\n",da[i][0],
         da[i][1],da[i][2],da[i][3],da[i][4],da[i][5],da[i][6],da[i][7],da[i][8],da[i][9]);
    } 

    system("pause");
}
