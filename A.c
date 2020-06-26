#include <stdio.h>
#include <stdlib.h>
int main()
{
struct assess
            {
                int num1;
                int num2;
                int num3;
                int num4;
                int num5;
                int num6;
                int num7;
                int num8;
                int num9;
                int num10;
            } assess[100];
    printf("***************************歌手比赛管理系统************************************\n");
    printf("                       G**********************G                                \n");
    printf("***********************************G*******************************************\n");
    printf("    1.输入选手数据                2. 评委打分              3.计算平均分    \n    4.成绩排序");
    printf("                    5.写入数据文件           6.打开文件\n    7.退出系统\n");
    printf("*******************************************************************************\n");
    for (;;)
    {
        printf("                              请输入操作名\r");
        int n, i = 1, j, t;
        char a;
        FILE *fp;
        struct singer
        {
            int mingci;
            char name[20];
        } player[100];
        scanf("%c", &a);
        switch (a)
        {
        case '1':
            printf("请输入选手的个数（少于100）");
            scanf("%d", &n);
            int sum[100], max[100], min[100];
            float c[100];
            for (i = 1; i <= n; i++)
            {
                sum[i] = 0;
                max[i] = 0;
                min[i] = 900000;
            }

            printf("请输入选手的姓名\n ");
            for (i = 1; i <= n; i++)
            {
                scanf("   %s", player[i].name);
            }
            break;
        case '2':

            for (j = 1; j <= n; j++)
            {
                printf("\n请输入评委1对歌手%d的打分", j);
                scanf("%d", &assess[j].num1);
                printf("请输入评委2对歌手%d的打分", j);
                scanf("%d", &assess[j].num2);
                printf("请输入评委3对歌手%d的打分", j);
                scanf("%d", &assess[j].num3);
                printf("请输入评委4对歌手%d的打分", j);
                scanf("%d", &assess[j].num4);
                printf("请输入评委5对歌手%d的打分", j);
                scanf("%d", &assess[j].num5);
                printf("请输入评委6对歌手%d的打分", j);
                scanf("%d", &assess[j].num6);
                printf("请输入评委7对歌手%d的打分", j);
                scanf("%d", &assess[j].num7);
                printf("请输入评委8对歌手%d的打分", j);
                scanf("%d", &assess[j].num8);
                printf("请输入评委9对歌手%d的打分", j);
                scanf("%d", &assess[j].num9);
                printf("请输入评委10对歌手%d的打分", j);
                scanf("%d", &assess[j].num10);
                sum[j] = sum[j] + assess[j].num1 + assess[j].num2 + assess[j].num3 + assess[j].num4 + assess[j].num5;
                sum[j] = sum[j] + assess[j].num6 + assess[j].num7 + assess[j].num8 + assess[j].num9 + assess[j].num10;
            }
            printf("\n\n\n");
            break;
        case '3':
            for (j = 1; j <= n; j++)
            {
                max[j] = (max[j] > assess[j].num1) ? max[j] : assess[j].num1;
                max[j] = (max[j] > assess[j].num2) ? max[j] : assess[j].num2;
                max[j] = (max[j] > assess[j].num3) ? max[j] : assess[j].num3;
                max[j] = (max[j] > assess[j].num4) ? max[j] : assess[j].num4;
                max[j] = (max[j] > assess[j].num5) ? max[j] : assess[j].num5;
                max[j] = (max[j] > assess[j].num6) ? max[j] : assess[j].num6;
                max[j] = (max[j] > assess[j].num7) ? max[j] : assess[j].num7;
                max[j] = (max[j] > assess[j].num8) ? max[j] : assess[j].num8;
                max[j] = (max[j] > assess[j].num9) ? max[j] : assess[j].num9;
                max[j] = (max[j] > assess[j].num10) ? max[j] : assess[j].num10;
            }
            for (j = 1; j <= n; j++)
            {
                min[j] = (min[j] < assess[i].num1) ? min[j] : assess[i].num1;
                min[j] = (min[j] < assess[i].num2) ? min[j] : assess[i].num2;
                min[j] = (min[j] < assess[i].num3) ? min[j] : assess[i].num3;
                min[j] = (min[j] < assess[i].num4) ? min[j] : assess[i].num4;
                min[j] = (min[j] < assess[i].num5) ? min[j] : assess[i].num5;
                min[j] = (min[j] < assess[i].num6) ? min[j] : assess[i].num6;
                min[j] = (min[j] < assess[i].num7) ? min[j] : assess[i].num7;
                min[j] = (min[j] < assess[i].num8) ? min[j] : assess[i].num8;
                min[j] = (min[j] < assess[i].num9) ? min[j] : assess[i].num9;
                min[j] = (min[j] < assess[i].num10) ? min[j] : assess[i].num10;
            }
            for (j = 1; j <= n; j++)
            {
                c[j] = (sum[j] - max[j] - min[j]) / 8.0;
                printf("第%d个选手的平均的分是%15.2f\n", j, c[j]);
            }
            printf("\n\n\n");
            break;
        case '4':
            for (i = 1; i <= n; i++)
            {
                for (j = 1, t = 1; j <= n; j++)
                {
                    if (c[i] < c[j])
                        t = t + 1;
                }
                player[i].mingci = t;
            }
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= n; j++)
                {
                    if (i == player[j].mingci)
                        printf("%s是第%d     得分为%15.2f\n", player[j].name, i, c[j]);
                }
                printf("\n\n\n");
            }
            break;
        case '5':
            if ((fp = fopen("C:\\singer.dat", "wb")) == NULL)
            {
                printf("不能打开文件\n");
            }
            for (i = 1; i <= n; i++)
                fwrite(&player[i], sizeof(struct singer), 1, fp);
            fclose(fp);
            printf("                               保存成功\n\n\n");
            break;
        case '6':
            printf("请输入选手的个数");
            printf("（为了准确显示，您输入的人数不应该超过已保存信息的人数)");
            scanf("%d", &n);
            if ((fp = fopen("C:\\singer.dat", "rb")) == NULL)
            {
                printf("不能打开文件\n");
            }
            for (i = 1; i <= n; i++)
            {
                fread(&player[i], sizeof(struct singer), 1, fp);
                printf("　　　%s的名次为%10d     \n", player[i].name, player[i].mingci);
            }
            fclose(fp);
            break;
        case '7':
            exit(0);
        }
    }
    return 0;
}