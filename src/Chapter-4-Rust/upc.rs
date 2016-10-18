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
	print!("Enter the first (single) digit: ");
	io::stdout().flush().unwrap();
	scan!("{}", d);
	
	print!("Enter first group of five digits: ");
	io::stdout().flush().unwrap();
	scan!("\n{} {} {} {} {}", i1, i2, i3, i4, i5); //unsure how to separate by 1 digit
	
	print!("Enter second group of five digits: ");
	io::stdout().flush().unwrap();
	scan!("\n{} {} {} {} {}", j1, j2, j3, j4, j5);
	
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	print!("Check digit: {}\n", 9-((total-1)%10));
	io::stdout().flush().unwrap();
	
	
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
