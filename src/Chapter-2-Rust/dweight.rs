use std::process::Command;
//Computes the dimensional weight of a 12 x 10 x 8 box

fn main()
{
	let (height, length, width) = (8,12,10);
	let volume = height * length * width;
	let weight = (volume + 165) / 166;
	println!("Dimensions: {}x{}x{}", length, width, height);
	println!("Volume (cubic inches): {}", volume);
	println!("Dimensional weight (pounds): {}", weight);
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status(); //To pause console
}
