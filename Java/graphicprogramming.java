import javax.swing.*;
 import java.awt.*;
 import java.awt.event.*;
 import java.awt.Color;
 class Calculator implements ActionListener
 {
int flag=0;
JTextField t1;
String a=new String();String b=new String();String c=new String();
 JButton button0 = new JButton("0");JButton button1 = new JButton("1");
 JButton button2 = new JButton("2");JButton button3 = new JButton("3");
 JButton button4 = new JButton("4");JButton button5 = new JButton("5");
 JButton button6 = new JButton("6");JButton button7 = new JButton("7");
 JButton button8 = new JButton("8");JButton button9 = new JButton("9");
JButton b0=new JButton("+"); JButton b1=new JButton("-");
JButton b2=new JButton("*"); JButton b3=new JButton("/");
JButton bEquals = new JButton("="); JButton clear=new JButton("C");
Calculator()
 {
 JFrame f= new JFrame("Calculator");

 t1=new JTextField();
 t1.setBounds(80,0, 225,30);
 f.setSize(400,400);
 b0.setBounds(260,50, 50,30);
 b2.setBounds(260,200, 50,30);
 b3.setBounds(260,150, 50,30);
 b1.setBounds(260,100, 50,30);
 bEquals.setBounds(200,200, 50,30);
 clear.setBounds(140,200,50,30);
 button0.setBounds(80,200, 50,30);
 button1.setBounds(80,150, 50,30);
 button2.setBounds(140,150, 50,30);
 button3.setBounds(200,150, 50,30);
 button4.setBounds(80,100, 50,30);
 button5.setBounds(140,100, 50,30);
 button6.setBounds(200,100, 50,30);
 button7.setBounds(80,50, 50,30);
 button8.setBounds(140,50, 50,30);
 button9.setBounds(200,50, 50,30);


 button1.addActionListener(this);
 button2.addActionListener(this);
 button3.addActionListener(this);
 button4.addActionListener(this);
 button5.addActionListener(this);
 button6.addActionListener(this);
 button7.addActionListener(this);
 button8.addActionListener(this);
 button9.addActionListener(this);
 button0.addActionListener(this);

 bEquals.addActionListener(this);
 b0.addActionListener(this);
 b2.addActionListener(this);
 b3.addActionListener(this);
 b1.addActionListener(this);
 clear.addActionListener(this);

 f.add(t1); f.add(b0);
 f.add(b1); f.add(b2);
 f.add(b3); f.add(bEquals);
 f.add(clear);


 f.add(button0);
 f.add(button1);
 f.add(button2);
 f.add(button3);
 f.add(button4);
 f.add(button5);
 f.add(button6);
 f.add(button7);
 f.add(button8);
 f.add(button9);

 f.setLayout(null);
 f.setVisible(true);
f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
 }
 public void actionPerformed(ActionEvent e){
String s=e.getActionCommand();
double x=0;
if(s.charAt(0)>='0' &&s.charAt(0)<='9'||s.charAt(0)=='.')
{
if(c.equals(""))
a=a+s;
else
b=b+s;
t1.setText(a+" "+ c + " " + b);
}
else if((s.charAt(0)== '+'||s.charAt(0)== '-'||s.charAt(0)== '*'||s.charAt(0)==
'/')&&!a.equals(""))
 {
 c=s;
t1.setText(a+" "+ c + " " + b);
 }

 else
 {
 if(c.charAt(0)=='+')
 x=Integer.parseInt(a)+Integer.parseInt(b);
 if(c.charAt(0)=='-')
 x=Integer.parseInt(a)-Integer.parseInt(b);
 if(c.charAt(0)=='*')
 x=Integer.parseInt(a)*Integer.parseInt(b);
 if(c.charAt(0)=='/')
 try{
x=Integer.parseInt(a)/Integer.parseInt(b);
}
catch (ArithmeticException f){}
 t1.setText(a+" "+c+ " "+ b +" = "+x);
}
if(s.charAt(0)=='C')
{
a="";
b="";
c="";
x=0;
t1.setText("");
}

 }

public static void main(String args[])
{
 Calculator t = new Calculator();
}
}
