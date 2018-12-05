#include<iostream>
using namespace std;
class audioclip{
private:
  int channel;
  int resolution;
  int simple_rate;
public:
audioclip()
{
  channel=1;
  resolution=8;
  simple_rate=22050;
}
void setchannel(int r)
{ int a;
  if(r==1 || r==2)
  {
    channel=r;
  }
  else{
    cout<<"your val is not good:"<<endl;
    cout<<"enter your val again: ";
    cin>>a;
    this->setchannel(a);
}

}
void setresolution(int r)
{ int a;
  if(r==8 || r==16 || r==24)
  {
    resolution=r;
  }
  else{
    cout<<"your val is not good:"<<endl;
    cout<<"enter your val again: ";
    cin>>a;
    this->setresolution(a);
}

}
void setsimple_rate(int r)
{ int a;
  if(r==22050 || r==44100 || r==88200)
  {
    simple_rate=r;
  }
  else{
    cout<<"your val is not good:"<<endl;
    cout<<"enter your val again: ";
    cin>>a;
    this->setsimple_rate(a);
}

}
int getchannel()
{
  return channel;
}
int getresoltuion()
{
  return resolution;
}
int getsimple_rate()
{
  return simple_rate;
}
bool studioqualtiy()
{
  int ch=this->getchannel();
  int res=this->getresoltuion();
  int sim=this->getsimple_rate();
  if(ch==2 && res==24 && sim==88200)
  {
    return true;
  }else
  return false;
}
long int datasize(int d)
{
  float result;
  result=d*channel*(resolution/8)*simple_rate;
  return result;
}


};
int main()
{ audioclip tape;
  int a,b,c,d;
  cout<<"enter your channel :";
  cin>>a;
  tape.setchannel(a);
  cout<<endl;

  cout<<"enter your resoltuion :";
  cin>>b;
    tape.setresolution(b);
  cout<<endl;
  cout<<"enter your simple_rate :";

  cin>>c;
  tape.setsimple_rate(c);
  cout<<endl;






  cout<<tape.studioqualtiy()<<endl;
  cout<<"enter your seconds :";
  cin>>d;

  cout<<tape.datasize(d);

  return 0;
}
