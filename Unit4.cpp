//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;

//---------------------------------------------------------------------------
int objx=0;
int objy=0;
int hod=0;
int move1=0;
int actleft=0;
int actright=0;
int actupright=0;
int actupleft=0;
int actdownright=0;
int actdownleft=0;
int active=0;
int game=0;
int moving=0;
//красные фишки
 short int moving_ant1=0;
 short int moving_ant2=0;
 short int moving_ant3=0;
 short int moving_bee=0;
 short int moving_hopper1=0;
 short int moving_hopper2=0;
 short int moving_spider1=0;
 short int moving_spider2=0;
 short int moving_spider3=0;
 short int moving_bug1=0;
 short int moving_bug2=0;
 short int block_ant1=0;
 short int block_ant2=0;
 short int block_ant3=0;
 short int block_bee=0;
 short int block_hopper1=0;
 short int block_hopper2=0;
 short int block_spider1=0;
 short int block_spider2=0;
 short int block_spider3=0;
 short int block_bug1=0;
 short int block_bug2=0;
 short int plased_ant1=0;
 short int plased_ant2=0;
 short int plased_ant3=0;
 short int plased_bee=0;
 short int plased_hopper1=0;
 short int plased_hopper2=0;
 short int plased_spider1=0;
 short int plased_spider2=0;
 short int  plased_spider3=0;
 short int  plased_bug1=0;
 short int  plased_bug2=0;
//зеленые фишки
 short int moving_rant1=0;
 short int moving_rant2=0;
 short int moving_rant3=0;
 short int moving_rbee=0;
 short int moving_rhopper1=0;
 short int moving_rhopper2=0;
 short int moving_rspider1=0;
 short int moving_rspider2=0;
 short int moving_rspider3=0;
 short int moving_rbug1=0;
 short int moving_rbug2=0;
 short int block_rant1=0;
 short int block_rant2=0;
 short int block_rant3=0;
 short int block_rbee=0;
 short int block_rhopper1=0;
 short int block_rhopper2=0;
 short int block_rspider1=0;
 short int block_rspider2=0;
 short int block_rspider3=0;
 short int block_rbug1=0;
 short int block_rbug2=0;
 short int plased_rant1=0;
 short int plased_rant2=0;
 short int plased_rant3=0;
 short int plased_rbee=0;
 short int plased_rhopper1=0;
 short int plased_rhopper2=0;
 short int plased_rspider1=0;
 short int plased_rspider2=0;
 short int  plased_rspider3=0;
 short int  plased_rbug1=0;
 short int  plased_rbug2=0;
//
int xy[1000][1000];
int x=0;
int y=0;
int hod_counter=1;
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

void __fastcall TForm4::ходClick(TObject *Sender)
{
x=0;
y=0;
move1=0;
actleft=0;
actright=0;
actupright=0;
actupleft=0;
actdownright=0;
actdownleft=0;
active=0;
moving_ant1=0;
moving_ant2=0;
moving_ant3=0;
moving_bee=0;
moving_hopper1=0;
moving_hopper2=0;
moving_spider1=0;
moving_spider2=0;
moving_spider3=0;
moving_bug1=0;
moving_bug2=0;
moving_rant1=0;
moving_rant2=0;
moving_rant3=0;
moving_rbee=0;
moving_rhopper1=0;
moving_rhopper2=0;
moving_rspider1=0;
moving_rspider2=0;
moving_rspider3=0;
moving_rbug1=0;
moving_rbug2=0;
if (hod_counter%2==0) {
 block_ant1=1;
 block_ant2=1;
 block_ant3=1;
 block_bee=1;
 block_hopper1=1;
 block_hopper2=1;
 block_spider1=1;
 block_spider2=1;
 block_spider3=1;
 block_bug1=1;
 block_bug2=1;
 block_rant1=0;
 block_rant2=0;
 block_rant3=0;
 block_rbee=0;
 block_rhopper1=0;
 block_rhopper2=0;
 block_rspider1=0;
 block_rspider2=0;
 block_rspider3=0;
 block_rbug1=0;
 block_rbug2=0;
}
else{
   block_rant1=1;
   block_rant2=1;
   block_rant3=1;
   block_rbee=1;
   block_rhopper1=1;
   block_rhopper2=1;
   block_rspider1=1;
   block_rspider2=1;
   block_rspider3=1;
   block_rbug1=1;
   block_rbug2=1;
   block_ant1=0;
   block_ant2=0;
   block_ant3=0;
   block_bee=0;
   block_hopper1=0;
   block_hopper2=0;
   block_spider1=0;
   block_spider2=0;
   block_spider3=0;
   block_bug1=0;
   block_bug2=0;
}
hod_counter++;
if (hod==0) {
  hod=1;
}
else hod=0;
}

