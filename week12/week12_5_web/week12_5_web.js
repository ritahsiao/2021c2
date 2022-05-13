function setup() {
    initializeFields();
    createCanvas(400, 300);
    textSize(40);
}

// -1:沒選, 0:Choise 1,1:Choise 2,2:Choise 3
var choice;

function draw() {
    // 背景色
    background(color(0xDF, 0xEA, 0x45));
    // 字填充的顏色
    fill(color(0x45, 0x6F, 0xEA));
    if (choice == 0)
        rect(50, 50, 100, 2);
    if (choice == 1)
        rect(50, 100, 100, 2);
    if (choice == 2)
        rect(50, 150, 100, 2);
    text("我是1", 50, 50);
    text("我是2", 50, 100);
    text("我是3", 50, 150);
}

function mousePressed() {
    // choice = (choice+1)%3;
    choice = int(random(3));
}

function initializeFields() {
    choice = -1;
}
