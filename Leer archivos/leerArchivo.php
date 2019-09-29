<?php
header('Content-type: text/plain');
$start = microtime(true);
$myfile = fopen("1M.txt", "r") or die("Unable to open file!");
$n = 1000*1000;
while (!feof($myfile)) {
    $line = fgets($myfile);
}
fclose($myfile);
$stop = microtime(true)-$start;
echo $stop;
?>