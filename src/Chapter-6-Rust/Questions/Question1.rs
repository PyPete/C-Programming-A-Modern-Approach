//Write a program that finds the largest in a series of numbers entered by the
//user. The program must prompt the user to enter numbers one by one. When the user
//enters 0 or a negative number, the program must display the largest nonnegative
//number entered:
//Enter a number: 60
//Enter a number: 38.3 etc etc
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let mut largest : f32 = 0.0;
	//a neat way to do an infinite loop
	loop 
	{
		print!("Enter a number (0 will exit): ");
		//print message to screen
		io::stdout().flush().unwrap();
		//read in num as text first
		let mut num = String::new();
		//Its quite cool that you can build in error checking
		io::stdin().read_line(&mut num)
			.ok()
			.expect("Something went wrong");
		//parse the text into a float - same build in error checking
		let num:f32 =  num.trim()
			.parse()
			.ok()
			.expect("Failed to parse number");
		
		//exit loop if user enters 0.0
		if num == 0.0
		{
			break;
		}
		//else check if new number is larger than current largest
		else
		{
			if num > largest
			{
				largest = num;
			}
		}
	}
	print!("The largest number entered was {}\n", largest);
	
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
