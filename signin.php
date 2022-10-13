<?php

    $servername = "localhost";
    $username = "root";
    $password = "";
    $dbname = "test";

    $user = $_POST['user'];
    $email = $_POST['email'];
    $pass = $_POST['pass'];

    // Create connection
    $conn = new mysqli($servername, $username, $password, $dbname);

    // Check connection
    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }

    $sql = "INSERT INTO users (username, email, pswd) VALUES ('$user', '$email', '$pass')";

    if ($conn->query($sql) === TRUE) {
        header("location: home.html");
    } else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    $conn->close();

?>