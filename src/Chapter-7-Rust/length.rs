//Determine the length of a message
//process::command used to pause console
use std::process::Command;
//Need this to access print!
use std::io::{self, Write};

fn main()
{
	let mut total:i32 = 0;
	print!("Enter a message: ");
	io::stdout().flush().unwrap();
	let mut word = String::new();
	io::stdin().read_line(&mut word)
		.ok()
		.expect("Failed to read");
		
	for _ in word.chars()	
	{
		total = total+1;
	}
	print!("Your message was {} characters(s) long.\n", total);
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
