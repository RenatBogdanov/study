let people = new Map([
['����', '18'],
['����', '22'],
['����', '26'],
])
people.set('����', '19');
let n = people.size;
for (let pair of people.entries()) {
document.write('��� '+(pair[0])+'  �������  '+(pair[1]) + '<br>');}