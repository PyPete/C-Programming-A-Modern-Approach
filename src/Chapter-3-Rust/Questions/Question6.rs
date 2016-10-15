//Modify the addfrac.c program so that the user enters both fractions at
//the same time, separated by a plus sign

//Use text_io create - with scan!
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};


fn main()
{
	let (num1, denom1, num2, denom2, result_num, result_denom) :
		(i32, i32, i32, i32, i32, i32);	
	
	print!("Enter two fractions separated by a plus sign: ");
	io::stdout().flush().unwrap();
	
	scan!("{}/{}+{}/{}", num1, denom1, num2, denom2);

	let result_num = num1 * denom2 + num2 * denom1;
	let result_denom = denom1 * denom2;
	
	print!("The sum is {}/{}\n", result_num, result_denom); 
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
