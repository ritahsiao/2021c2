//week_13_2改成圓圈圈
void setup(){
  size(400,300);
  textSize(40);
}
int choice = -1; //-1:沒選, 0:Choise 1,1:Choise 2,2:Choise 3
void draw(){
   background(#DFEA45); //背景色
   fill(#456FEA); //字填充的顏色
   if(choice==0) rect(50,50,150,2); 
   if(choice==1) rect(50,100,150,2);
   if(choice==2) rect(50,150,150,2);
   text("Choice 1",50,50);
   text("Choice 2",50,100);
   text("Choice 3",50,150);
}
void mousePressed(){
  choice = int(random(3)); //choice = (choice+1)%3;
}
