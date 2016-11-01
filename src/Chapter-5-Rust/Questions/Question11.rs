//Write a program that asks the user for a two-digit number, then prints the
//English word for the number:
//Enter a two-digit number: 45
//You entered the number forty-five.
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
use std::process;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let (num, first, second) : (i32, i32, i32);
	print!("Enter a two-digit number: ");
	io::stdout().flush().unwrap();
	scan!("{}", num);
	first = num/10;
	second = num%10;
	if first == 1
	{
		match second {
			1 			=> { print!("Eleven\n");}
			2 			=> { print!("Twelve\n");}
			3			=> { print!("Thirteen\n");}
			4 			=> { print!("Fourteen\n");}
			5 			=> { print!("Fifteen\n");}
			6 			=> { print!("Sixteen\n");}
			7 			=> { print!("Seventeen\n");}
			8 			=> { print!("Eighteen\n");}
			_ 			=> { print!("Nineteen\n");}
		}
		io::stdout().flush().unwrap();
		let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
		process::exit(1);

	}
	//lovely syntax
	match first {
		2 			=> { print!("Twenty");}
		3 			=> { print!("Thirty");}
		4 			=> { print!("Forty");}
		5 			=> { print!("Fifty");}
		6 			=> { print!("Sixty");}
		7           => { print!("Seventy");}
		8 			=> { print!("Eigthy");}
		_ 			=> { print!("Ninety");}
	}
	match second {
		1           => { print!("-one\n");}
		2 			=> { print!("-two\n");}
		3 			=> { print!("-three\n");}
		4 			=> { print!("-four\n");}
		5 			=> { print!("-five\n");}
		6 			=> { print!("-six\n");}
		7           => { print!("-seven\n");}
		8 			=> { print!("-eight\n");}
		_ 			=> { print!("-nine\n");}
	}
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
