<?php

    $host = "localhost";  
    $user = "root";  
    $pass = '';  
    $db_name = "test";  
  
    $con = mysqli_connect($host, $user, $pass, $db_name);  
    if(mysqli_connect_errno()) {  
        die("Failed to connect with MySQL: ". mysqli_connect_error());  
    }

    $username = $_POST['user'];  
    $password = $_POST['pass'];  
      
    //to prevent from mysqli injection  
    $username = stripcslashes($username);  
    $password = stripcslashes($password);  
    $username = mysqli_real_escape_string($con, $username);  
    $password = mysqli_real_escape_string($con, $password);  
      
    $sql = "select * from users where username = '$username' and pswd = '$password'";  
    $result = mysqli_query($con, $sql);  
    $row = mysqli_fetch_array($result, MYSQLI_ASSOC);  
    $count = mysqli_num_rows($result);  
          
    if($count == 1){  
        header("location: home.html");  
    }  
    else{  
        echo "<h1> Login failed. Invalid username or password.</h1>";  
    }     

?>