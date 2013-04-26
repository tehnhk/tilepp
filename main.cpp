#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

int main(int argc, char **argv) {
    sf::RenderWindow window(sf::VideoMode(800,600,32),"Test");
    
    while (window.IsOpened())
    {
      sf::Event event;
      
      while (window.GetEvent(event))
      {
	if (event.Type == sf::Event::Closed)
	{
	  window.Close();
	}
      }
      
      window.Clear();
      
      window.Display();
    }
}
