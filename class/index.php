<?php
	require_once('Osoba.class.php');

	$jane = new Osoba('Jane', 'Doe', 'f', '2000-02-12', 555888777);
	$john = new Osoba('John', 'Doe','m', '1999-12-11', 123456789);
	
	echo $john -> getInfo();
	echo $jane -> getInfo();
?>