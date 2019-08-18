#include<iostream>
#include<conio.h>

using namespace std;

typedef struct node
   {
     int data;
     node *next,*prev;
   }*list;

list L;

void insertD(list &l)
{
    int i,n;
    list b;
    cout << "===InsertD===" << endl;
    cout << "Banyak data : ";
    cin >> n;
    srand(time(NULL));
    for (i=0; i<n; i++)
    {
        b=new node;
        b->data=rand()%100+1;
        cout<<b->data<<" ";
        b->next=NULL;
        b->prev=NULL;
        if (l==NULL)l=b;
        else
        {   b->next=l;
            l->prev=b;
            l=b;
        }
    }
}

void insertBC(list &l)
{
    int i,n;
    list b,t;
    cout << "===InsertBC===" << endl;
    cout << "Banyak data : ";
    cin >> n;
    srand(time(NULL));
    for (i=0; i<n; i++)
    {
        b=new node;
        b->data=rand()%100+1;
        cout<<b->data<<" ";
        b->next=NULL;
        b->prev=NULL;
        if (l==NULL)
        {
            l=b;
            t=b;
        }
        else
        {
            t->next=b;
            b->prev=t;
            t=b;
        }
    }
}

void insertSC(list &l)
{
    int i,n;
    list b,p,t;
    cout << "==InsertSC==" << endl;
    cout << "Banyak data : ";
    cin >> n;
    l=NULL;
    for (i=0; i<n; i++)
    {
        b=new node;
        b->data=rand()%100+1;
        b->next=NULL;
        b->prev=NULL;
        if (l==NULL)
        {
            l=b;
            t=b;
        }
        else
        {
            if (b->data <= l->data)
            {
                b->next=l;
                l->prev=b;
                l=b;
            }
            else if (b->data >= t->data)
            {
                t->next=b;
                b->prev=t;
                t=b;
            }
            else
            {
                p=l;
                while (p->next->data <= b->data) p=p->next;
                b->next=p->next;
                p->next->prev=b;
                b->prev=p;
                p->next=b;
            }
        }
    }
}
void DeleteNode(list &l)
{int x;
 list t,r;
  cout<<"\ndata yg mau dihapus :";cin>>x;
  if (l->data==x) {
         r=l;
         l=l->next;
         if (l!=NULL) l->prev=NULL;
         delete r;
      }
      else {
       t=l;
       while ((t!=NULL) && (t->data!=x)) t=t->next;
       if (t==NULL) cout<<" data tidak ada"<<endl;
        else {
          t->prev->next=t->next;
          if (t->next!=NULL) t->next->prev=t->prev;
          delete t;
       }
      }

}
void DeleteN(list t,list &l)
{ if (t!=NULL){
          if (t->prev!=NULL)t->prev->next=t->next;else l=l->next;
          if (t->next!=NULL) t->next->prev=t->prev;
          delete t;
       }
 }

void DeleteNode3(list &l)
{int x;
 list p,t,r;
  cout<<"\ndata yg mau dihapus :";cin>>x;
  t=l;
  while ((t!=NULL) && (t->data!=x)) t=t->next;
  if (t==NULL) cout<<" data tidak ada"<<endl;
      else {
          p=t->prev;
          r=t->next;
          DeleteN(p,l);
          DeleteN(t,l);
          DeleteN(r,l);
       }

}

void cetak(list l)
{
    list p;
    cout << endl;
    if (l!=NULL)
    {
        p=l;
        while (p!=NULL)
        {
            cout << p->data << " ";
            p=p->next;
        }
        cout << endl;
        }
     else cout<<"kosong";   
}

main()
{
    list p,q,w;
    p=NULL; 
    q=NULL;
    w=NULL;
//    insertD(p);
//    cetak(p);
    cout << endl;
    insertSC(q);
    cetak(q);
    cout << endl;
    DeleteNode3(q);
    cetak(q);
    getch();
}

