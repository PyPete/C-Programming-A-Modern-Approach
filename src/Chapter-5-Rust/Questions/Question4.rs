//Write a program that asks the user to enter a wind speed (in knots), then
//displays the corresponding description
#[macro_use] extern crate text_io;
//process library to pause console
use std::process::Command;
//Need this to use the print!
use std::io::{self, Write};

fn main()
{
	let wind_speed : i32;
	print!("Please enter a wind speed: ");
	io::stdout().flush().unwrap();
	scan!("{}", wind_speed);
	if wind_speed < 1
	{
		print!("The wind is calm\n");
	}
	else if wind_speed <= 3
	{
		print!("The wind is a light air\n");
	}
	else if wind_speed <= 27
	{
		print!("The wind is a breeze\n");		
	}
	else if wind_speed <= 47
	{
		print!("The wind is a Gale\n");
	}
	else if wind_speed <= 63
	{
		print!("The wind is a Storm\n");
	}
	else 
	{
		print!("Hurriance force winds");
	}
	
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
