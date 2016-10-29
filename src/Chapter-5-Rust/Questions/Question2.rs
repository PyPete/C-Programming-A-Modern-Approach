//Write a program that asks the user for a 24-hour time, then displays the time in
//12-hour form:
//Enter a 24-hour time: 21:11
//Equivalent 12-hour time: 9:11PM
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let (hour, minute) : (i32, i32);
	print!("Enter a 24-hour time: ");
	io::stdout().flush().unwrap();
	//Need a space between for it to work
	scan!("{} : {}", hour, minute);
	//if hour less than or equal to 12, then
    //its all good
    if hour <= 12
    {
    	print!("Equivalent 12-hour time: {}:{} AM\n", hour, minute);
    }
    else
    {
    	print!("Equivalent 12-hour time: {}:{} PM\n", hour-12, minute);
    }
    io::stdout().flush().unwrap();
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
