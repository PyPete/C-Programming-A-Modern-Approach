use std::process::Command;
use std::io;
use std::str::FromStr;
//Computes the dimensional weight of a 12 x 10 x 8 box

fn main()
{
	//Initialise variables for string
	//If I used just one string variable for each user input
	//it crashed. This feels like a poor solution
	let mut string = String::new();
	
	//Get user input
	println!("Enter height of the box: ");
	io::stdin().read_line(&mut string).ok();
	let height = i32::from_str(string.trim()).unwrap();
	string.clear();

	println!("Enter length of box: ");
	io::stdin().read_line(&mut string).ok();
	let length = i32::from_str(string.trim()).unwrap();
	string.clear();
	
	println!("Enter width of box: ");
	io::stdin().read_line(&mut string).ok();	
	let width = i32::from_str(string.trim()).unwrap();

	//Calculate volume
	let volume = height * length * width;
	//Calculate weight
	let weight = (volume + 165) / 166;
	//Print details
	println!("Volumne (cubic inches): {}", volume);
	println!("Dimensional weight (pounds: {}", weight);
	
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
