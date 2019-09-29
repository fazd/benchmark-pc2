<?php
header('Content-type: text/plain');
$start = microtime(true);
$myfile = fopen("10M.txt", "w") or die("Unable to open file!");
$n = 10000*1000;
for($i = 1; $i < $n; $i++){
    fwrite($myfile,"line ".$i."\r\n");
}
fclose($myfile);
$stop = microtime(true)-$start;
echo $stop;
?>