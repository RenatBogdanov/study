let a;
let b;
let c=5;
a=Number(prompt("Введите первое число"));
b=Number(prompt("Введите второе число"));
function mean(a,b) {
let c=(a+b)/2;
return c;
}
function doublec(c) {
c=c*2;
return c;
}
document.write("Среднее арифметическое чисел " +a+" и "+b+" равно "+mean(a,b)+"<br/>");
document.write("Глобальная переменная "+(c)+"<br/>");
c = doublec(c);
document.write("Глобальная переменная "+(c));