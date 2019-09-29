var d = new Date();
var start = d.getTime();
var fso = CreateObject("Scripting.FileSystemObject");
var a = fso.CreateTextFile("100k.txt", true);
var n = 100*1000;
for(var i = 0; i < n; i++){
    a.WriteLine("line"+i+"\n");
}
a.Close();
var stop = d.getTime() - start;
console.log(stop);