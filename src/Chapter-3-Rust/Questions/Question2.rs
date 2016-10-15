//Write a program that formats product information entered by the
//user. A session with the program should look like this:
//
//Enter item number: 583
//Enter unit price: 13.5
//Enter purchase date (mm/dd/yyyy): 10/24/2010
//
//Item		Unit		Purchase
//			Price		Date
//583		$13.50		10/24/2010
#[macro_use] extern crate text_io;
use std::process::Command;
use std::io::{self, Write};

fn main()
{
	let (item_num, day, month, year) : (i32, i32, i32, i32);
	let price : f32;
	print!("Enter item number: ");
	//show to screen rather than print and get lost in the magical buffer
	io::stdout().flush().unwrap(); //flush away xmas eve hangover and unwrap your presents
	scan!("{}", item_num);
	
	print!("Enter unit price: ");
	//Buffer!! - there must be a better way
	io::stdout().flush().unwrap();
	scan!("\n{}", price); //dont forget the \n
	
	print!("Enter purchase date (dd/mm/yyyy): ");
	//My goddess there is a lot of buffer
	io::stdout().flush().unwrap();
	scan!("\n{}/{}/{}", day, month, year); //at least no ampersands
	
	print!("Item\t\tUnit\t\tPurchase\n");
	print!("\t\tPrice\t\tDate\n"); 
	print!("{0}\t\t${1:.2}\t\t{2}/{3}/{4}\n", item_num, price, day, month, year);
	io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
