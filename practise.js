// const credit = ((num) => {
//     let credit = num;
//     console.log(`initial credit: ${credit}`);
//     return () => {
//         credit--;
//         if (credit > 0) {
//             console.log(`credit left: ${credit}`);
//         }
//         if(credit<=0){
//             console.log('credit exhausted');
//         }
//     }
// })(3)
// credit();
// credit();
// credit();


const person = {
    alive: true
}
const musician = {
    plays:true
}

Object.setPrototypeOf(musician, person);
console.log(musician.alive);
console.log(person.plays)
console.log(musician.__proto__)