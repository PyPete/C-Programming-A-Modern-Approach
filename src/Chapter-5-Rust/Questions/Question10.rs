//Using the switch statement, write a program that converts a numerical grade
//into a letter grade:
//Enter numerical grade: 84
//Letter grade: B
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
use std::process;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let (grade, ten) : (i32, i32);
	print!("Enter numerical grade: ");
	io::stdout().flush().unwrap();
	scan!("{}", grade);
	ten = grade / 10;

	if grade < 0
	{
		print!("You have entered an invalid value. Please pick a number between 0-100");
		process::exit(1);
	}
	else if grade > 100
	{
		print!("You have entered an invalid value. Please pick a number between 0-100");
		process::exit(1);
	}
	match ten {
		10 | 9 		=> { print!("A\n");}
		8			=> { print!("B\n");}
		7			=> { print!("C\n");}
		6			=> { print!("D\n");}
		_			=> { print!("F\n");}
	}
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
