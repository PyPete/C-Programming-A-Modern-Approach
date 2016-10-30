//Modify the upc.rs program so that it checks whether a UPC is valid.
//After the user enters a UPC, the program will display either VALID
//or NOT VALID
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let (d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
		first_sum, second_sum, total, check_digit) : (i32, i32, i32, i32, i32,
			i32, i32, i32, i32, i32, i32, i32, i32, i32, i32);
	print!("Enter the first (single) digit: ");
	io::stdout().flush().unwrap();
	scan!("{}", d);
	print!("Enter first group of five digits: ");
	io::stdout().flush().unwrap();
	scan!("{} {} {} {} {}", i1, i2, i3, i4, i5);
	print!("Enter second group of five digits: ");
	io::stdout().flush().unwrap();
	scan!("{} {} {} {} {}", j1, j2, j3, j4, j5);
	first_sum = d+i2+i4+j1+j3+j5;
	second_sum = i1+i3+i5+j2+j4;
	total = 3 * first_sum + second_sum;
	check_digit = 9-((total-1)%10);
	if check_digit<10
	{
		print!("VALID\n");
		print!("Check Digit: {}\n", check_digit);
	}
	else
	{
		print!("NOT VALID\n");
	}

	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
