//Rewrite upc.rs program so that the user enters 11 digits at one time,
//instead of entering one digit, then five digits, and then another five digits
//Computes a Universal Product Code check digit

//Compute a Universal Product Code check digit
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let (d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
		first_sum, second_sum, total) : (i32, i32, i32, i32, i32, i32,
			i32, i32, i32, i32, i32, i32, i32, i32);
	print!("Enter the first 11 digits of a UPC (separated by a whitespace: ");
	io::stdout().flush().unwrap();
	scan!("{} {} {} {} {} {} {} {} {} {} {}", d, i1, i2, i3, i4, i5, j1,
												j2, j3, j4, j5);
	first_sum = d+2+i4+j1+j3+j5;
	second_sum = i1+i3+i5+j2+j4;
	total = 3 * first_sum + second_sum;
	print!("Check digit: {}\n", 9-((total-1)%10));
	
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
