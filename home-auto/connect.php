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
if($status == "on"){
	$sql = "UPDATE toggle SET status='on'";
}
else if($status == "off"){
	$sql = "UPDATE toggle SET status='off'";
}

if ($conn->query($sql) === TRUE) {
    echo "Record updated successfully";
} else {
    echo "Error updating record: " . $conn->error;
}

$conn->close();
?>