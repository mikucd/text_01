#include<iostream>
#include <fstream>
#include<string>

using namespace std;

//ѧ����
class Student{
public:
	string Sno; //ѧ��
	string Sname;
	int count;  //��������
	//����
	Student(){}
	Student(string Sno,string Sname,int count){
		this->Sno=Sno; this->Sname=Sname; this->count=count;
	}
	~Student(){}
	//get����
	string get_Sno(){return Sno;}
	string get_Sname(){return Sname;}
	int get_count(){return count;}
	//show����
	void show(){
		cout<<"ѧ�ţ�"<<this->get_Sno();
		cout<<"������"<<this->get_Sname();
		cout<<"��������"<<this->get_count();	
		cout<<endl;
	}

};

//�鼮��
class Book{
public:
	string Bno; //�鼮���
	string Bname;
	string Writer;
	string Publish;
	string num;  //����

	Book(){}
	Book(string Bno,string Bname,string Writer,string Publish,int num){
		this->Bno=Bno; this->Bname=Bname; this->Writer=Writer; this->Publish=Publish; this->num=num;
	}
	~Book(){}
	//get����
	string get_Bno(){return Bno;}
	string get_Bname(){return Bname;}
	string get_Writer(){return Writer;}
	string get_Publish(){return Publish;}

	string get_num(){return num;}
	//show����
	void show(){
		cout<<"�鼮��ţ�"<<this->get_Bno()<<"\t";
		cout<<"������"<<this->get_Bname()<<"\t";
		cout<<"���ߣ�"<<this->get_Writer()<<"\t";
		cout<<"�����磺"<<this->get_Publish()<<"\t";
		cout<<"������"<<this->get_num()<<"\t";
		cout<<endl;
	}
	//set����
	void set_Bno(string);
	void set_Bname(string);
	void set_Writer(string);
	void set_Publish(string);
	void set_num(string);
};
//Book��set����
void Book::set_Bno(string a){Bno=a;}
void Book::set_Bname(string a){Bname=a;}
void Book::set_Writer(string a){Writer=a;}
void Book::set_Publish(string a){Publish=a;}
void Book::set_num(string a){num=a;}








//������
class Borrow{
public:
	string Sno;
	string Bno;
	string B_day;  //��������
	string R_day;  //�黹����

	Borrow(){}
	Borrow(string Sno,string Bno,string B_day,string R_day){
	Sno=Sno; Bno=Bno; B_day=B_day; R_day=R_day;
	}
	//get����
	string get_Sno(){return Sno;}
	string get_Bno(){return Bno;}
	string get_B_day(){return B_day;}
	string get_R_day(){return R_day;}
	//show����
	void show(){
		cout<<"ѧ�ţ�"<<this->get_Sno();
		cout<<"�鼮��ţ�"<<this->get_Bno();
		cout<<"����ʱ�䣺"<<this->get_B_day();
		cout<<"�黹ʱ�䣺"<<this->get_R_day();
	}
	void set_Sno(string a){Sno=a;}
	void set_Bno(string a){Bno=a;}
	void set_B_day(string bay){B_day=bay;}
	void set_R_day(string ray){R_day=ray;}
	
};


//ͼ�����
class Library:public Student,Book,Borrow{
private:
	string box[20][2];
public:
	Library(){}
	Library(string Sno,string Bno){
	}
};



/**********************************************************************
//ͨ���鼮������
void Name_find(){
	Book b[20];//ͼ������ṩ����Ϣ
	cout<<"������Ҫ��ѯ���鼮����:";
	string x;cin>>x;
	for(int i=0;i<20;i++){
	if(x=b[i].get_Bname())//�������� ����������ֱȽ�
	}
}
**********************************************************************/




//��ѯͼ����Ϣ case.5
void A_display(Book *a)
{
	Book *A=a;
	for(int i=0;i<20;i++)
	{
	A[i].show();
	}
}


