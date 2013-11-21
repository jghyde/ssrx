<?php
$to ="egkaushik@gmail.com";
$subject = "test";

  $message = "jjjjjjjjjjjjjjj";
//$from = $sender;
$sender = "kul.kaushik10@yahoo.com";
//$header .= "Content-type: text/html; charset=utf-8";
//mail($to,$subject,$message,$headers);
//echo "Mail Sent.";

	
	
	$headers = "MIME-Version: 1.0" . "\r\n";
$headers .= "Content-type:text/html;charset=iso-8859-1" . "\r\n";

// More headers
$headers .= 'From: '.$sender. "\r\n";
$headers .= 'Cc: myboss@example.com' . "\r\n";

mail($to,$subject,$message,$headers);
if(mail)
{
echo "aaa";

}
else
{
echo "kk";
}



?>