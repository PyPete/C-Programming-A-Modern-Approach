//Deals random hand of cards
//process::command used to pause console
use std::process::Command;
//Need this to access print!
use std::io::{self, Write};
#[macro_use] extern crate text_io;
extern crate rand;

//https://github.com/eliovir/rust-examples/blob/master/api-std-vec.rs
fn main()
{
	//Initialise variables
	//I tried using ndarray but couldnt get it to compile
	//seems like a rubbish way to initialise multi dimensional
	//arrays
	let mut in_hand = vec![vec![false;4];13];
	//you have to use usize for indexing arrays
	let (mut num_cards, mut rank, mut suit) : (i32,usize,usize);
	//rank and suit for the cards
	let rank_code = vec!['2', '3', '4', '5', '6', '7', '8',
					 '9', 't', 'j', 'q', 'k', 'a'];
	let suit_code = vec!['c', 'd', 'h', 's'];
	//ask user to input number of cards
	print!("Enter number of cards in hand: ");
	io::stdout().flush().unwrap();
	scan!("{}", num_cards);
	//out the hand
	print!("Your hand: ");
	while num_cards > 0
	{
		//pick a random unsigned integer
		suit = rand::random::<usize>() % 4 ;
		rank = rand::random::<usize>() % 13;
		//if you dont already have that card
		if !in_hand[rank][suit]
		{
			//update in_hand to show you have it now
			in_hand[rank][suit] = true;
			//reduce the number of cards
			num_cards = num_cards-1;
			//print out the card
			print!(" {}{}", rank_code[rank], suit_code[suit]);
			io::stdout().flush().unwrap();
		}
	}
	println!("");
	let _ = Command::new("cmd.exe").arg("/c").arg("pause").status();
}
