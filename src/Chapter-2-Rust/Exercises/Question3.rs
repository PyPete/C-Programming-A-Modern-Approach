//Write a program that computes the volume of a sphere with
//a 10-meter radius.
//Modify the above so that it prompts the user to enter the
//radius of the sphere
use std::process::Command;
use std::io;
use std::str::FromStr;

//Define constants
const PI: f32 = 3.14159265359;

fn main()
{
	let mut radius_str = String::new();
	println!("Please enter the radius of the sphere: ");
	io::stdin().read_line(&mut radius_str).ok();
	let r = f32::from_str(radius_str.trim()).unwrap();
	
	let volume = (4.0/3.0)*PI*(r*r*r);
	println!("Volume is {}", volume);
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
