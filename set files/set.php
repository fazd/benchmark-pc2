<?php
require 'vendor/autoload.php';

header('Content-type: text/plain');
$myfile = fopen("vector104.txt", "r") or die("Unable to open file!");
$n = 10*1000;
$start = microtime(true);
$hash_set = new \Ds\Set();
while (!feof($myfile)) {
    $line = fgets($myfile);
    $hash_set -> add($line);
}
fclose($myfile);
$stop = microtime(true)-$start;
echo $stop;
?>