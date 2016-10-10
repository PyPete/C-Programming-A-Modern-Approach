//Write a program that computes the volume of a sphere with
//a 10-meter radius.
use std::process::Command;
const PI: f32 = 3.14159265359;

fn main()
{
	let r = 10.0;
	let volume = (4.0/3.0)*PI*(r*r*r);
	println!("Volume is {}", volume);
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
