//week13_6_gundam_correct
PShape gundam;
void setup()
{
  size(500,500,P3D);
  gundam = loadShape("Gundam.obj");
}
void draw()
{
  background(#F8FFAF);//但是模型太小,等一下要把它放大!
  translate(250, 500);//往右移一半
  scale(20, -20, 20);
  rotateY(radians(frameCount));
  shape(gundam);//秀出模型,像今天教的image()
}