//��ѯ���ڲ���  case.6
void cheek(Book *a){
	Book *A=a;
	cout<<"����������ҵ�������";
	string x; cin>>x;
	for(int i=0;i<20;i++)
	{
	string t=A[i].get_Bname();
	if(t==x){
		cout<<"�����������"<<endl;
		A[i].show();}
	}
	cout<<endl;
	cout<<"���������ѯ�Ѿ�����QAQ"<<endl;
	
}



//����   case.3
void borrow_Book(Book *a){
	/*
	Book *A=a;
	int i=0;
	cout<<"�����������ı�ţ�";
	string x; cin>>x;
	for(;i<20;i++)
	{
	if(A[i].get_Bno()==x)//������
		break;}

	A[i].set_num(0);  
		cout<<"���ĳɹ������ĺ�����������"<<endl;
		cout<<A[i].get_num();
	*/
	Book *A=a;
	cout<<"�����������ı�ţ�";
	string s; cin>>s;
	int tmp;
	for(int i=0;i<20;i++){
	string t=A[i].get_Bno();
	if(t==s)
	{tmp=i;  //��ȡ�±�
	cout<<"���ĳɹ�";
A[tmp].set_num("0");  //����������Ϊ0
break;}}
}

//�黹  case.4
void bace_Book(Book *a){
	/*
	Book *A=a;
	cout<<"������黹��ı�ţ�";
	string x; cin>>x;
	int i=0;
	for(;i<20;i++)
	{
	if(A[i].get_Bno()==x)//������
		break;}

	for(int i=0;i<20;i++){
	string t=A[i].get_Bno();
	}
	*/
		Book *A=a;
	cout<<"������黹��ı�ţ�";
	string s; cin>>s;
	int tmp;
	for(int i=0;i<20;i++){
	string t=A[i].get_Bno();
	if(t==s)
	{tmp=i;  //��ȡ�±�
	cout<<"����黹";
A[tmp].set_num("2");  //����������Ϊ2
break;}}
}

