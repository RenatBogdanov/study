let people = new Map([
['Петя', '18'],
['Вася', '22'],
['Коля', '26'],
])
people.set('Вова', '19');
let n = people.size;
for (let pair of people.entries()) {
document.write('Имя '+(pair[0])+'  Возраст  '+(pair[1]) + '<br>');}