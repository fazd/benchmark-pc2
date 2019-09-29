<?php
header('Content-type: text/plain');
$myfile = fopen("vector105.txt", "r") or die("Unable to open file!");
$n = 10000*10;
$v = array();
while (!feof($myfile)) {
    $line = fgets($myfile);
    array_push($v,$line);
}
fclose($myfile);
$start = microtime(true);
sort($v);
$stop = microtime(true)-$start;
echo $stop;

?>