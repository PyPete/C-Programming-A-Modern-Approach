//Prints a date in legal form
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let (month, day, year) : (i32, i32, i32);
	print!("Enter date (mm/dd/yy): ");
	io::stdout().flush().unwrap();
	scan!("{}/{}/{}", month, day, year);
	print!("Dated the {}", day);
	io::stdout().flush().unwrap();
	match day {
		1 | 21 | 31 => { print!("st");}
		2 | 22		=> { print!("nd");}
		3 | 23		=> { print!("rd");}
		_			=> { print!("th");}
	}
	io::stdout().flush().unwrap();
	match month {
		1			=> { print!(" January");}
		2 			=> { print!(" February");}
		3			=> { print!(" March");}
		4 			=> { print!(" April");}
		5 			=> { print!(" May");}
		6 			=> { print!(" June");}
		7   		=> { print!(" July");}
		8			=> { print!(" August");} //I quite like match
		9			=> { print!(" September");}
		10			=> { print!(" October");}
		11			=> { print!(" November");}
		_			=> { print!(" December");}
	} 
	print!(" 20{}\n", year);   
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
