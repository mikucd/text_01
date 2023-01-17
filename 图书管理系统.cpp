#include<iostream>
#include <fstream>
#include<string>

using namespace std;

//学生类
class Student{
public:
	string Sno; //学号
	string Sname;
	int count;  //借阅上限
	//方法
	Student(){}
	Student(string Sno,string Sname,int count){
		this->Sno=Sno; this->Sname=Sname; this->count=count;
	}
	~Student(){}
	//get方法
	string get_Sno(){return Sno;}
	string get_Sname(){return Sname;}
	int get_count(){return count;}
	//show方法
	void show(){
		cout<<"学号："<<this->get_Sno();
		cout<<"姓名："<<this->get_Sname();
		cout<<"借阅数："<<this->get_count();	
		cout<<endl;
	}

};

//书籍类
class Book{
public:
	string Bno; //书籍编号
	string Bname;
	string Writer;
	string Publish;
	string num;  //余量

	Book(){}
	Book(string Bno,string Bname,string Writer,string Publish,int num){
		this->Bno=Bno; this->Bname=Bname; this->Writer=Writer; this->Publish=Publish; this->num=num;
	}
	~Book(){}
	//get方法
	string get_Bno(){return Bno;}
	string get_Bname(){return Bname;}
	string get_Writer(){return Writer;}
	string get_Publish(){return Publish;}

	string get_num(){return num;}
	//show方法
	void show(){
		cout<<"书籍编号："<<this->get_Bno()<<"\t";
		cout<<"书名："<<this->get_Bname()<<"\t";
		cout<<"作者："<<this->get_Writer()<<"\t";
		cout<<"出版社："<<this->get_Publish()<<"\t";
		cout<<"余量："<<this->get_num()<<"\t";
		cout<<endl;
	}
	//set方法
	void set_Bno(string);
	void set_Bname(string);
	void set_Writer(string);
	void set_Publish(string);
	void set_num(string);
};
//Book的set方法
void Book::set_Bno(string a){Bno=a;}
void Book::set_Bname(string a){Bname=a;}
void Book::set_Writer(string a){Writer=a;}
void Book::set_Publish(string a){Publish=a;}
void Book::set_num(string a){num=a;}








//借阅类
class Borrow{
public:
	string Sno;
	string Bno;
	string B_day;  //借阅日期
	string R_day;  //归还日期

	Borrow(){}
	Borrow(string Sno,string Bno,string B_day,string R_day){
	Sno=Sno; Bno=Bno; B_day=B_day; R_day=R_day;
	}
	//get方法
	string get_Sno(){return Sno;}
	string get_Bno(){return Bno;}
	string get_B_day(){return B_day;}
	string get_R_day(){return R_day;}
	//show方法
	void show(){
		cout<<"学号："<<this->get_Sno();
		cout<<"书籍编号："<<this->get_Bno();
		cout<<"借阅时间："<<this->get_B_day();
		cout<<"归还时间："<<this->get_R_day();
	}
	void set_Sno(string a){Sno=a;}
	void set_Bno(string a){Bno=a;}
	void set_B_day(string bay){B_day=bay;}
	void set_R_day(string ray){R_day=ray;}
	
};


//图书馆类
class Library:public Student,Book,Borrow{
private:
	string box[20][2];
public:
	Library(){}
	Library(string Sno,string Bno){
	}
};



/**********************************************************************
//通过书籍名借书
void Name_find(){
	Book b[20];//图书对象，提供书信息
	cout<<"请输入要查询的书籍名字:";
	string x;cin>>x;
	for(int i=0;i<20;i++){
	if(x=b[i].get_Bname())//输入书名 与书类的名字比较
	}
}
**********************************************************************/




//查询图书信息 case.5
void A_display(Book *a)
{
	Book *A=a;
	for(int i=0;i<20;i++)
	{
	A[i].show();
	}
}


//查询书在不在  case.6
void cheek(Book *a){
	Book *A=a;
	cout<<"请输入需查找的书名：";
	string x; cin>>x;
	for(int i=0;i<20;i++)
	{
	string t=A[i].get_Bname();
	if(t==x){
		cout<<"该书情况如下"<<endl;
		A[i].show();}
	}
	cout<<endl;
	cout<<"该语句代表查询已经结束QAQ"<<endl;
	
}



