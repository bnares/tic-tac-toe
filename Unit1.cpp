//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
// p1...p9 nazwy pol w grze ('n' pole puste '0' zajeste przez kolko 'x' zajete przez krzyzyk
char p1,p2,p3,p4,p5,p6,p7,p8,p9;
// czyja kolej
char kto;

void sprawdz()
{
 if((p1==p2 && p2==p3 && p1!='n')||
   (p4==p5 && p5==p6 && p4!='n')||
   (p7==p8 && p8==p9 && p8!='n')||
   (p1==p4 && p4==p7 && p4!='n')||
   (p2==p5 && p5==p8 && p5!='n')||
   (p3==p6 && p6==p9 && p3!='n')||
   (p1==p5 && p5==p9 && p9!='n')||
   (p3==p5 && p5==p7 && p3!='n'))
   {
        char *w;
        if(kto =='o')
        {
            w = "wygrywa krzyzyk";
        }
        else
        {
           w = "wygrywa kolko";
        }
        Application -> MessageBox(w, "Koniec gry", MB_OK);
   }

}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
      pole1 -> Picture -> LoadFromFile("img/nic.bmp");
      pole2 ->Picture -> LoadFromFile("img/nic.bmp");
      pole3 -> Picture -> LoadFromFile("img/nic.bmp");
      pole3 -> Picture -> LoadFromFile("img/nic.bmp");
      pole4 -> Picture -> LoadFromFile("img/nic.bmp");
      pole5 -> Picture -> LoadFromFile("img/nic.bmp");
      pole6 -> Picture -> LoadFromFile("img/nic.bmp");
      pole7 -> Picture -> LoadFromFile("img/nic.bmp");
      pole8 -> Picture -> LoadFromFile("img/nic.bmp");
      pole9 -> Picture -> LoadFromFile("img/nic.bmp");
      tura -> Picture -> LoadFromFile("img/osmall.bmp");

      p1 = 'n'; p2 = 'n'; p3 = 'n';
      p4 = 'n'; p5 = 'n'; p6 = 'n';
      p7 = 'n'; p8 = 'n'; p9 = 'n';
      kto = 'o';
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole1Click(TObject *Sender)
{
if(p1 == 'n')
{
 if(kto =='o')
 {
  p1 = 'o';
  kto = 'x';
  pole1 ->Picture ->LoadFromFile("img/o.bmp");
  tura -> Picture ->LoadFromFile("img/xsmall.bmp");
  pole1 -> Enabled = false;
 }

 else
 {
  p1 = 'x';
  kto = 'o';
  pole1 -> Picture -> LoadFromFile("img/x.bmp");
  tura ->Picture ->LoadFromFile("img/osmall.bmp");
  pole1 ->Enabled = false;
 }
 sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole2Click(TObject *Sender)
{
if(p2 == 'n')
{
 if(kto =='o')
 {
  p2 = 'o';
  kto = 'x';
  pole2 ->Picture ->LoadFromFile("img/o.bmp");
  tura -> Picture ->LoadFromFile("img/xsmall.bmp");
  pole2 -> Enabled = false;
 }

 else
 {
  p2 = 'x';
  kto = 'o';
  pole2 -> Picture -> LoadFromFile("img/x.bmp");
  tura ->Picture ->LoadFromFile("img/osmall.bmp");
  pole2 ->Enabled = false;
 }
 sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole3Click(TObject *Sender)
{
if(p3 == 'n')
{
 if(kto =='o')
 {
  p3 = 'o';
  kto = 'x';
  pole3 ->Picture ->LoadFromFile("img/o.bmp");
  tura -> Picture ->LoadFromFile("img/xsmall.bmp");
  pole3 -> Enabled = false;
 }

 else
 {
  p3 = 'x';
  kto = 'o';
  pole3 -> Picture -> LoadFromFile("img/x.bmp");
  tura ->Picture ->LoadFromFile("img/osmall.bmp");
  pole3 ->Enabled = false;
 }
 sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole4Click(TObject *Sender)
{
if(p4 == 'n')
{
 if(kto =='o')
 {
  p4 = 'o';
  kto = 'x';
  pole4 ->Picture ->LoadFromFile("img/o.bmp");
  tura -> Picture ->LoadFromFile("img/xsmall.bmp");
  pole4 -> Enabled = false;
 }

 else
 {
  p4 = 'x';
  kto = 'o';
  pole4 -> Picture -> LoadFromFile("img/x.bmp");
  tura ->Picture ->LoadFromFile("img/osmall.bmp");
  pole4 ->Enabled = false;
 }
 sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole5Click(TObject *Sender)
{
if(p5 == 'n')
{
 if(kto =='o')
 {
  p5 = 'o';
  kto = 'x';
  pole5 ->Picture ->LoadFromFile("img/o.bmp");
  tura -> Picture ->LoadFromFile("img/xsmall.bmp");
  pole5 -> Enabled = false;
 }

 else
 {
  p5 = 'x';
  kto = 'o';
  pole5 -> Picture -> LoadFromFile("img/x.bmp");
  tura ->Picture ->LoadFromFile("img/osmall.bmp");
  pole5 ->Enabled = false;
 }
 sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole6Click(TObject *Sender)
{
if(p6 == 'n')
{
 if(kto =='o')
 {
  p6 = 'o';
  kto = 'x';
  pole6 ->Picture ->LoadFromFile("img/o.bmp");
  tura -> Picture ->LoadFromFile("img/xsmall.bmp");
  pole6 -> Enabled = false;
 }

 else
 {
  p6 = 'x';
  kto = 'o';
  pole6 -> Picture -> LoadFromFile("img/x.bmp");
  tura ->Picture ->LoadFromFile("img/osmall.bmp");
  pole6 ->Enabled = false;
 }
 sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole7Click(TObject *Sender)
{
if(p7 == 'n')
{
 if(kto =='o')
 {
  p7 = 'o';
  kto = 'x';
  pole7 ->Picture ->LoadFromFile("img/o.bmp");
  tura -> Picture ->LoadFromFile("img/xsmall.bmp");
  pole7 -> Enabled = false;
 }

 else
 {
  p7 = 'x';
  kto = 'o';
  pole7 -> Picture -> LoadFromFile("img/x.bmp");
  tura ->Picture ->LoadFromFile("img/osmall.bmp");
  pole7 ->Enabled = false;
 }
 sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole8Click(TObject *Sender)
{
if(p8 == 'n')
{
 if(kto =='o')
 {
  p8 = 'o';
  kto = 'x';
  pole8 ->Picture ->LoadFromFile("img/o.bmp");
  tura -> Picture ->LoadFromFile("img/xsmall.bmp");
  pole8 -> Enabled = false;
 }

 else
 {
  p8 = 'x';
  kto = 'o';
  pole8 -> Picture -> LoadFromFile("img/x.bmp");
  tura ->Picture ->LoadFromFile("img/osmall.bmp");
  pole8 ->Enabled = false;
 }
 sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole9Click(TObject *Sender)
{
if(p9 == 'n')
{
 if(kto =='o')
 {
  p9 = 'o';
  kto = 'x';
  pole9 ->Picture ->LoadFromFile("img/o.bmp");
  tura -> Picture ->LoadFromFile("img/xsmall.bmp");
  pole9 -> Enabled = false;
 }

 else
 {
  p9 = 'x';
  kto = 'o';
  pole9 -> Picture -> LoadFromFile("img/x.bmp");
  tura ->Picture ->LoadFromFile("img/osmall.bmp");
  pole9 ->Enabled = false;
 }
 sprawdz();
}
}
//---------------------------------------------------------------------------
