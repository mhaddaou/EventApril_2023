<?php
    function generateRandomWords() {
        $words = array("rock", "scissors", "paper");
        return $words[shuffle($words)];
    }
    $chose = readline('Choose rock, paper, or scissors: ');
    $gen = generateRandomWords();
    while(true){
        if (($gen == "paper" && $chose == "scissors") || ($chose == "paper" && $gen == "scissors") ){
            if ($chose == "paper" && $gen == "scissors")
            echo "Sorry, you lost. The computer chose $gen.";
            else
            echo "Congratulations! You won! The computer chose $gen.";
        }
        if (($gen == "rock" && $chose == "paper") || ($gen == "paper" && $chose == "rock")){
            if ($gen == "rock" && $chose == "paper")
            echo "Congratulations! You won! The computer chose $gen.";
            else
            echo "Sorry, you lost. The computer chose $gen.";
        }
        if (($gen == "rock" && $chose == "scissors") || ($chose == "rock" && $gen == "scissors")){
            if ($gen == "rock" && $chose == "scissores")
            echo "Sorry, you lost. The computer chose $gen.";
            else
            echo "Congratulations! You won! The computer chose $gen.";
        }
        if ($gen != $chose)
            break;
        else{
            echo "Play again The computer chose like you \n";
            $chose = readline('Choose rock, paper, or scissors: ');
            $gen = generateRandomWords();
        }
    }
    
?>
