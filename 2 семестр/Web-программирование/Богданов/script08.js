let a;
let b;
let c;
a=Number(prompt("������� ������ �����"));
b=Number(prompt("������� ������ �����"));
function mean(a, b) {
return (a+b)/2;
}
c = mean(a,b);
document.write("������� �������������� ����� "+(a)+" � " + (b) + " ����� " + (c) + "<br/>");
c = mean(8,10);
document.write("������� �������������� ����� 8 � 10 ����� " + (c) + "<br/>");