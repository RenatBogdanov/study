let a;
let b;
let c;
a=Number(prompt("Введите первое число"));
b=Number(prompt("Введите второе число"));
function mean(a, b) {
return (a+b)/2;
}
c = mean(a,b);
document.write("Среднее арифметическое чисел "+(a)+" и " + (b) + " равно " + (c) + "<br/>");
c = mean(8,10);
document.write("Среднее арифметическое чисел 8 и 10 равно " + (c) + "<br/>");