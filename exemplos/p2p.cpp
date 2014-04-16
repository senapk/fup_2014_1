


Janela t = new Janela(800, 600, "Minha tela");
t.clear();
t.update();

t.keyPressed(Key::Space);
t.keyDown(Key::Right);
if(t.getKey() == Key::A)
	cout << "A maiusculo";


t.mousePos(int &x, int &y);
t.mousePressed(Mouse::Left);


Imagem boneco = new Imagem("desenho.jpg");
boneco.draw(x,y);
boneco.rotate(30);

Som tiro = new Som("tiro.mp3");
som.play();
som.pause();
som.stop();

Pintor p = new Pintor();
p.color();
p.espessura(10);
p.fillColor(Vermelho);

p.circle(x, y, raio);
p.point(x, y);
p.line(x, y, x2, y2);
p.rect(x, y, larg, alt);

Escritor e = new Escritor();
e.font("arial.ttf");
e.size(14);
e.color(alguma coisa);
e.write(x, y, makestr("Vida : %d, life %d", vida, life));
e.write(x, y, makestr("Vida : %d, life %d", vida, life));
e.write(x, y, makestr("Vida : %d, life %d", vida, life));

e.color(234, 15, 139);

e.color(COLOR_BLUE);
e.color(COLOR_DARK_BLUE);

rgb ycm wk
RGB YCM WK

color('k');
color_add('x', 234, 43, 89);
color(245,245,245);
color(Color::Blue);

Mouse::Left
Mouse::Right
Mouse::Up 
Mouse::Middle
Mouse::Down

Util::rand()
Util::time()
Util::rad2deg();
Util::deg2rad();
Util::getPi();
Util::getDistance(x1, y1, x2, y2);
Util::getAngle(x1, y1, x2, y2);

int cont = 0;
int ind = 0;
for(int i = str.lenght; ind < 10 || i >= 0;){
	cont = str[i] * pow(10, ind);
	ind++;
	i--;
}
