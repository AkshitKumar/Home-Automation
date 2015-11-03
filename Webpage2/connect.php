<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "homeauto";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 
echo "Connected successfully";
$status = $_POST['status'];
$id = $_POST[id];

if($status == "on"){
	$sql = sprintf("UPDATE hasc SET status='on' WHERE id = %d", (int)$id ) ;
}
else if($status == "off"){
	$sql = sprintf("UPDATE hasc SET status='off' WHERE id = %d", (int)$id ) ;
}

if ($conn->query($sql) === TRUE) {
    echo "Record updated successfully";
} else {
    echo "Error updating record: " . $conn->error;
}

$conn->close();
?>