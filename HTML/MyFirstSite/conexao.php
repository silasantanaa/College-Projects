<?php

define("USER", "root");
define("PASS", "")
define("DB", "aluno");
define("SERVER", "localhost");


$conexao = mysqli_connnect(SERVER, USER, PASS, DB);

if (mysqli_connnect_errno()) {
    die("<b> Erro ao conectar. </b> Motivo: " .mysqli_connnect_errno());
}
?>