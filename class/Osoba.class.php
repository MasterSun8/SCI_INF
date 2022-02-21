<?php
    class Osoba {
        public $name;
        public $surname;
        public $sex;
        public $birthdate;
        public $phonenumber;

        function __construct($name, $surname, $sex, $birthdate, $phonenumber) {
            $this->name = $name;
            $this->setSurname($surname);
            $this->sex = $sex;
            $this->birthdate = $birthdate;
            $this->setPhoneNumber($phonenumber);
        }
        
        function getPhoneNumber(){
            return $this->phonenumber;
        }

        function getDays(){
            $todaydate = new DateTime(date("Y-m-d"));
            $temp = new DateTime($this->birthdate);
            $interval = $temp->diff($todaydate);
            
            return $interval->days;
        }

        function setPhoneNumber($phonenumber){
            if(mb_strlen($phonenumber) == 9){
                $this->phonenumber = $phonenumber;
            }else{
                echo "Phone number must consist of 9 digits<br>";
            }
        }

        function setSurname($surname){
            $isThereNumber = false;
            for ($i = 0; $i < strlen($surname); $i++) {
                if ( ctype_digit($surname[$i]) ) {
                    $isThereNumber = true;
                    break;
                }
            }
 
            if ( $isThereNumber ) {
                echo "Surnames can't contain digits<br>";
            }else{
                $this->surname = $surname;
            }
        }

        function getInfo(){
            $days = $this->getDays();
            $hon = ".";
            if($this->sex == 'f'){
                $hon = "s.";
            }
            return "I'm Mr$hon $this->name. $this->name $this->surname. <br> I was born on $this->birthdate, and have already lived $days days.<br><br>My phone number is $this->phonenumber.<br>Call me if you came to Paris.<br><br>";
        }
    }
?>