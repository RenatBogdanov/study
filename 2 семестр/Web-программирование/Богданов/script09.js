let a;
let b;
let c=5;
a=Number(prompt("������� ������ �����"));
b=Number(prompt("������� ������ �����"));
function mean(a,b) {
let c=(a+b)/2;
return c;
}
function doublec(c) {
c=c*2;
return c;
}
document.write("������� �������������� ����� " +a+" � "+b+" ����� "+mean(a,b)+"<br/>");
document.write("���������� ���������� "+(c)+"<br/>");
c = doublec(c);
document.write("���������� ���������� "+(c));