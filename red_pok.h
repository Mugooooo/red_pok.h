#include <iostream>
using namespace std;
struct thuman{

int godina,ai_input_time,bi_nothing_time,ci_prior,di_trans;
float stanje_tekuci,stanje_devizni;
thuman*sljedeci;
  char ime[50],prezime[50],valuta[50];
};




struct tsal{
tcovjek*front;
tcovjek*rear;
};





void init(tsal*neki_red){
tcovjek*glava=new tcovjek;
glava->sljedeci=NULL;
neki_red->front=glava;
neki_red->rear=glava;
}





void enqueue(tsal*neki_red,tcovjek*neka_osoba){
//tcovjek*nova_osoba=neka_osoba;
neki_red->rear->sljedeci=neka_osoba;
neki_red->rear=neka_osoba;
neka_osoba->sljedeci=NULL;
}





void dequeue(tsal*neki_red){
tcovjek*pomocni=neki_red->front;
neki_red->front=pomocni->sljedeci;
delete pomocni;
}





bool isempty(tsal*neki_red){
//cout<<"==============="<<neki_red->rear<<endl<<neki_red->front<<endl;
if(neki_red->rear==neki_red->front)return true;
else return false;
}





tcovjek*front(tsal*neki_red){
return neki_red->front->sljedeci;
}





