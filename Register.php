<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form method = POST>
        <input type = text name= name>
        <input type = number name = phone>
        <input type = password name = password>
        <input type = submit name = submit>
</form>
</body>
<?php

if(isset($_POST['name'])){
    $name = $_POST['name'];
    $phone = $_POST['phone'];
    $password = $_POST['password'];

    $conn = mysqli_connect('localhost', 'root', '', 'login');
    if(!$conn){
        echo "Not connected";

    }
    else {
        $query = "insert into loginpage(name,phone,password) VALUES ('$name', '$phone', '$password')";
        if($conn->query($query)){
            header("location:login.php");
        }else{
            echo "Registration failed";
        }
    }
}
?>
</html>