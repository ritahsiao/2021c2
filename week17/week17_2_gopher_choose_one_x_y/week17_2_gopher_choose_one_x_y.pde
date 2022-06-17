PImage  img1,img2,img3,img4;
void setup()
{
  size(640,480);
  img1=loadImage("groundhogIdle.png");
  img2=loadImage("groundhogDown.png");
  img3=loadImage("groundhogLeft.png");
  img4=loadImage("groundhogRight.png");
  gopher = img1;
}
int x=300, y=80;
void draw()
{
  image(gopher, x, y);
}
