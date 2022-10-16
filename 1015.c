#include <stdio.h>
#include <string.h>
#include <math.h>
struct ccd 
{
	 char a [100];
	 long int   b ;
} ;//注意这里的分号是必须要的！！！！！！！！！！ 
 int main ()
 {     struct ccd c = {"富婆999式",99 };
		 		struct ccd d = {"富婆9999式",999 };
		 			struct ccd e = {"富婆99999式",1999 };
		 				struct ccd f = {"富婆9999999式",299000000 };
		 				printf ("你愿意用你的身体换取今后一辈子的幸福生活吗！！！！！！！！！！！！\n\\\\\n\n\n\n\n\n\\\n 请输入：非常愿意\n");
		 				char g [20];
		 				scanf("%s",&g[20]);
		 				if(g =="非常愿意")
		 				{
						 printf ("书名：%s\n",c.a);
		 				printf ("价格：%d美元\n\n\n",c.b);
		 					printf ("书名：%s\n",d.a);
		 				printf ("价格：%d美元\n\n\n",d.b);
		 					printf ("书名：%s\n",e.a);
		 				printf ("价格：%d美元\n\n\n",e.b);
		 					printf ("书名：%s\n",f.a);
		 				printf ("价格：%d美元\n\n\n",f.b);}
		 				else
						 printf ("你失去了一个有钱途的机会\n"); 
		 				
 return 0;
 }