//---------------------------------------------------------------------------


void __fastcall TForm4::Button1Click(TObject *Sender)
{
if (hod==0) {
  ShowMessage("победил второй игрок");
}
if (hod==1) {
  ShowMessage("победил первый игрок");

}
}
//---------------------------------------------------------------------------



void __fastcall TForm4::ibug1Click(TObject *Sender)
{
 if (hod_counter==1)
  {
	 ibug1->Top=300;
	 ibug1->Left=600;
	 y=300/30;
	 x=600/30;
	 xy[x][y]=1;
	 plased_bug1=1;
	 }
	 if (block_bug1==1) {
	   active=1;
	 }
		 if (block_bug1==1 && moving_bug1==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=ibug1->Left+60;
		 objy=ibug1->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=ibug1->Left-60;
		  objy=ibug1->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=ibug1->Top+60;
		  objx=ibug1->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=ibug1->Top+60;
		  objx=ibug1->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=ibug1->Top-60;
		  objx=ibug1->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=ibug1->Top-60;
		  objx=ibug1->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_bug1==1) {
			ibug1->Top=objy;
			ibug1->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_bug1==1) {
	   moving_bug1++;
	 }
		 
}

//---------------------------------------------------------------------------

void __fastcall TForm4::ibug2Click(TObject *Sender)
{
if (hod_counter==1){
	 ibug2->Top=300;
	 ibug2->Left=600;
	 y=300/30;
	 x=600/30;
	 xy[x][y]=1;
	 plased_bug2=1;
	 }
	  if (block_bug2==1) {
	   active=1;
	 }
		 if (block_bug2==1 && moving_bug2==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=ibug2->Left+60;
		 objy=ibug2->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=ibug2->Left-60;
		  objy=ibug2->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=ibug2->Top+60;
		  objx=ibug2->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=ibug2->Top+60;
		  objx=ibug2->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=ibug2->Top-60;
		  objx=ibug2->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=ibug2->Top-60;
		  objx=ibug2->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_bug2==1) {
			ibug2->Top=objy;
			ibug2->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_bug2==1) {
	   moving_bug2++;
	 }
		 
 }

//---------------------------------------------------------------------------