//借阅   case.3
void borrow_Book(Book *a){
	/*
	Book *A=a;
	int i=0;
	cout<<"请输入借阅书的编号：";
	string x; cin>>x;
	for(;i<20;i++)
	{
	if(A[i].get_Bno()==x)//编号相等
		break;}

	A[i].set_num(0);  
		cout<<"借阅成功，借阅后该书情况如下"<<endl;
		cout<<A[i].get_num();
	*/
	Book *A=a;
	cout<<"请输入借阅书的编号：";
	string s; cin>>s;
	int tmp;
	for(int i=0;i<20;i++){
	string t=A[i].get_Bno();
	if(t==s)
	{tmp=i;  //获取下标
	cout<<"借阅成功";
A[tmp].set_num("0");  //将书余量置为0
break;}}
}

//归还  case.4
void bace_Book(Book *a){
	/*
	Book *A=a;
	cout<<"请输入归还书的编号：";
	string x; cin>>x;
	int i=0;
	for(;i<20;i++)
	{
	if(A[i].get_Bno()==x)//编号相等
		break;}

	for(int i=0;i<20;i++){
	string t=A[i].get_Bno();
	}
	*/
		Book *A=a;
	cout<<"请输入归还书的编号：";
	string s; cin>>s;
	int tmp;
	for(int i=0;i<20;i++){
	string t=A[i].get_Bno();
	if(t==s)
	{tmp=i;  //获取下标
	cout<<"该书归还";
A[tmp].set_num("2");  //将书余量置为2
break;}}
}

//删除图书  case.2
void deleteNook(Book *a){
	Book *A=a;
	cout<<"请输入需删除书的编号：";
	string s; cin>>s;
	int tmp;
	for(int i=0;i<20;i++){
	string t=A[i].get_Bno();
	if(t==s)
	{tmp=i;  //获取下标
	cout<<"该书存在";
	A[tmp].set_Bno(" ");
A[tmp].set_Bname(" ");
A[tmp].set_Publish(" ");
A[tmp].set_Writer(" ");
A[tmp].set_num(" ");
	break;}
	}
	
	/*
	if(tmp==0)  //删头位置
		for(int i=0;i<20;i++)
		{
		A[i]=A[i+1];
		}

		*/

	/*
	if(tmp!=0){ //不是删头时调用
	for(int i=tmp;i<20;i++)
	{
	A[i]=A[i+1];
	}
	}
	*/

}


//*******************************************************************************************


void OUT(Book a[])
{
	//读取程序信息到文件
	Book A[20];
	for(int i=0;i<20;i++)//接收传入对象数组信息
	{A[i].Bname=a[i].Bno; A[i].Bname=a[i].Bname, A[i].Writer=a[i].Writer; A[i].Publish=a[i].Writer; A[i].num=a[i].num;}
	
	ifstream infile;
	infile.open("book02.txt",ios::in);
	if(!infile.is_open())
	{
		cout<<"open erro!"<<endl;
		exit(0);
	}
	for(int i=0;i<20;i++){     
	infile>>A[i].Bno;
	
	}//需保存的对象数组
	
	infile.close();
}

