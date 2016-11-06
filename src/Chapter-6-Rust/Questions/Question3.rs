//Write a program that asks the user to enter a fraction, then reduces the
//fraction to the lowest terms:
//Enter a fraction: 6/12
//In lowest terms: 1/2
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let mut a:i32; let mut b:i32; let mut quotient:i32; let mut temp:i32;
	let mut remainder:i32; let mut num:i32; let mut denom:i32;
	print!("Enter a fraction: ");
	io::stdout().flush().unwrap();
	scan!("{} / {}", num, denom);
	a = num;
	b = denom;
	//find largest
	if a<b
	{
		//swap values
		temp = a;
		a = b;
		b = temp;
	}
	loop
	{
		//calculate the remainder and quotient
		remainder = a%b;
		quotient = a/b;
		//If quotient if 0 then found the answer and break
		if remainder == 0
		{
			break;	
		}
		//Otherwise continue
		a=b;
		b = remainder;
	}
	print!("In lowest terms: {}/{}\n", num/b, denom/b);
	io::stdout().flush().unwrap();
	//dont need this but useful if you want to double click the
	//.exe file to run the code
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