//ɾ��ͼ��  case.2
void deleteNook(Book *a){
	Book *A=a;
	cout<<"��������ɾ����ı�ţ�";
	string s; cin>>s;
	int tmp;
	for(int i=0;i<20;i++){
	string t=A[i].get_Bno();
	if(t==s)
	{tmp=i;  //��ȡ�±�
	cout<<"�������";
	A[tmp].set_Bno(" ");
A[tmp].set_Bname(" ");
A[tmp].set_Publish(" ");
A[tmp].set_Writer(" ");
A[tmp].set_num(" ");
	break;}
	}
	
	/*
	if(tmp==0)  //ɾͷλ��
		for(int i=0;i<20;i++)
		{
		A[i]=A[i+1];
		}

		*/

	/*
	if(tmp!=0){ //����ɾͷʱ����
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
	//��ȡ������Ϣ���ļ�
	Book A[20];
	for(int i=0;i<20;i++)//���մ������������Ϣ
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
	
	}//�豣��Ķ�������
	
	infile.close();
}

//����鼮  case.1
void InBook(Book *a)
{
    Book *A=a;    //����
	string nom,name,wr,pub,num; 
	cout<<"���������ͼ��������Ϣ"<<endl;   //����ͼ��
	cout<<"�鼮��ţ�"; cin>>nom; cout<<endl;
	cout<<"������"; cin>>name; cout<<endl;
	cout<<"���ߣ�"; cin>>wr; cout<<endl;
	cout<<"�����磺"; cin>>pub; cout<<endl;
	cout<<"����:" ; cin>>num; cout<<endl;
	Book tmp;
	tmp.set_Bno(nom);
	tmp.set_Bname(name);
	tmp.set_Writer(wr);
	tmp.set_Publish(pub);
	tmp.set_num(num);
	
	for(int i=18;i!=-1;i--)
	{   //if(tmp.get_Bname()=A[i].get_Bname()||tmp.get_Writer()=A[i].get_Writer()||tmp)
		A[i+1].set_Bno(A[i].get_Bno()); //��ź���

		A[i+1].set_Bname(A[i].get_Bname());//��������
		A[i+1].set_Writer(A[i].get_Writer());//���ߺ���
		A[i+1].set_Publish(A[i].get_Publish());//���������
		A[i+1].set_num(A[i].get_num());//��������
	}
	//���뵽0λ
	A[0].set_Bno(nom);
	A[0].set_Bname(name);
	A[0].set_Writer(wr);
	A[0].set_Publish(pub);
	A[0].set_num(num);

	cout<<"�����鼮�ɹ�";

	//����д�뵽�ļ�
	int i,j;
	int t=0;
	string G[120];   //�������������Ҫ�������Ϣ
	for(int i=0;i<5;i++){
		G[t]=A[i].get_Bno();  //��Ŵ���
		
		G[t+1]=A[i].get_Bname();//��������

		G[t+2]=A[i].get_Writer();//���ߴ���

		G[t+3]=A[i].get_Publish();//���������

		G[t+4]=A[i].get_num(); //����������

		t=t+5;   //+5����һ����Ӧ�ñ����λ��
	}

	//���浽�ļ�
	ofstream dataFile;
    dataFile.open("book.txt", ofstream::out); //ʵ��ʱʹ��txt.txt�ļ�����ֹ����book.txt����
	cout<<endl<<"G1"<<G[1];
	int m=0;
	for (int i = 0; i<20; i++)     //����ͨ�����ٵ���ѭ�����������б���
	{ 
		for(int q=0;q<5;q++)
    {	dataFile <<G[m+q]<<" ";
		}
	m=m+5;
	}
	dataFile.close();   // �ر��ĵ�
	return ;
}

//*****************************************************************//
//��ʼ�˵���
void menu(Book *a)
{
	Book *A=a;//��������
    int temp;
    while (1)
    {
        cout << "_________________ ͼ��ݹ���ϵͳ____________________\n";
        cout << "       -----------------------------                      \n";
        cout << "       �� [0]�˳�ϵͳ��            ��                      \n";
        cout << "       �� [1]����ͼ�顣            ��                      \n";
        cout << "       �� [2]ɾ��ͼ�顣            ��                      \n";
        cout << "       �� [3]����ͼ�顣            ��                      \n";
        cout << "       �� [4]�黹ͼ�顣            ��                      \n";
        cout << "       �� [5]��ʾͼ����Ϣ��        ��                      \n";
        cout << "       �� [6]��ѯͼ�顣            ��                      \n";
        cout << "       ------------------------------                     \n";
        cout << "������Ҫ���еĲ�����";
        cin >> temp;
		//switchѡ��ؼ���
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
				A_display(A);   //��ʾһ������Ϣ
				break;
		case 6:
				system("cls");
				 cheek(A);      //������
				break;
		}

		if(temp<0||temp>6)
            {
				cout << "�������" << endl;
				cout<<" ������һ�� "<<endl;
		}
	}  
}

int main(){
	string A[100];//��������������
	int data=0;
	ifstream file("book.txt");
	while( ! file.eof())
	file>>A[data++];
	for(int i=0;i<data;i++)
	{cout<<A[i]<<" ";}
	cout<<"�����鼮:"<<data/5<<"��"<<endl;
	file.close();

    //�����鼮��Ϣ
	Book B[20];
	int j=0;
	for(int i=0;i<20;i++){
		
		B[i].set_Bno(A[j]);
		B[i].set_Bname(A[j+1]);
		B[i].set_Writer(A[j+2]);
		B[i].set_Publish(A[j+3]);
		B[i].set_num(A[j+4]);

		j=j+5; //������һ����ı��λ��
	}
	menu(B);//ѡ��˵�
	return 0;
}
