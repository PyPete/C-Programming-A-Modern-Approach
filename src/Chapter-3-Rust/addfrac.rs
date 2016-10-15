//Add two fractions
//So "out of the box" rust doesnt include something as simple 
//as C's scanf, but luckily a very helpful library exists that
//mimic it call "text_io" by Oliver Schneider. Thanks Oliver!
//https://github.com/oli-obk/rust-si 
//I am glad that exists others my rust(ing) would have finished
//prematurely
//The only thing that wouldnt work was i had to add a '\n' before
//the second fraction, otherwise I got a parse error.


//Use text_io create - with scan!
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};


fn main()
{
	print!("Enter the first fraction: ");
	//If this line isnt added, the print! doesnt work.
	//Micro explanation here: https://doc.rust-lang.org/beta/std/macro.print.html
	io::stdout().flush().unwrap();
	
	let (num1, denom1, num2, denom2): (i32, i32, i32, i32);
	scan!("{}/{}", num1, denom1);

	print!("Enter the second fraction: ");
	io::stdout().flush().unwrap();
	scan!("\n{}/{}", num2, denom2);


	let result_num = num1 * denom2 + num2 * denom1;
	let result_denom = denom1 * denom2;
	
	println!("The sum is {}/{}", result_num, result_denom); 
	
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
