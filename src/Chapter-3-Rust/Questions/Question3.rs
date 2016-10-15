//Write a program that breaks down an ISBN entered by the user:
//
//Enter ISBN: 978-0-393-97950-3
//GS1 prefix: 978
//Group identifier: 0
//Publisher code: 393
//Item number: 97950
//Check digit: 3
#[macro_use] extern crate text_io;
//to pause console
use std::process::Command;
//to use print!
use std::io::{self, Write};

fn main()
{
	let (gsi, group_id, pub_code, item_num, check_digit) : (i32, i32, i32, i32, i32);
	
	print!("Enter ISBN: ");
	//flush buffer
	io::stdout().flush().unwrap();
	scan!("{}-{}-{}-{}-{}", gsi, group_id, pub_code, item_num, check_digit);
	
	print!("GS1 prefix: {}\n", gsi);
	print!("Group identifier: {}\n", group_id);
	print!("Publisher code: {}\n", pub_code);
	print!("Item number: {}\n", item_num);
	print!("Check digit: {}\n", check_digit);
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
	
}
