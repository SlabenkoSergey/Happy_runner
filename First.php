<?php
mysql_connect("localhost","bestpar_gps","abBu2jL4b39r63N");
mysql_select_db("bestpar_GPS");
//$sql=mysql_query("SELECT title FROM location WHERE  lat > '". $_POST["lat"]."' and long >'". $_POST["long"]."'");
$sql=mysql_query("SELECT * FROM location");
while($row=mysql_fetch_assoc($sql))
$output[]=$row;
print(json_encode($output));
mysql_close();
?>




