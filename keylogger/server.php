<?php
$o = fopen("php://input", "r");
$str = stream_get_contents($o);
fclose($o);
$t = fopen("/home/ridwanai/URI/keylogger/log.txt", "a+");
fwrite($t, "he");
fclose($t);
echo "he";
?>