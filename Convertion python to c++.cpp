#include<iostream>
#include<string>

using namespace std;

int main(){
	string input;
	
	cout<<"What are you looking for?:";
	getline(cin,input);
	
	if (input =="Animagus"){	
		cout<<"A wizard who can shapeshift into an animal anytime.Basically, a magical transformer";
}	else if(input =="Brouhaha"){
		cout<<"A ridiculous, over-the-top fuss about something tiny. Maximum drama for minimum reason.";
}	else if(input =="Alohomora"){
		cout<<"The ultimate 'open sesame' spell for locked doors. No keys? No problem.";
}	else if(input =="Doppelganger"){
		cout<<"A total stanger who looks exactly like you. Like a real-life copy-paste moment.";
}	else if(input =="Cryptic"){	
		cout<<"Something so mysterious and confusing that it feels like a puzzle only geniuses can solve.";
}	else if(input =="Eureka"){	
		cout<<"That satisfying 'I Got It!' moment when you finally figure something out. Pure genius mode.";
}	else if(input =="Gobbledygook"){
		cout<<"A bunch of words that sound smart but make zero sense. Basically, fancy nonsense.";
}	else if(input =="Hound"){
		cout<<"Either a super-loyal dog or someone who just won't stop chasing after something.";
}	else if(input =="Inquisitive"){
		cout<<"That person who always ask 'why?' because they just need to know everything.";
}	else if(input =="Hoodwink"){
		cout<<"To pull off a sneaky trick on someone. A classical move for pranksters.";
}	else if(input =="Jinx"){
		cout<<"A weird little curse tgat vrings bad luck or that fun moment when you and a friend say the same thing at the same time.";
}	else if(input =="Idiosyncrasy"){
		cout<<"That one one quircky habit that makes someone uniquely them. Like putting ketchup on rice (No judgement haha!)";
}	else if(input =="Jocular"){
		cout<<"Always joking, always laughing. The life of the party who never takes things too seriously.";
}	else if(input =="Limerick"){		
		cout<<"A short, goofy poem with a catchy rhythm. Basically, the rap battle of poetry.";
}	else if(input =="Lickety-split"){	
		cout<<"Faster than fast. Like when you hear 'free food' and suddenly teleport there.";
}	else if(input =="Malarkey"){
		cout<<"A fancy way of saying that's total nonsense or you're making stuff up.";
}	else if(input =="Muggle"){	
		cout<<"A non-magical person. In other words, someone who totally misses out on all the wizarding fun.";
}	else if(input =="Nincompoop"){
		cout<< "A goofy, clueless person. Not mean, just hilariously lost.";
}	else if(input =="Shenanigans"){
		cout<< "Fun little mischief. Nothing too serious - just enough to keep life interesting.";
}	else if(input =="Quizzical"){
		cout<<"That face you make when you're so confused but trying to act like you get it.";
}	else if(input =="Cuddlebug"){
		cout<<"Someone who lives for hugs and snuggles. Basically, a human-sized teddy bear.";
}	else if(input == "Oompa Loompa"){
		cout<<"Tiny, orange, and full of energy person, but mostly just a symbol of chatic fun and chocolate magic.";
}	else if(input == "Goofy"){
		cout<<"A loveable goofball who trips over nothing but always gets a laugh out of it.";
}	else if(input == "Mushy"){				
		cout<<"Over-the-top sweet and sentimental. Like those rom-com love letters that you cringe and smile at the same time.";
}	else if(input == "Nibbly"){	
		cout<<"Small, snacklable bites or the act of sneakily eating like little mouse.";
}	else if(input == "Avada Kedavra"){	
		cout<<"The most dangerous spell in Harry Potter. Instant defeat, no second chances.";
}	else if(input == "Bazinga"){
		cout<<"The mic-drop of pranks. Say it after a joke or perfectly executed trick.";
}	else if(input == "Hakuna Matata"){
		cout<<"The ultimate chill mantra. No stress, No worries, just vibes.";
}	else if(input == "Tippy-toe"){
		cout<< "Walking super carefully like a ninja (or sneaking into the kitchen at midnight)";
}	else if(input == "Rumbly"){
		cout<<"That noisy stomach growl that basically yells, 'FEED ME'.";
}	else{
	cout<<"We dont have that word"<<endl;
}
	return 0;
}