void __fastcall TForm4::iant1Click(TObject *Sender)
{
	   if (hod_counter==1) {
	 iant1->Top=300;
	 iant1->Left=600;
	 y=300/30;
	 x=600/30;
	 xy[x][y]=1;
	 plased_ant1=1;
	   }
	 if (block_ant1==1) {
	   active=1;
	 }
		 if (block_ant1==1 && moving_ant1==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=iant1->Left+60;
		 objy=iant1->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=iant1->Left-60;
		  objy=iant1->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=iant1->Top+60;
		  objx=iant1->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=iant1->Top+60;
		  objx=iant1->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=iant1->Top-60;
		  objx=iant1->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=iant1->Top-60;
		  objx=iant1->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_ant1==1) {
			iant1->Top=objy;
			iant1->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_ant1==1) {
	   moving_ant1++;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ihopper1Click(TObject *Sender)
{
if (hod_counter==1) {
	 ihopper1->Top=300;
	 ihopper1->Left=600;
	 y=300/30;
	 x=600/30;
	 xy[x][y]=1;
	 plased_hopper1=1;
 }
  if (block_hopper1==1) {
	   active=1;
	 }
		 if (block_hopper1==1 && moving_hopper1==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=ihopper1->Left+60;
		 objy=ihopper1->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=ihopper1->Left-60;
		  objy=ihopper1->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=ihopper1->Top+60;
		  objx=ihopper1->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=ihopper1->Top+60;
		  objx=ihopper1->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=ihopper1->Top-60;
		  objx=ihopper1->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=ihopper1->Top-60;
		  objx=ihopper1->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_hopper1==1) {
			ihopper1->Top=objy;
			ihopper1->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_hopper1==1) {
	   moving_hopper1++;
	 }
		 
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ihopper2Click(TObject *Sender)
{
if (hod_counter==1) {
	 ihopper2->Top=300;
	 ihopper2->Left=600;
	 y=300/30;
	 x=600/30;
	 xy[x][y]=1;
	 plased_hopper2=1;
 }
	 if (block_hopper2==1 && moving_hopper2==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=ihopper2->Left+60;
		 objy=ihopper2->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=ihopper2->Left-60;
		  objy=ihopper2->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=ihopper2->Top+60;
		  objx=ihopper2->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=ihopper2->Top+60;
		  objx=ihopper2->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=ihopper2->Top-60;
		  objx=ihopper2->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=ihopper2->Top-60;
		  objx=ihopper2->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_hopper2==1) {
			ihopper2->Top=objy;
			ihopper2->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_hopper2==1) {
	   moving_hopper2++;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::iant2Click(TObject *Sender)
{
if (hod_counter==1) {
	 iant2->Top=300;
	 iant2->Left=600;
	 y=300/30;
	 x=600/30;
	 xy[x][y]=1;
	 plased_ant2=1;
 }
 if (block_ant2==1) {
	   active=1;
	 }
 if (block_ant2==1 && moving_ant2==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=iant2->Left+60;
		 objy=iant2->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=iant2->Left-60;
		  objy=iant2->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=iant2->Top+60;
		  objx=iant2->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=iant2->Top+60;
		  objx=iant2->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=iant2->Top-60;
		  objx=iant2->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=iant2->Top-60;
		  objx=iant2->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_ant2==1) {
			iant2->Top=objy;
			iant2->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_ant2==1) {
	   moving_ant2++;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ibeeClick(TObject *Sender)
{
if (hod_counter==1) {
	 ibee->Top=300;
	 ibee->Left=600;
	 y=300/30;
	 x=600/30;
	 xy[x][y]=1;
	 plased_bee=1;
 }
 if (block_bee==1) {
	   active=1;
	 }
 if (block_bee==1 && moving_bee==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=ibee->Left+60;
		 objy=ibee->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=ibee->Left-60;
		  objy=ibee->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=ibee->Top+60;
		  objx=ibee->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=ibee->Top+60;
		  objx=ibee->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=ibee->Top-60;
		  objx=ibee->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=ibee->Top-60;
		  objx=ibee->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_bee==1) {
			ibee->Top=objy;
			ibee->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_bee==1) {
	   moving_bee++;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ispider1Click(TObject *Sender)
{
if (hod_counter==1) {
	 ispider1->Top=300;
	 ispider1->Left=600;
	 y=300/30;
	 x=600/30;
	 xy[x][y]=1;
	 plased_spider1=1;
 }
 if (block_spider1==1) {
	   active=1;
	 }
  if (block_spider1==1 && moving_spider1==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=ispider1->Left+60;
		 objy=ispider1->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=ispider1->Left-60;
		 objy=ispider1->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=ispider1->Top+60;
		  objx=ispider1->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=ispider1->Top+60;
		  objx=ispider1->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=ispider1->Top-60;
		  objx=ispider1->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=ispider1->Top-60;
		  objx=ispider1->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_spider1==1) {
			ispider1->Top=objy;
			ispider1->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_spider1==1) {
	   moving_spider1++;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ispider2Click(TObject *Sender)
{
if (hod_counter==1) {
	 ispider2->Top=300;
	 ispider2->Left=600;
	 y=300/30;
	 x=600/30;
	 xy[x][y]=1;
	 plased_spider2=1;
 }
 if (block_spider2==1) {
	   active=1;
	 }
  if (block_spider2==1 && moving_spider2==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=ispider2->Left+60;
		 objy=ispider2->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=ispider2->Left-60;
		  objy=ispider2->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=ispider2->Top+60;
		  objx=ispider2->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=ispider2->Top+60;
		  objx=ispider2->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=ispider2->Top-60;
		  objx=ispider2->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=ispider2->Top-60;
		  objx=ispider2->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_spider2==1) {
			ispider2->Top=objy;
			ispider2->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_spider2==1) {
	   moving_spider2++;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ispider3Click(TObject *Sender)
{
if (hod_counter==1) {
	 ispider3->Top=300;
	 ispider3->Left=600;
	 y=300/30;
	 x=600/30;
	 xy[x][y]=1;
	 plased_spider3=1;
 }
 if (block_spider3==1) {
	   active=1;
	 }
  if (block_spider3==1 && moving_spider3==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=ispider3->Left+60;
		 objy=ispider3->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=ispider3->Left-60;
		  objy=ispider3->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=ispider3->Top+60;
		  objx=ispider3->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=ispider3->Top+60;
		  objx=ispider3->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=ispider3->Top-60;
		  objx=ispider3->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=ispider3->Top-60;
		  objx=ispider3->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_spider3==1) {
			ispider3->Top=objy;
			ispider3->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_spider3==1) {
	   moving_spider3++;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::iant3Click(TObject *Sender)
{
if (hod_counter==1) {
	 iant3->Top=300;
	 iant3->Left=600;
	 y=300/30;
	 x=600/30;
	 xy[x][y]=1;
	 plased_ant3=1;
 }
 if (block_ant3==1) {
	   active=1;
	 }
  if (block_ant3==1 && moving_ant3==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=iant3->Left+60;
		 objy=iant3->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=iant3->Left-60;
		  objy=iant3->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=iant3->Top+60;
		  objx=iant3->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=iant3->Top+60;
		  objx=iant3->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=iant3->Top-60;
		  objx=iant3->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=iant3->Top-60;
		  objx=iant3->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_ant3==1) {
			iant3->Top=objy;
			iant3->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_ant3==1) {
	   moving_ant3++;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::irbug1Click(TObject *Sender)
{
if (hod_counter==2) {
	 irbug1->Top=300;
	 irbug1->Left=540;
	  y=300/30;
	  x=540/30;
	 xy[x][y]=1;
	 plased_rbug1=1;
 }
 if (block_rbug1==1) {
	   active=1;
	 }
  if (block_rbug1==1 && moving_rbug1==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=irbug1->Left+60;
		 objy=irbug1->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=irbug1->Left-60;
		  objy=irbug1->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=irbug1->Top+60;
		  objx=irbug1->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=irbug1->Top+60;
		  objx=irbug1->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=irbug1->Top-60;
		  objx=irbug1->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=irbug1->Top-60;
		  objx=irbug1->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_rbug1==1) {
			irbug1->Top=objy;
			irbug1->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_rbug1==1) {
	   moving_rbug1++;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::irhopper1Click(TObject *Sender)
{
if (hod_counter==2){
	 irhopper1->Top=300;
	 irhopper1->Left=540;
	  y=300/30;
	  x=540/30;
	 xy[x][y]=1;
	 plased_rhopper1=1;
 }
  if (block_rhopper1==1) {
	   active=1;
	 }
  if (block_rhopper1==1 && moving_rhopper1==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=irhopper1->Left+60;
		 objy=irhopper1->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=irhopper1->Left-60;
		  objy=irhopper1->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=irhopper1->Top+60;
		  objx=irhopper1->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=irhopper1->Top+60;
		  objx=irhopper1->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=irhopper1->Top-60;
		  objx=irhopper1->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=irhopper1->Top-60;
		  objx=irhopper1->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_rhopper1==1) {
			irhopper1->Top=objy;
			irhopper1->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_rhopper1==1) {
	   moving_rhopper1++;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::irspider1Click(TObject *Sender)
{
if (hod_counter==2) {
	 irspider1->Top=300;
	 irspider1->Left=540;
	  y=300/30;
	  x=540/30;
	 xy[x][y]=1;
	 plased_rspider1=1;
 }
  if (block_rspider1==1) {
	   active=1;
	 }
  if (block_rspider1==1 && moving_rspider1==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=irspider1->Left+60;
		 objy=irspider1->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=irspider1->Left-60;
		  objy=irspider1->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=irspider1->Top+60;
		  objx=irspider1->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=irspider1->Top+60;
		  objx=irspider1->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=irspider1->Top-60;
		  objx=irspider1->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=irspider1->Top-60;
		  objx=irspider1->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_rspider1==1) {
			irspider1->Top=objy;
			irspider1->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_rspider1==1) {
	   moving_rspider1++;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::irant2Click(TObject *Sender)
{
if (hod_counter==2) {
	 irant2->Top=300;
	 irant2->Left=540;
	  y=300/30;
	  x=540/30;
	 xy[x][y]=1;
	 plased_rant2=1;
 }
 if (block_rant2==1) {
	   active=1;
	 }
  if (block_rant2==1 && moving_rant2==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=irant2->Left+60;
		 objy=irant2->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=irant2->Left-60;
		  objy=irant2->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=irant2->Top+60;
		  objx=irant2->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=irant2->Top+60;
		  objx=irant2->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=irant2->Top-60;
		  objx=irant2->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=irant2->Top-60;
		  objx=irant2->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_rant2==1) {
			irant2->Top=objy;
			irant2->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_rant2==1) {
	   moving_rant2++;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::irant1Click(TObject *Sender)
{
if (hod_counter==2) {
	 irant1->Top=300;
	 irant1->Left=540;
	  y=300/30;
	  x=540/30;
	 xy[x][y]=1;
	 plased_rant1=1;
}
if (block_rant1==1) {
	   active=1;
	 }
  if (block_rant1==1 && moving_rant1==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=irant1->Left+60;
		 objy=irant1->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=irant1->Left-60;
		  objy=irant1->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=irant1->Top+60;
		  objx=irant1->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=irant1->Top+60;
		  objx=irant1->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=irant1->Top-60;
		  objx=irant1->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=irant1->Top-60;
		  objx=irant1->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_rant1==1) {
			irant1->Top=objy;
			irant1->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_rant1==1) {
	   moving_rant1++;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::irhopper2Click(TObject *Sender)
{
if (hod_counter==2) {
	 irhopper2->Top=300;
	 irhopper2->Left=540;
	  y=300/30;
	  x=540/30;
	 xy[x][y]=1;
	 plased_rhopper2=1;
 }
 if (block_rhopper2==1) {
	   active=1;
	 }
  if (block_rhopper2==1 && moving_rhopper2==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=irhopper2->Left+60;
		 objy=irhopper2->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=irhopper2->Left-60;
		  objy=irhopper2->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=irhopper2->Top+60;
		  objx=irhopper2->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=irhopper2->Top+60;
		  objx=irhopper2->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=irhopper2->Top-60;
		  objx=irhopper2->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=irhopper2->Top-60;
		  objx=irhopper2->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_rhopper2==1) {
			irhopper2->Top=objy;
			irhopper2->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_rhopper2==1) {
	   moving_rhopper2++;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::irspider2Click(TObject *Sender)
{
if (hod_counter==2) {
	 irspider2->Top=300;
	 irspider2->Left=540;
	  y=300/30;
	  x=540/30;
	 xy[x][y]=1;
	 plased_rspider2=1;
 }
  if (block_rspider2==1) {
	   active=1;
	 }
  if (block_rspider2==1 && moving_rspider2==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=irspider2->Left+60;
		 objy=irspider2->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=irspider2->Left-60;
		  objy=irspider2->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=irspider2->Top+60;
		  objx=irspider2->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=irspider2->Top+60;
		  objx=irspider2->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=irspider2->Top-60;
		  objx=irspider2->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=irspider2->Top-60;
		  objx=irspider2->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_rspider2==1) {
			irspider2->Top=objy;
			irspider2->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_rspider2==1) {
	   moving_rspider2++;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::irbeeClick(TObject *Sender)
{
 if (hod_counter==2) {
	 irbee->Top=300;
	 irbee->Left=540;
	  y=300/30;
	  x=540/30;
	 xy[x][y]=1;
	 plased_rbee=1;
 }
 if (block_rbee==1) {
	   active=1;
	 }
  if (block_rbee==1 && moving_rbee==0)
	  { 
	 if (active==1) {
		if (actright>0)
		 {
		 objx=irbee->Left+60;
		 objy=irbee->Top;
		 move1=1;    
		}
		if (actleft>0)
		 {
		 objx=irbee->Left-60;
		  objy=irbee->Top;
		 move1=1; 
		}
		if (actdownright>0)
		 {
		  objy=irbee->Top+60;
		  objx=irbee->Left+30;
		  move1=1;    
		}
		if (actdownleft>0) 
		{
		  objy=irbee->Top+60;
		  objx=irbee->Left-30; 
		  move1=1;   
		}
		if (actupleft>0)
		 {
		  objy=irbee->Top-60;
		  objx=irbee->Left-30;
		  move1=1;   
		}
		if (actupright>0)
		 {
		  objy=irbee->Top-60;
		  objx=irbee->Left+30;
		  move1=1;    
		}
		 }
	 }
		 if (move1==1 && moving_rbee==1) {
			irbee->Top=objy;
			irbee->Left=objx;
			objx=objx/30;
			objy=objy/30;
			xy[objx][objy]=1;
		 }
	 if (block_rbee==1) {
	   moving_rbee++;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::irspider3Click(TObject *Sender)
{
 if (hod_counter==2) {
	 irspider3->Top=300;
	 irspider3->Left=540;
	  y=300/30;
	  x=540/30;
	 xy[x][y]=1;
	 plased_rspider3=1;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::irbug2Click(TObject *Sender)
{
 if (hod_counter==2) {
	 irbug2->Top=300;
	 irbug2->Left=540;
	  y=300/30;
	  x=540/30;
	 xy[x][y]=1;
	 plased_rbug2=1;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::irant3Click(TObject *Sender)
{
 if (hod_counter==2) {
	 irant3->Top=300;
	 irant3->Left=540;
	  y=300/30;
	  x=540/30;
	 xy[x][y]=1;
	 plased_rant3=1;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::upleftClick(TObject *Sender)
{
 actupleft++;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::downrightClick(TObject *Sender)
{
 actdownright++;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::downleftClick(TObject *Sender)
{
 actdownleft++;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::uprightClick(TObject *Sender)
{
 actupright++;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::leftClick(TObject *Sender)
{
 actleft++;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::rightClick(TObject *Sender)
{
 actright++;
}
//---------------------------------------------------------------------------

