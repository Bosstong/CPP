#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;
int order;
class Student
{
	private:
	string Name;
	string Id;
	int Classnum;
	long long Idnum;
	double Math;
	double English;
	double computer;
	double Sum;
	double Average;
	Student *nxt;
	public:
void ShowMenu()
{
	puts("**************************欢迎使用*************************\n");
	puts("***********************学生成绩管理系统*********************\n");
	puts("---------------------------------------------------------\n");
	puts("*                      1.录入学生信息                     *\n");
	puts("*                      2.显示学生信息                     *\n");
	puts("*                      3.查询学生信息                     *\n");
	puts("*                      4.修改学生信息                     *\n");
	puts("*                      5.添加学生信息                     *\n");
	puts("*                      6.排序学生信息                     *\n");
	puts("*                      7.删除学生信息                     *\n");
	puts("*                      0.退出                            *\n");
	puts("*--------------------------------------------------------*\n");
	puts("你要输入的编号是（0—7）：");
}

void ExitSystem()
{
	puts("\n\n\n           *****************************************");
	puts("                               感谢您的使用！          ");
	puts("                 **************************************\n\n\n");
	exit(0);
}

void InputError()
{
	puts("\n                 **************************************");
	puts("                      您输入的指令有误，请重新输入。   ");
	puts("                 **************************************\n");
}
void Add()
{
	puts("                 **************************************");
	puts("                                录入学生信息           ");
	puts("                 --------------------------------------");
	puts("                               请输入学生信息          ");
	puts("                 **************************************\n");
	char x = 'Y';
	ofstream fout("data.txt", ios::app);
	if (!fout)
	{
		puts("文件打开失败！");
		exit(0);
	}
	Student *nw;
	nw = new Student;
	while (x == 'Y' || x == 'y')
	{
		printf("请输入学号：");
		cin >> nw->Id;
		printf("请输入姓名：");
		cin >> nw->Name;
		printf("请输入班级：");
		cin >> nw->Classnum;
		printf("请输入数学成绩：");
		cin >> nw->Math;
		while (nw->Math < 0 || nw->Math > 100)
		{
			puts("您输入的数据不合法，请重新输入");
			cin >> nw->Math;
		}
		printf("请输入英语成绩：");
		cin >> nw->English;
		while (nw->English < 0 || nw->English > 100)
		{
			puts("您输入的数据不合法，请重新输入");
			cin >> nw->English;
		}
		printf("请输入计算机成绩：");
		cin >> nw->computer;
		while (nw->computer < 0 || nw->computer > 100)
		{
			puts("您输入的数据不合法，请重新输入");
			cin >> nw->computer;
		}
		nw->Sum = (nw->Math) + (nw->English) + (nw->computer);
		nw->Average = (nw->Sum) / 3;
		fout << nw->Id << " " << nw->Name << " " << nw->Classnum << " " << nw->Math << " " << nw->English << " " << nw->computer << " "
			 << nw->Sum << " " << nw->Average << endl;
		printf("学生信息添加成功！\n");
		puts("是否继续添加？(Y/N)");
		cin >> x;
	}
	fout.close();
}

void Display()
{
	ifstream fin("data.txt");
	if (!fin)
	{
		puts("文件打开失败！");
		exit(0);
	}
	puts("*******************************************************");
	puts("                    所有学生信息           ");
	puts("*******************************************************\n");
	cout << "序号\t学号\t姓名\t班级\t数学成绩\t英语成绩\t计算机成绩\t总分\t平均分\n";
	Student *nw;
	nw = new Student;
	int cnt = 0;
	while (fin >> nw->Id >> nw->Name >> nw->Classnum >> nw->Math >> nw->English >> nw->computer >> nw->Sum >> nw->Average)
	{
		cnt++;
		cout << left << setw(8) << cnt
			 << left << setw(12) << nw->Id
			 << left << setw(8) << nw->Name
			 << left << setw(8) << nw->Classnum
			 << left << setw(16) << nw->Math
			 << left << setw(16) << nw->English
			 << left << setw(16) << nw->computer
			 << left << setw(6) << nw->Sum
			 << setw(2) << nw->Average
			 << endl;
	}
	fin.close();
}
void Mend()
{
	char x = 'Y';
	string tmp;
	puts("*******************************************************");
	puts("                    修改学生信息           ");
	puts("*******************************************************\n");

	while (x == 'Y' || x == 'y')
	{
		ifstream fin("data.txt", ios::app);
		ofstream fout("data2.txt", ios::app);
		if (!fin)
		{
			puts("文件打开失败！");
			exit(0);
		}
		if (!fout)
		{
			puts("文件打开失败！");
			exit(0);
		}

		puts("         请先按照以下关键字查找学生：");
		puts("--------------------------------------");
		puts("            1.姓名\n");
		puts("            2.学号\n");
		puts("            0.返回上一级菜单");
		printf("指令：");
		scanf("%d", &order);
		while ((order < 0) || (order > 2))
		{
			puts("");
			InputError();
			puts("         请先按照以下关键字查找学生：");
			puts("--------------------------------------");
			puts("            1.姓名\n");
			puts("            2.学号\n");
			puts("            0.返回上一级菜单");
			printf("指令：");
			scanf("%d", &order);
		}
		if (order == 0)
			return;

		if (order == 1)
		{
			printf("请输入姓名：");
			cin >> tmp;
		}
		else if (order == 2)
		{
			printf("请输入学号：");
			cin >> tmp;
		}

		Student *nw;
		nw = new Student;
		bool isFind = false;
		while (fin >> nw->Id >> nw->Name >> nw->Classnum >> nw->Math >> nw->English >> nw->computer >> nw->Sum >> nw->Average)
		{
			if ((tmp.compare(nw->Name)) && (tmp.compare(nw->Id)))
			{
				fout << nw->Id << " " << nw->Name << " " << nw->Classnum << " " << nw->Math << " " << nw->English << " " << nw->computer << " "
					 << nw->Sum << " " << nw->Average << endl;
				continue;
			}
			isFind = true;

			cout << "\n学号\t姓名\t班级\t数学成绩\t英语成绩\t计算机成绩\t总分\t平均分\n";
			cout << left << setw(12) << nw->Id
				 << left << setw(8) << nw->Name
				 << left << setw(8) << nw->Classnum
				 << left << setw(16) << nw->Math
				 << left << setw(16) << nw->English
				 << left << setw(16) << nw->computer
				 << left << setw(8) << nw->Sum
				 << setw(2) << nw->Average
				 << endl;
			puts("\n         请选择要修改学生信息类型：");
			puts("--------------------------------------");
			puts("            1.姓名\n");
			puts("            2.学号\n");
			puts("            3.数学成绩\n");
			puts("            4.英语成绩\n");
			puts("            5.计算机成绩\n");
			puts("            6.班级\n");
			puts("            0.返回上一级菜单");
			printf("指令：");
			scanf("%d", &order);
			while ((order < 0) || (order > 6))
			{
				InputError();
				puts("\n         请选择要修改学生信息类型：");
				puts("--------------------------------------");
				puts("            1.姓名\n");
				puts("            2.学号\n");
				puts("            3.数学成绩\n");
				puts("            4.英语成绩\n");
				puts("            5.计算机成绩\n");
				puts("            6.班级\n");
				puts("            0.返回上一级菜单");
				printf("指令：");
				scanf("%d", &order);
			}

			if (order == 0)
				return;

			if (order == 1)
			{
				string NewName;
				printf("请输入新姓名：");
				cin >> NewName;
				printf("\n确认修改？(Y/N) ");
				cin >> x;
				if (x == 'N' || x == 'n')
				{
					puts("\n取消修改成功!");
					fout << nw->Id << " " << nw->Name << " " << nw->Classnum << " " << nw->Math << " " << nw->English << " " << nw->computer << " "
						 << nw->Sum << " " << nw->Average << endl;
				}
				else
				{
					fout << nw->Id << " " << NewName << " " << nw->Classnum << " " << nw->Math << " " << nw->English << " " << nw->computer << " "
						 << nw->Sum << " " << nw->Average << endl;
					puts("\n数据修改成功!");
				}
			}
			else if (order == 2)
			{
				string NewId;
				printf("请输入新学号：");
				cin >> NewId;
				printf("\n确认修改？(Y/N) ");
				cin >> x;
				if (x == 'N' || x == 'n')
				{
					puts("\n取消修改成功!");
					fout << nw->Id << " " << nw->Name << " " << nw->Classnum << " " << nw->Math << " " << nw->English << " " << nw->computer << " "
						 << nw->Sum << " " << nw->Average << endl;
				}
				else
				{
					fout << NewId << " " << nw->Name << " " << nw->Classnum<<" " << nw->Math << " " << nw->English << " " << nw->computer << " "
						 << nw->Sum << " " << nw->Average << endl;
					puts("\n数据修改成功!");
				}
			}
			else if (order == 3)
			{
				double NewMath;
				printf("请输入新数学成绩：");
				cin >> NewMath;
				while (NewMath < 0 || NewMath > 100)
				{
					puts("您输入的数据不合法，请重新输入");
					cin >> NewMath;
				}
				printf("\n确认修改？(Y/N) ");
				cin >> x;
				if (x == 'N' || x == 'n')
				{
					puts("\n取消修改成功!");
					fout << nw->Id << " " << nw->Name << " " << nw->Classnum << " " << nw->Math << " " << nw->English << " " << nw->computer << " "
						 << nw->Sum << " " << nw->Average << endl;
				}
				else
				{
					nw->Sum = NewMath + nw->English + nw->computer;
					nw->Average = (nw->Sum) / 3;
					fout << nw->Id << " " << nw->Name << " " << nw->Classnum << " " << NewMath << " " << nw->English << " " << nw->computer << " "
						 << nw->Sum << " " << nw->Average << endl;
					puts("\n数据修改成功!");
				}
			}
			else if (order == 4)
			{
				double NewEng;
				printf("请输入新英语成绩：");
				cin >> NewEng;
				while (NewEng < 0 || NewEng > 100)
				{
					puts("您输入的数据不合法，请重新输入");
					cin >> NewEng;
				}
				printf("\n确认修改？(Y/N) ");
				cin >> x;
				if (x == 'N' || x == 'n')
				{
					puts("\n取消修改成功!");
					fout << nw->Id << " " << nw->Name << " " << nw->Classnum << " " << nw->Math << " " << nw->English << " " << nw->computer << " "
						 << nw->Sum << " " << nw->Average << endl;
				}
				else
				{
					nw->Sum = nw->Math + NewEng + nw->computer;
					nw->Average = (nw->Sum) / 3;
					fout << nw->Id << " " << nw->Name << " " << nw->Classnum << " " << nw->Math << " " << NewEng << " " << nw->computer << " "
						 << nw->Sum << " " << nw->Average << endl;
					puts("\n数据修改成功!");
				}
			}
			else if (order == 5)
			{
				double NewComputer;
				printf("请输入新计算机成绩：");
				cin >> NewComputer;
				while (NewComputer < 0 || NewComputer > 100)
				{
					puts("您输入的数据不合法，请重新输入");
					cin >> NewComputer;
				}
				printf("\n确认修改？(Y/N) ");
				cin >> x;
				if (x == 'N' || x == 'n')
				{
					puts("\n取消修改成功!");
					fout << nw->Id << " " << nw->Name << " " << nw->Classnum << " " << nw->Math << " " << nw->English << " " << nw->computer << " "
						 << nw->Sum << " " << nw->Average << endl;
				}
				else
				{
					nw->Sum = nw->Math + nw->English + NewComputer;
					nw->Average = (nw->Sum) / 3;
					fout << nw->Id << " " << nw->Name << " " << nw->Classnum << " " << nw->Math << " " << nw->English << " " << NewComputer << " "
						 << nw->Sum << " " << nw->Average << endl;
					puts("\n数据修改成功!");
				}
			}
			else if (order == 6)
			{
				double NewCla;
				printf("请输入新班级：");
				cin >> NewCla;
				while (NewCla < 0)
				{
					puts("您输入的数据不合法，请重新输入");
					cin >> NewCla;
				}
				printf("\n确认修改？(Y/N) ");
				cin >> x;
				if (x == 'N' || x == 'n')
				{
					puts("\n取消修改成功!");
					fout << nw->Id << " " << nw->Name << " " << nw->Classnum << " " << nw->Math << " " << nw->English << " " << nw->computer << " "
						 << nw->Sum << " " << nw->Average << endl;
				}
				else
				{
					nw->Sum = nw->Math + NewCla + nw->computer;
					nw->Average = (nw->Sum) / 3;
					fout << nw->Id << " " << nw->Name << " " << NewCla << " " << nw->Math << " " << nw->English << " " << nw->computer << " "
						 << nw->Sum << " " << nw->Average << endl;
					puts("\n数据修改成功!");
				}
			}
		}

		if (!isFind)
			puts("\n未找到该信息！");

		fin.close();
		fout.close();
		remove("data.txt");
		rename("data2.txt", "data.txt");
		puts("\n是否继续修改？(Y/N)");
		cin >> x;
	}
}
void Delete()
{
	char x = 'Y';
	string tmp;
	puts("*******************************************************");
	puts("                    删除学生信息           ");
	puts("*******************************************************\n");

	while (x == 'Y' || x == 'y')
	{
		ifstream fin("data.txt", ios::app);
		ofstream fout("data2.txt", ios::app);
		if (!fin)
		{
			puts("文件打开失败！");
			exit(0);
		}
		puts("         请选择要删除学生信息的关键字：");
		puts("--------------------------------------");
		puts("            1.姓名\n");
		puts("            2.学号\n");
		puts("            0.返回上一级菜单");
		printf("指令：");
		scanf("%d", &order);
		while ((order < 0) || (order > 2))
		{
			puts("");
			InputError();
			puts("         请选择要删除学生信息的关键字：");
			puts("--------------------------------------");
			puts("            1.姓名\n");
			puts("            2.学号\n");
			puts("            0.返回上一级菜单");
			printf("指令：");
			scanf("%d", &order);
		}

		if (order == 0)
			return;

		if (order == 1)
		{
			printf("请输入姓名：");
			cin >> tmp;
		}
		else if (order == 2)
		{
			printf("请输入学号：");
			cin >> tmp;
		}

		Student *nw;
		nw = new Student;
		bool isFind = false;
		while (fin >> nw->Id >> nw->Name >> nw->Classnum >> nw->Math >> nw->English >> nw->computer >> nw->Sum >> nw->Average)
		{
			if ((tmp.compare(nw->Name)) && (tmp.compare(nw->Id)))
			{
				fout << nw->Id << " " << nw->Name << " " << nw->Classnum << " " << nw->Math << " " << nw->English << " " << nw->computer << " "
					 << nw->Sum << " " << nw->Average << endl;
				continue;
			}
			isFind = true;

			cout << "\n学号\t姓名\t班级\t数学成绩\t英语成绩\t计算机成绩\t总分\t平均分\n";
			cout << left << setw(12) << nw->Id
				 << left << setw(8) << nw->Name
				 << left << setw(8) << nw->Classnum
				 << left << setw(16) << nw->Math
				 << left << setw(16) << nw->English
				 << left << setw(16) << nw->computer
				 << left << setw(6) << nw->Sum
				 << setw(2) << nw->Average
				 << endl;

			printf("\n确认删除？(Y/N) ");
			cin >> x;
			if (x == 'N' || x == 'n')
			{
				puts("\n取消删除成功!");
				fout << nw->Name << " " << nw->Id << " " << nw->Classnum << " " << nw->Math << " " << nw->English << " " << nw->computer << " "
					 << nw->Sum << " " << nw->Average << endl;
				continue;
			}
			puts("\n数据删除成功!");
		}

		if (!isFind)
			puts("\n未找到该信息！");

		fin.close();
		fout.close();

		remove("data.txt");
		rename("data2.txt", "data.txt");

		puts("\n是否继续删除？(Y/N)");
		cin >> x;
	}
}

void Search()
{
	char x = 'Y';
	string tmp;
	puts("*******************************************************");
	puts("                    查询学生信息           ");
	puts("*******************************************************\n");

	while (x == 'Y' || x == 'y')
	{
		ifstream fin("data.txt");
		if (!fin)
		{
			puts("文件打开失败！");
			exit(0);
		}

		puts("                  请选择查询方式：");
		puts("--------------------------------------");
		puts("                  1.姓名\n");
		puts("                  2.学号\n");
		puts("                  3.返回上一级菜单");
		printf("指令：");
		scanf("%d", &order);
		while ((order < 1) || (order > 2))
		{
			InputError();
			puts("                  请选择查询方式：");
			puts("--------------------------------------");
			puts("                  1.姓名\n");
			puts("                  2.学号\n");
			puts("                  0.返回上一级菜单");
			printf("指令：");
			scanf("%d", &order);
		}

		if (order == 0)
			return;

		if (order == 1)
		{
			printf("请输入要查询的姓名：");
			cin >> tmp;
		}
		else if (order == 2)
		{
			printf("请输入要查询的学号：");
			cin >> tmp;
		}
		Student *nw;
		nw = new Student;
		bool isFind = 0;
		int cnt = 0;
		while (fin >> nw->Id >> nw->Name >> nw->Classnum >> nw->Math >> nw->English >> nw->computer >> nw->Sum >> nw->Average)
		{
			if (order == 1)
			{
				if (!nw->Name.compare(tmp))
				{
					if (!isFind)
						cout << "\n序号\t学号\t姓名\t班级\t数学成绩\t英语成绩\t计算机成绩\t总分\t平均分\n";
					isFind = 1;
					cnt++;
					cout << left << setw(8) << cnt
						 << left << setw(12) << nw->Id
						 << left << setw(8) << nw->Name
						 << left << setw(8) << nw->Classnum
						 << left << setw(16) << nw->Math
						 << left << setw(16) << nw->English
						 << left << setw(16) << nw->computer
						 << left << setw(6) << nw->Sum
						 << setw(2) << nw->Average
						 << endl;
				}
			}
			else if (order == 2)
			{
				if (!nw->Id.compare(tmp))
				{
					if (!isFind)
						cout << "\n序号\t学号\t姓名\t班级\t数学成绩\t英语成绩\t计算机成绩\t总分\t平均分\n";
					isFind = 1;
					cnt++;
					cout << left << setw(8) << cnt
						 << left << setw(12) << nw->Id
						 << left << setw(8) << nw->Name
						 << left << setw(8) << nw->Classnum
						 << left << setw(16) << nw->Math
						 << left << setw(16) << nw->English
						 << left << setw(16) << nw->computer
						 << left << setw(6) << nw->Sum
						 << setw(2) << nw->Average
						 << endl;
				}
			}
		}
		if (!isFind)
			puts("\n未找到该信息！");
		fin.close();
		puts("\n是否继续查询？(Y/N)");
		cin >> x;
	}
}
void Sort()
{

	char x = 'Y';
	string tmp;
	puts("*******************************************************");
	puts("                          排序                          ");
	puts("*******************************************************\n");

	while (x == 'Y' || x == 'y')
	{
		ifstream fin("data.txt");
		if (!fin)
		{
			puts("数据文件打开失败！");
			system("pause");
			exit(0);
		}
		puts("                  请选择分析方式：");
		puts("--------------------------------------");
		puts("                  1.学号从小到大\n");
		puts("                  2.数学成绩从小到大\n");
		puts("                  3.英语成绩从小到大\n");
		puts("                  4.计算机成绩从小到大\n");
		puts("                  5.总成绩从小到大\n");
		puts("                  6.平均成绩从小到大\n");
		puts("                  0.返回上一级菜单");
		printf("指令：");
		scanf("%d", &order);
		while ((order < 0) || (order > 6))
		{
			InputError();
			puts("                  请选择排序方式：");
			puts("--------------------------------------");
			puts("                  1.学号从小到大\n");
			puts("                  2.数学成绩从小到大\n");
			puts("                  3.英语成绩从小到大\n");
			puts("                  4.计算机成绩从小到大\n");
			puts("                  5.总成绩从小到大\n");
			puts("                  6.平均成绩从小到大\n");
			puts("                  0.返回上一级菜单");
			printf("指令：");
			scanf("%d", &order);
		}
		if (order == 0)
		{
			return;
		}

		Student *Head ,*pend,*pnew = NULL;
		Head = pend = new Student;
		pnew = new Student;
		while (fin >> pnew->Id >> pnew->Name >>pnew -> Classnum>> pnew->Math >> pnew->English >> pnew->computer >> pnew->Sum >> pnew->Average)
		{
			pnew -> nxt =NULL;
            pend -> nxt = pnew;
            pend = pnew;
			pnew = new Student;
		}
		Student *p,*q;
				if (order == 1)
				{
                    for(p = Head -> nxt; p != NULL ; p = p-> nxt)
                        for(q = p -> nxt ; q != NULL ; q = q->nxt)
                        {
                            if(p -> Id .size() < q -> Id.size())
                                continue;
                    if(p -> Id > q-> Id)
                    {
                        string t1 = p -> Id;
                        p -> Id = q -> Id;
                        q -> Id = t1;
                        cout<<t1<<endl;
                    }
				}
				       }
				else if (order == 2)
				{
					 for(p = Head -> nxt; p != NULL ; p = p-> nxt)
                        for(q = p -> nxt ; q != NULL ; q = q->nxt)
                    if(p ->Math < q-> Math)
                    {
                        int t1 = p -> Math;
                        p -> Math = q -> Math;
                        q -> Math = t1;
                    }
				}
				else if (order == 3)
				{
					 for(p = Head -> nxt; p != NULL ; p = p-> nxt)
                        for(q = p -> nxt ; q != NULL ; q = q->nxt)
                    if(p ->English < q-> English)
                    {
                        int t1 = p -> English;
                        p -> English = q -> English;
                        q -> English = t1;
                    }
				}
				else if (order == 4)
				{
					 for(p = Head -> nxt; p != NULL ; p = p-> nxt)
                        for(q = p -> nxt ; q != NULL ; q = q->nxt)
                    if(p ->computer < q-> computer)
                    {
                        int t1 = p -> computer;
                        p -> computer = q -> computer;
                        q -> computer = t1;
                    }
				}
				else if (order == 5)
				{
					 for(p = Head -> nxt; p != NULL ; p = p-> nxt)
                        for(q = p -> nxt ; q != NULL ; q = q->nxt)
                    if(p ->Sum < q-> Sum)
                    {
                        int t1 = p -> Sum;
                        p -> Sum = q ->Sum;
                        q -> Sum = t1;
                    }
				}
				else if (order == 6)
				{
					 for(p = Head -> nxt; p != NULL ; p = p-> nxt)
                        for(q = p -> nxt ; q != NULL ; q = q->nxt)
                    if(p ->Average < q-> Average)
                    {
                        int t1 = p -> Average;
                        p -> Average= q ->Average;
                        q -> Average = t1;
                    }
				}
		Student *r = Head -> nxt;
		puts("*******************************************************");
		if (order == 1)
			puts("              学号从小到大        ");
		else if (order == 2)
			puts("              数学成绩从小到大    ");
		else if (order == 3)
			puts("              英语成绩从小到大     ");
		else if (order == 4)
			puts("              计算机成绩从小到大 ");
		else if (order == 5)
			puts("              总成绩从小到大 ");
		else if (order == 6)
			puts("              平均分从小到大 ");
		puts("*******************************************************\n");
		cout << "\n序号\t学号\t姓名\t班级\t数学成绩\t英语成绩\t计算机成绩\t总分\t平均分\n";
		int cnt = 0;
		while (r != NULL)
		{
			cnt++;
			cout << left << setw(8) << cnt
				 << left << setw(12) << r->Id
				 << left << setw(8) << r->Name
				 << left << setw(8) << r->Classnum
				 << left << setw(16) << r->Math
				 << left << setw(16) << r->English
				 << left << setw(16) << r->computer
				 << left << setw(6) << r->Sum
				 << left << setw(2) << r->Average
				 << endl;
			r = r->nxt;
		}
		fin.close();
		puts("\n是否继续查看？(Y/N)");
		cin >> x;
	}
}

void MenuOrderAction()
{
	if (order == 1)
	{
		Add();
	}
	else if (order == 2)
	{
		Display();
	}
	else if (order == 3)
	{
		Search();
	}
	else if (order == 4)
	{
		Mend();
	}
	else if (order == 5)
	{
		Add();
	}
	else if (order == 6)
	{
		Sort();
	}
	else if (order == 7)
	{
		Delete();
	}
	else if (order == 0)
	{
		ExitSystem();
	}
}
};
int main()
{
	while (1)
	{
		Student A;
		A.ShowMenu();
		printf("指令：");
		scanf("%d", &order);
		while ((order < 0) || (order > 7))
		{
			A.ShowMenu();
			A.InputError();
			printf("指令：");
			scanf("%d", &order);
		}
		A.MenuOrderAction();
	}
	return 0;
}