//添加书籍  case.1
void InBook(Book *a)
{
    Book *A=a;    //接收
	string nom,name,wr,pub,num; 
	cout<<"请输入添加图书的相关信息"<<endl;   //插入图书
	cout<<"书籍编号："; cin>>nom; cout<<endl;
	cout<<"书名："; cin>>name; cout<<endl;
	cout<<"作者："; cin>>wr; cout<<endl;
	cout<<"出版社："; cin>>pub; cout<<endl;
	cout<<"数量:" ; cin>>num; cout<<endl;
	Book tmp;
	tmp.set_Bno(nom);
	tmp.set_Bname(name);
	tmp.set_Writer(wr);
	tmp.set_Publish(pub);
	tmp.set_num(num);
	
	for(int i=18;i!=-1;i--)
	{   //if(tmp.get_Bname()=A[i].get_Bname()||tmp.get_Writer()=A[i].get_Writer()||tmp)
		A[i+1].set_Bno(A[i].get_Bno()); //编号后移

		A[i+1].set_Bname(A[i].get_Bname());//书名后移
		A[i+1].set_Writer(A[i].get_Writer());//作者后移
		A[i+1].set_Publish(A[i].get_Publish());//出版社后移
		A[i+1].set_num(A[i].get_num());//数量后移
	}
	//插入到0位
	A[0].set_Bno(nom);
	A[0].set_Bname(name);
	A[0].set_Writer(wr);
	A[0].set_Publish(pub);
	A[0].set_num(num);

	cout<<"插入书籍成功";

	//数据写入到文件
	int i,j;
	int t=0;
	string G[120];   //定义数组接收需要储存的信息
	for(int i=0;i<5;i++){
		G[t]=A[i].get_Bno();  //书号存入
		
		G[t+1]=A[i].get_Bname();//书名存入

		G[t+2]=A[i].get_Writer();//作者存入

		G[t+3]=A[i].get_Publish();//出版社存入

		G[t+4]=A[i].get_num(); //书余量存入

		t=t+5;   //+5到下一本书应该保存的位置
	}

	//保存到文件
	ofstream dataFile;
    dataFile.open("book.txt", ofstream::out); //实验时使用txt.txt文件，防止覆盖book.txt数据
	cout<<endl<<"G1"<<G[1];
	int m=0;
	for (int i = 0; i<20; i++)     //尝试通过减少单次循环的数量进行保存
	{ 
		for(int q=0;q<5;q++)
    {	dataFile <<G[m+q]<<" ";
		}
	m=m+5;
	}
	dataFile.close();   // 关闭文档
	return ;
}

//*****************************************************************//
//开始菜单栏
void menu(Book *a)
{
	Book *A=a;//接收引用
    int temp;
    while (1)
    {
        cout << "_________________ 图书馆管理系统____________________\n";
        cout << "       -----------------------------                      \n";
        cout << "       ┃ [0]退出系统。            ┃                      \n";
        cout << "       ┃ [1]增加图书。            ┃                      \n";
        cout << "       ┃ [2]删除图书。            ┃                      \n";
        cout << "       ┃ [3]借阅图书。            ┃                      \n";
        cout << "       ┃ [4]归还图书。            ┃                      \n";
        cout << "       ┃ [5]显示图书信息。        ┃                      \n";
        cout << "       ┃ [6]查询图书。            ┃                      \n";
        cout << "       ------------------------------                     \n";
        cout << "请输入要进行的操作：";
        cin >> temp;
		//switch选择关键字
		switch(temp){
		case 0:system("cls");
				exit(0);
		case 1:
				system("cls");
				InBook(A);
				break;
		case 2:
				system("cls");
				deleteNook(A);
				break;
		case 3:
			    system("cls");
			    borrow_Book(A);
				break;
		case 4:
				system("cls");
				bace_Book(A);
				break;
		case 5:
			    system("cls");
				A_display(A);   //显示一本书信息
				break;
		case 6:
				system("cls");
				 cheek(A);      //升降序
				break;
		}

		if(temp<0||temp>6)
            {
				cout << "输入错误！" << endl;
				cout<<" 请再来一次 "<<endl;
		}
	}  
}

int main(){
	string A[100];//建立数组存放数据
	int data=0;
	ifstream file("book.txt");
	while( ! file.eof())
	file>>A[data++];
	for(int i=0;i<data;i++)
	{cout<<A[i]<<" ";}
	cout<<"现有书籍:"<<data/5<<"种"<<endl;
	file.close();

    //接收书籍信息
	Book B[20];
	int j=0;
	for(int i=0;i<20;i++){
		
		B[i].set_Bno(A[j]);
		B[i].set_Bname(A[j+1]);
		B[i].set_Writer(A[j+2]);
		B[i].set_Publish(A[j+3]);
		B[i].set_num(A[j+4]);

		j=j+5; //跳向下一本书的编号位置
	}
	menu(B);//选择菜单
	return 0;
}
