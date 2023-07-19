#include<iostream>
using namespace std;
class Course{
    protected:
        char coursename[30];
    public:
        void getdata(){
            cout<<"Enter name of course: ";
            cin>>coursename;
        }
        void showdata(){
            cout<<"Name of course: "<<coursename<<endl;
        }
};
class Mathematics:public Course{
    private:
        int course_time;
    public:
        void getdata(){
            cout<<"Enter name of course: ";
            cin>>coursename;
            cout<<"Enter course time: ";
            cin>>course_time;
        }
        void showdata(){
            cout<<"Name of course: "<<coursename<<endl;
            cout<<"Course time: "<<course_time<<endl;
        }
};
class Science:public Course{
    protected:
        int course_time;
    public:
        void getdata(){
            cout<<"Enter name of course: ";
            cin>>coursename;
            cout<<"Enter course time: ";
            cin>>course_time;
        }
        void showdata(){
            cout<<"Name of course: "<<coursename<<endl;
            cout<<"Course time: "<<course_time<<endl;
        }
};
class Engineering:public Course{
    private:
        int course_time;
    public:
        void getdata(){
            cout<<"Enter name of course: ";
            cin>>coursename;
            cout<<"Enter course time: ";
            cin>>course_time;
        }
        void showdata(){
            cout<<"Name of course: "<<coursename<<endl;
            cout<<"Course time: "<<course_time<<endl;
        }
};
class Physics:public Science{
    private:
        int numOfChapters;
    public:
        void getdata(){
            cout<<"Enter name of course: ";
            cin>>coursename;
            cout<<"Enter course time: ";
            cin>>course_time;
            cout<<"Enter number of chapters: ";
            cin>>numOfChapters;
        }
        void showdata(){
            cout<<"Name of course: "<<coursename<<endl;
            cout<<"Course time: "<<course_time<<endl;
            cout<<"Number of chapters are: "<<numOfChapters<<endl;
        }
        
};
class Chemistry:public Science{
    private:
        int numOfChapters;
    public:
        void getdata(){
            cout<<"Enter name of course: ";
            cin>>coursename;
            cout<<"Enter course time: ";
            cin>>course_time;
            cout<<"Enter number of chapters: ";
            cin>>numOfChapters;
        }
        void showdata(){
            cout<<"Name of course: "<<coursename<<endl;
            cout<<"Course time: "<<course_time<<endl;
            cout<<"Number of chapters are: "<<numOfChapters<<endl;
        }
        
};
int main(){
    Mathematics m;
    Science s;
    Engineering e;
    Physics p;
    Chemistry c;

    cout<<"Enter data on maths: "<<endl;
    m.getdata();
    cout<<"Enter data on science: "<<endl;
    s.getdata();
    cout<<"Enter data on engineering: "<<endl;
    e.getdata();
    cout<<"Enter data on physics: "<<endl;
    p.getdata();
    cout<<"Enter data on chemistry: "<<endl;
    c.getdata();

    cout<<"Data on maths: "<<endl;
    m.showdata();
    cout<<"Data on science: "<<endl;
    s.showdata();
    cout<<"Data on engineering: "<<endl;
    e.showdata();
    cout<<"Data on physics: "<<endl;
    p.showdata();
    cout<<"Data on chemistry: "<<endl;
    c.showdata();
}
    
    

    
    
    

    
    
    

    
    
