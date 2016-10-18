//Modify upc.c program so that it calculates the check digit for an EAN (European
//Article Number). The user will enter the first 12 digits of the EAN as a single
//number

//Compute a Universal Product Code check digit
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let (i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12,
		first_sum, second_sum, total) : (i32, i32, i32, i32, i32, i32,
			i32, i32, i32, i32, i32, i32, i32, i32, i32);
	print!("Enter the first 12 digits of a EAN (separated by a whitespace: ");
	io::stdout().flush().unwrap();
	scan!("{} {} {} {} {} {} {} {} {} {} {} {}", i1, i2, i3, i4, i5, i6, i7,
												i8, i9, i10, i11, i12);
	first_sum = i2 + i4 + i6 + i8 + i10 + i12;
	second_sum = i1 + i3 + i5 + i7 + i9 + i11;
	total = 3 * first_sum + second_sum;
	print!("Check digit: {}\n", 9-((total-1)%10));
	
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
