
let data= [
    {
        'name' : 'Team Red', //1
        'time' : 1736274844864
    },
    {
        'name' : 'Team Blue', //6
        'time' : 1736275039897
    },
    {
        'name' : 'Team Black', //4
        'time' : 1736274844869
    },
    {
        'name' : 'Team White', //3
        'time' : 1736274844866
    },
    {
        'name' : 'Team Yellow', //5
        'time' : 1736274844875
    },
    {
        'name' : 'Team Gray', //2
        'time' : 1736274844865
    },
]

let data_copy= [
    {
        'name' : 'Team Red', //1
        'time' : 1736274844864
    },
    {
        'name' : 'Team Blue', //6
        'time' : 1736275039897
    },
    {
        'name' : 'Team Black', //4
        'time' : 1736274844869
    },
    {
        'name' : 'Team White', //3
        'time' : 1736274844866
    },
    {
        'name' : 'Team Yellow', //5
        'time' : 1736274844875
    },
    {
        'name' : 'Team Gray', //2
        'time' : 1736274844865
    },
]

data.sort((a, b) => a.time - b.time);

console.log(data); 